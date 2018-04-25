#include<iostream>
#include<vector>
#include<string.h>
#include <windows.h>

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
	SetConsoleTextAttribute(hstdout, 0x0d);
	cout << "for isempty ----- 5  \n";
}

int input_number()   // gereftane adad az 1 to 5
{
	int a;
	cin >> a;
	while (a > 5 || a < 1)
	{
		cin >> a;
	}//end while
	return a;
}

int a[5];//queue
int HEAD = 0;
int TAIL = 0;
int fp = 0, lp = 0;// cell_first    cell_last

bool empty() {									//barresi e khali bodane saf

	return TAIL == HEAD && fp == lp;
}//end empty

bool full() {									//barresi e por bodane saf

	return TAIL == HEAD && fp != lp;
}//end empty

void push(int x) {
	if (!full())
	{
		a[TAIL] = x;
		TAIL++;
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

	}//end else
}//end peek

void pop() {
	peek();
	if (!empty())
	{
		if (HEAD == 4)
		{
			HEAD = -1, lp++;
		}
		HEAD++;
	}//end if
	else
	{
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
		s = input_number();
		switch (s)
		{

		case 1:
			cin >> a;
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
		case 5:
			access();			//namayesh nenu
			cout << empty() << endl;
			break;
		}//end swith

	}//end while
}//end main






