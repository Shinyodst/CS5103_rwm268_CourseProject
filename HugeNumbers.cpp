#include<iostream>
#include<string>
#include <bits/stdc++.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::to_string;

long addDigits(long,long);
long subDigits(long,long);
string digitToString(long);
//int addSet(int);
//int subSet(int);

int main()
{	
	long x = 100090962;
	long y = 3354322;

	long a = addDigits(x,y);
	cout << "The addition of " << x << " & " << y << " is: " << a << endl;

	long b = addDigits(y,x);
	cout << "The addition of " << y << " & " << x << " is: " << b << endl;

	long c = subDigits(x,y);
	cout << "The subtraction of " << x << " & " << y << " is: " << c << endl;

	long d = subDigits(y,x);
	cout << "The subtraction of " << y << " & " << x << " is: " << d << endl;

	string formalDigits = digitToString(a);
	cout << formalDigits << endl;
}

long addDigits(long val1, long val2)
{
	int finalvalue;
	finalvalue = val1 + val2;
	return finalvalue;
}

long subDigits(long val1, long val2)
{
	int finalvalue;
	finalvalue = val1 - val2;
	return finalvalue;
}

string digitToString(long val)
{
	string converted = to_string(val);
	int size = converted.size();
	reverse(converted.begin(),converted.end());
	string temp;
	int flag = 0;

	for(int i = 0; i < size; ++i)
	{
		if(flag == 3)
		{
			temp += ',';
			--i;
			flag = 0;
		}
		else
		{
			temp += converted[i];
			++flag;
		}
	}
	reverse(temp.begin(),temp.end());
	return temp;
}

//int addSet(int size)
//{

//}

//int subSet(int size)
//{

//}
