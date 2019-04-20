/*
Given a number ending in a 3 has a multiple which consists only of ones.
Eg. 3 has 111 and 13 has 111111 etc.

You have to write a C function which will take a number ending in 3
and find the number the multiple consisting of all ones.
You need to return the number of 1s in that final Number .

Note that the traditonal method of finding 
multiples of current number and checking if it has all ones wont work 
as the multiple can be out of Interger Range ,but the count may not be.

return -1 for error cases

INPUT: Single integer number

OUTPUT: count of one's in the answer obtained

ERROR CASES: return -1 

Sample Input : 3
Output : 3 (111 is the multiple )
*/
#include<iostream>
using namespace std;

int countOnes(int number)
{
	long long rem=1, i=1;
	int counter=1;
	if(number % 10 != 3)
	{
		return -1;
	}
	while(rem!=0)
	{
		i = (10*i+1);
		rem = i % number;
		counter++;
	}
	return counter;
}

int main()
{
	int num;
	cout << "Enter a number ending with 3: " << endl;
	cin >> num;
	cout << "No.of ones in a multiple for this number is: " << countOnes(num) << endl;
	
}


