#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::to_string;

int addDigits(int,int);
int subDigits(int,int);
string digitToString(int);
int addSet(int);
int subSet(int);

int main()
{	
	int x = 25532;
	int y = 915322;

	int a = addDigits(x,y);
	cout << "The addition of " << x << " & " << y << " is: " << a << endl;

	int b = addDigits(y,x);
	cout << "The addition of " << y << " & " << x << " is: " << b << endl;

	int c = subDigits(x,y);
	cout << "The subtraction of " << x << " & " << y << " is: " << c << endl;

	int d = subDigits(y,x);
	cout << "The subtraction of " << y << " & " << x << " is: " << d << endl;

	string formalDigits = digitToString(a);
	cout << formalDigits << endl;
	
}

int addDigits(int val1, int val2)
{
	int finalvalue;
	finalvalue = val1 + val2;
	return finalvalue;
}

int subDigits(int val1, int val2)
{
	int finalvalue;
	finalvalue = val1 - val2;
	return finalvalue;
}

string digitToString(int val)
{
	string converted = to_string(val);
	return converted;
}

//int addSet(int size)
//{

//}

//int subSet(int size)
//{

//}
