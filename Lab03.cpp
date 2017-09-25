// lab03.cpp
// Miles Golding
// Cosc 2030
// Sep 25 2017


/*
Lab 03 Questions
======================================================================================
Question 1:  The sum from 1 to 20 is:  210
Question 2:	 The values overflow at n=256
Question 3:  The sum from 1 to 10000 is:  50005000
			    Long overflowed when n=65536  sum=-2147450880
Question 4:  The factorial overflows at n=35 and the product
				returns as "inf"
Question 5:  The factorial overflows at n=171 and the product maxes at inf
Question 6:  For the float values, the function overflows at n=10  total = 1.19209e-07
				For the double values, the function overflows at n=6  total = 2.22045e-16
				Because a double is more precise, the computer thinks that the 
				value is not 0 quicker then while using floats.
Question 7:  The code runs as if the float 4.4 value is less then the 4.4 value in 
				the comparison statement.
				The float does not have the accuracy to determine that it is the same value as 4.4.
Question 8:	 The double increases the precision of i and the compiler recognizes that 
				it is equal to the 4.4 in the comparison.
				This outputs the correct value
=====================================================================================
*/


#include <iostream>
using namespace std;

void sum(int n)  //will sum the numbers from 1 to n
{
	bool er = 0;	//error check
	long total = 0;	//the type of total can be changed to test overflow
	for (int i = 1; i <= n; i++)
	{
		total = i + total;
		cout <<i<<".  "<< total << endl;
		if (total < 0) //this will stop the process if there is an overflow
			{
			cout << "OVERFLOW" << endl << endl;
			er = 1;
			break; 
			}
	}
	if (er != 1) 
	{
		cout << "The sum from 1 to " << n << " is:  " << total << endl;
	}
	return;
}


void factorial(long n)
{
	double product = 1;
	bool er = 0;	//error check
	for (int i = 1; i <= n; i++)
	{
		product = i * product;
		cout << i << ".  " << product << endl;
		if (product < 0) //this will stop the process if there is an overflow
		{
			cout << "OVERFLOW" << endl << endl;
			er = 1;
			break;
		}
	}
	if (er != 1)
	{
		cout << "The product from 1 to " << n << " is:  " << product << endl;
	}
	return;
}

void strange(double n)
{
	double sum = 0;
	for (double i = 1; i <= n; i++)
	{

		sum += 1 / n;
	}
	double total = sum - 1.0;
	cout << total << endl;

}



int main()
{

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	/*
	//This part is used to test factorial
	cout << "Enter a number for calculation of n!  n= ";
	int n = 0;
	while (n != -99)
	{
		cin >> n;
		factorial(n);
	}
	//This part is used to test sum
	cout << "Enter a number to be summed up to.  n= ";
	int n = 0;
	while (n != -99)
	{
		cin >> n;
		sum(n);
	}
	*/
	return 1;
}