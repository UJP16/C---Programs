#include <iostream>
using namespace std;

int main() {
    float sum;
    int prices[100];
    float total;
    int min,max,count;
	
	prices[0] = 20;
	prices[1] = 10;
	prices[2] = 6;
	prices[3] = 15;
	prices[4] = 32;
	total = 0;
	for (count = 0; count < 5; count++)
	{
		
		total = total + prices[count];
	}

	int average = total / 5;
	
	min = prices[0];
	max = prices[1];
	for(count = 0; count < 5; count++)
	{
	    if(prices[count] >= max)
	    {
	        max=prices[count];
	    }
	    else if(prices[count] <=min)
	    {
	        min = prices[count];
	    }
	}
	cout << "maximum value is -" << max <<endl;
	cout << "minimum value is -" << min <<endl;
	cout << "Average is  "<< average << endl;
	cout << "Sum is  "<< total << endl;
	// your code goes here
	return 0;
}
