#include<iostream>
#include<vector>
#include<string.h>
#include <windows.h>
//12
using namespace std;

HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); //Color for text
HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE); //Color for text

void access()
{
	system("cls");
	SetConsoleTextAttribute(hstdout, 0x0a);
	cout << "for enqueue ----- 1 \n";
	SetConsoleTextAttribute(hstdout, 0x0c);
	cout << "for dequeue ----- 2 \n";
	SetConsoleTextAttribute(hstdout, 0x0e);
	cout << "for peek  ------- 3 \n";
	SetConsoleTextAttribute(hstdout, 0xb);
	cout << "for isfull  ----- 4\n";

}
		if (TAIL == 5)
		{
			TAIL = 0, fp++;
		}
	}//end if
	else
	{
		SetConsoleTextAttribute(hstdout, 0x0f);
		cout << "Full array\n";
	}//end else

}//end push

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




int main()
{
	access();			//namayesh nenu
	int s = 1;
	int a;

	while (s)
	{
		s = input_number
			access();			//namayesh nenu
			push(a);
			break;
		case 2:
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
			break;
		
		}//end swith

	}//end while
}//end main






