#include<iostream>
using std::cout;
using std::endl;
using std::cin;

void addSet(int*,int*,int,int);
void subSet(int*,int*,int,int);

int main()
{	
	int flag = 0;
	int size1;
	int size2;
	int temp;

	do
	{
		temp = -1;
		cout << "How many numbers exist for the first set?" << endl;
		cout << endl;
		cin >> temp;
		if(temp < 0)
		{
			cout << "Error, amount has to be a positive value" << endl;
			cout << endl;
			flag = 1;
		}
		else
		{
			size1 = temp;
			flag = 0;
		}
	}while(flag == 1);

	int set1[size1];

	do
	{
		temp = -1;
		cout << "How many numbers exist for the second set?" << endl;
		cout << endl;
		cin >> temp;
		if(temp < 0)
		{
			cout << "Error, amount has to be a positive value" << endl;
			cout << endl;
			flag = 1;
		}
		else
		{
			size2 = temp;
			flag = 0;
		}
	}while(flag == 1);

	int set2[size2];

	for(int i = 0; i < size1; i++)
	{
		int temp;
		cout << "Value #" << (i+1) << " is: ";
		cin >> temp;
		if(!cin)
		{
			cin.clear(); // reset failbit
    		cin.ignore(1000, '\n'); //skip bad input
			cout << "Error, not a number, please retry" << endl;
			i--;
		}
		else
			set1[i] = temp;
	}

	for(int i = 0; i < size2; i++)
	{
		int temp;
		cout << "Value #" << (i+1) << " is: ";
		cin >> temp;
		if(!cin)
		{
			cin.clear(); // reset failbit
    		cin.ignore(1000, '\n'); //skip bad input
			cout << "Error, not a number, please retry" << endl;
			i--;
		}
		else
			set2[i] = temp;
	}

	addSet(set1,set2,size1,size2); //test case 1, add set 2 to set 1
	subSet(set1,set2,size1,size2); //test case 2, subtract set 2 from set 1

	addSet(set2,set1,size2,size1); //test case 3, add set 1 to set 2
	subSet(set2,set1,size2,size1); //test case 4, subtract set 1 from set 2
}

void addSet(int* seta, int* setb, int size1, int size2)
{
	int value1 = 0;
	int value2 = 0;
	int finalvalue = 0;

	for(int i = 0; i < size1; ++i)
	{
		value1 = value1 + seta[i];
	}

	for(int i = 0; i < size2; ++i)
	{
		value2 = value2 + setb[i];
	}

	finalvalue = value1 + value2;
	cout << "The addition of these two sets is: " << finalvalue << endl;
}

void subSet(int* seta, int* setb, int size1, int size2)
{
	int value1 = 0;
	int value2 = 0;
	int finalvalue = 0;

	for(int i = 0; i < size1; ++i)
	{
		value1 = value1 + seta[i];
	}

	for(int i = 0; i < size2; ++i)
	{
		value2 = value2 + setb[i];
	}

	finalvalue = value1 - value2;
	cout << "The subtraction of these two sets is: " << finalvalue << endl;
}