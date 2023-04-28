#include<iostream>
#include<string>
#include <bits/stdc++.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::to_string;
using std::stol;

long addDigits(long,long);
long subDigits(long,long);
string digitToString(long);
string addDecimalPosition(string,int);
string addStrings(string,string);
string subStrings(string,string);
bool compareStrings(string,string);

int main()
{	
	long x = 300;
	long y = 720;

	long a = addDigits(x,y);
	cout << "The addition of " << x << " & " << y << " is: " << a << endl << endl;;

	string formalDigits = digitToString(a); // outputs 1,020
	cout << formalDigits << endl << endl;

	formalDigits = addDecimalPosition(formalDigits,0); // outputs .1020
	cout << formalDigits << endl;

	formalDigits = digitToString(a);
	formalDigits = addDecimalPosition(formalDigits,1); // outputs 1.020
	cout << formalDigits << endl;

	formalDigits = digitToString(a);
	formalDigits = addDecimalPosition(formalDigits,2); // outputs 10.20
	cout << formalDigits << endl;

	formalDigits = digitToString(a);
	formalDigits = addDecimalPosition(formalDigits,3); // outputs 102.0
	cout << formalDigits << endl;

	formalDigits = digitToString(a);
	formalDigits = addDecimalPosition(formalDigits,4); // outputs 1020.
	cout << formalDigits << endl << endl;

	string testingAddition = "150.72";
	formalDigits = digitToString(a);
	formalDigits = addDecimalPosition(formalDigits,2); // changed formalDigits to 10.20

	string sum = addStrings(formalDigits,testingAddition); // outputs 150.72
	cout << sum << endl;

	string difference = subStrings(formalDigits,testingAddition); // outputs -140
	cout << difference << endl;

	if(compareStrings(sum,difference)) //should print not equal
		cout << "the strings are equal" << endl;
	else
		cout << "the strings are not equal" << endl;

	if(compareStrings(sum,sum)) //should print equal
		cout << "the strings are equal" << endl;
	else
		cout << "the strings are not equal" << endl;
}

long addDigits(long val1, long val2)
{
	long finalvalue;
	finalvalue = val1 + val2;
	return finalvalue;
}

long subDigits(long val1, long val2)
{
	long finalvalue;
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

string addDecimalPosition(string s, int i)
{
	int flag = 0;
	for(int j = 0; j < s.size(); ++j)
	{
		if(s[j] == '.')
			flag = 1;
	}

	string temp;
	for(int m = 0; m < s.size(); ++m)
	{
		if(s[m] == ',')
			continue;
		temp += s[m];
	}

	if(flag == 1 || (i > temp.size()))
	{
		return s;
	}
	else
	{
		string temp2;
		string temp3;
		for(int k = 0; k < temp.size(); ++k)
		{
			if(k == i)
			{
				for(int n = k; n < temp.size(); ++n)
				{
					temp3 +=  temp[n];
				}
				break;
			}
			else
			{
				temp2 += temp[k];
			}
		}

		if(temp2.size() != 0)
		{
			long int holder = stol(temp2);
			temp2 = digitToString(holder);
		}
		temp = temp2 + '.' + temp3;
		return temp;
	}
}

string addStrings(string s1, string s2)
{
	string temp;
	string temp2;

	for(int i = 0; i < s1.size(); ++i)
	{
		if(s1[i] == ',')
			continue;
		temp += s1[i];
	}

	for(int i = 0; i < s2.size(); ++i)
	{
		if(s2[i] == ',')
			continue;
		temp2 += s2[i];
	}

	cout << temp << endl;
	cout << temp2 << endl;

	float value = stof(temp);
	float value2 = stof(temp2);

	float sum = value + value2;
	string finalsum = to_string(sum);
	return finalsum;
}

string subStrings(string s1, string s2)
{
	string temp;
	string temp2;

	for(int i = 0; i < s1.size(); ++i)
	{
		if(s1[i] == ',')
			continue;
		temp += s1[i];
	}

	for(int i = 0; i < s2.size(); ++i)
	{
		if(s2[i] == ',')
			continue;
		temp2 += s2[i];
	}

	cout << temp << endl;
	cout << temp2 << endl;

	float value = stof(temp);
	float value2 = stof(temp2);

	float sum = value - value2;
	string finalsum = to_string(sum);
	return finalsum;
}

bool compareStrings(string s1, string s2)
{
	if(s1 == s2)
		return true;
	else
		return false;
}
