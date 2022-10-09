/*******************************************************************************************************************************/
// Networking library provides many APIs to work on Network programming.
/*******************************************************************************************************************************/

#include <NetworkingLib.h>


//==========================================================================================
// 1. ConnectTo : To establish connection between application with connection IP port
//==========================================================================================

int connectTo(char *hostname ,int port)
{   

	int	sd;
	struct sockaddr_in pin;
	struct hostent *hp;

	if ((hp = gethostbyname(hostname)) == 0) {
		perror("gethostbyname");
		pthread_exit(0);

	}

	pin.sin_family = AF_INET;
	pin.sin_addr.s_addr = ((struct in_addr *)(hp->h_addr))->s_addr;
	pin.sin_port = htons(port);

	socklen_t optval;
	struct timeval tv;
	tv.tv_sec=4;
	tv.tv_usec = 0;
	optval=sizeof(tv);
	if ((sd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
		perror("socket");
		pthread_exit(0);
	}
	int ret = setsockopt(sd, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval));
	if( ret < 0 ) printf("setsockopt() Failed reuseaddr");

	struct linger lg;
	lg.l_onoff=1; 
	lg.l_linger=0;

	ret = setsockopt(sd,SOL_SOCKET, SO_LINGER,&lg,sizeof(lg));
	if( ret < 0 ) printf("setsockopt() Failed LINGER");

	ret = setsockopt(sd,SOL_SOCKET, SO_RCVTIMEO,&tv,optval);
	if( ret < 0 ) printf("setsockopt() Failed for(recv()) fd[");

	ret = setsockopt(sd,SOL_SOCKET, SO_SNDTIMEO,&tv,optval);
	if( ret < 0 ) printf("setsockopt() Failed for(send()) fd:   ");


	if (connect(sd,(struct sockaddr *)  &pin, sizeof(pin)) == -1) {
		perror("connect");
		pthread_exit(0);
	}

	return sd;

}
