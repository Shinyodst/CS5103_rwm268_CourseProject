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
	long x = 300;
	long y = 720;
	long z = -500;

	long a = addDigits(x,y);
	cout << "The addition of " << x << " & " << y << " is: " << a << endl;

	long aa = addDigits(x,z);
	cout << "The addition of " << x << " & " << z << " is: " << aa << endl;

	long b = addDigits(y,x);
	cout << "The addition of " << y << " & " << x << " is: " << b << endl;

	long bb = addDigits(z,x);
	cout << "The addition of " << z << " & " << x << " is: " << bb << endl;

	long c = subDigits(x,y);
	cout << "The subtraction of " << x << " & " << y << " is: " << c << endl;

	long cc = subDigits(x,z);
	cout << "The subtraction of " << x << " & " << z << " is: " << cc << endl;

	long d = subDigits(y,x);
	cout << "The subtraction of " << y << " & " << x << " is: " << d << endl;

	long dd = subDigits(z,x);
	cout << "The subtraction of " << z << " & " << x << " is: " << dd << endl;

	string formalDigits = digitToString(a);
	cout << formalDigits << endl;

	string formalDigits1 = digitToString(aa);
	cout << formalDigits1 << endl;

	string formalDigits2 = digitToString(b);
	cout << formalDigits2 << endl;

	string formalDigits3 = digitToString(bb);
	cout << formalDigits3 << endl;

	string formalDigits4 = digitToString(c);
	cout << formalDigits4 << endl;

	string formalDigits5 = digitToString(cc);
	cout << formalDigits5 << endl;

	string formalDigits6 = digitToString(d);
	cout << formalDigits6 << endl;

	string formalDigits7 = digitToString(dd);
	cout << formalDigits7 << endl;
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

	int flag2 = 0;

	for(int i = 0; i < size; ++i)
	{
		if(flag2 == 0)
		{
			if(converted[size-1] == '-')
			{
				--flag;
			}
			flag2 = 1;
		}
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
