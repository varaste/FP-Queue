#include<iostream>
#include<vector>
#include<string.h>
#include <windows.h>
//12
using namespace std;

HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); //Color for text
HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE); //Color for text

	cout << "for peek  ------- 3 \n";
	SetConsoleTextAttribute(hstdout, 0xb);
	cout << "for isfull  ----- 4\

void peek()
{
	if (!empty())
	{
		cout << a[HEAD];
	}//end if
	else
	{
		SetConsoleTextAttribute(hstdout, 0x0f);
		cout << "Empty array\n";

		cout << "Empty array\n";
	}//end else

}//end pop




			access();			//namayesh nenu
			pop();
			break;
		case 3:
			access();			//namayesh nenu
			peek();
			cout << endl;
			break;
		case 4:
			access();			//namayesh nenu
			cout << full() << endl;


