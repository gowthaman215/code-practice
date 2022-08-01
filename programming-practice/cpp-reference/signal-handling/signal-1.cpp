/*
SIGINT - produces a receipt for an active signal
SIGTERM - Sends a termination request to the program
SIGBUS - Bus error which indicates access to an invalid address
SIGILL - Detects an illegal command
SIGALRM - This is used by the alarm() function and indicates the expiration of the timer.
SIGABRT - Termination of a program, abnormally
SIGSTOP - The signal cannot be blocked, handled, and ignored and can stop a process
SIGSEGV - Invalid access to storage
SIGFPE - Overflow operations or mathematically incorrect operations like divide by zero
SIGUSR1, SIGSUR2 - User-Defined Signal
*/


// CPP Program to demonstrate the signal() function
#include <csignal>
#include <iostream>
using namespace std;

void signal_handler(int signal_num)
{
	cout << "The interrupt signal is (" << signal_num
		<< "). \n";

	// It terminates the program
	exit(signal_num);
}

int main()
{
	// register signal SIGABRT and signal handler
	signal(SIGABRT, signal_handler);

	while (true)
		cout << "Hello GeeksforGeeks..." << endl;
	return 0;
}

