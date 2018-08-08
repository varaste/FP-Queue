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

int input_number()
{
	int a;
	cin >> a;
	while ( a < 1||a > 5)
	{
		cin >> a;
	}
	return a;
}

int a[5];//queue
int HEAD = 0;
int TAIL = 0;
int fp = 0, lp = 0;// cell_first    cell_last
bool full() {
	return TAIL == HEAD && fp != lp;
}
bool empty() {
	return TAIL == HEAD && fp == lp;
}


void push(int x) {
	if (!full())
	{
		a[TAIL] = x;
		TAIL++;
		if (TAIL == 5)
		{
			TAIL = 0, fp++;
		}
	}
	else
	{
		SetConsoleTextAttribute(hstdout, 0x0f);
		cout << "Full array\n";
	}

}

void peek()
{
	if (!empty())
	{
		cout << a[HEAD];
	}
	else
	{
		SetConsoleTextAttribute(hstdout, 0x0f);
		cout << "Empty array\n";

	}
}

void pop() {
	peek();
	if (!empty())
	{
		if (HEAD == 4)
		{
			HEAD = -1, lp++;
		}
		HEAD++;
	}
	else
	{
		cout << "Empty array\n";
	}

}




int main()
{
	access();
	int s = 1;
	int a;

	while (s)
	{
		s = input_number();
		switch (s)
		{

		case 1:
			cin >> a;
			access();
			push(a);
			break;
		case 2:
			access();
			pop();
			break;
		case 3:
			access();
			peek();
			cout << endl;
			break;
		case 4:
			access();
			cout << full() << endl;
			break;
		case 5:
			access();
			cout << empty() << endl;
			break;
		}

	}
}





