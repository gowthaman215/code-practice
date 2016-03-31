//============== User Library ==========================//
#include "DateTimeLibrary.h"
#include "StringLibrary.h"

//============== Common defines ========================//

#include <CommonDefines.h>


int main()
{

	// 	cout << dateDiff("2015-2-1", "2015-2-20") << endl;
	// 	cout << getTokenByIndex("2015-02-1",'-',1) << endl;
	// 	cout << getTokenByIndex("ONE TWO THREE FOUR FIVE",' ',4) << endl;
	//  cout << formatDate("21-12-2112") << endl;
			//char *line = "eee,sdfd,10,10,10,10";
			char *line = "eee,sdfd,10,10,10,10,";
			cout << line << endl;
			cout << readnext(line,',') << endl;
			cout << readnext(line,',') << endl;
			cout << readnext(line,',') << endl;
			cout << readnext(line,',') << endl;
			cout << readnext(line,',') << endl;
			cout << readnext(line,',') << endl;
			cout << readnext(line,',') << endl;

}
