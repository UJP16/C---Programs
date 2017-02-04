#include <iostream>
using namespace std;

enum ORDER_STATES
{
    OPEN,  //0
    SENT,  //1
    CLOSED, //2
    CANCEL,  //3
    INVALID //4
};
int main() {
	// your code goes here
	std::cout << OPEN << std::endl;
	std::cout << SENT << std::endl;
	std::cout << CLOSED << std::endl;
	std::cout << CANCEL << std::endl;
	std::cout << INVALID << std::endl;
	
	ORDER_STATES myOrderState = CLOSED;
	
	if( myOrderState == OPEN)
	{
	   //trader : act on it 
	}
	else if(myOrderState == SENT)
	{
	    //wait for acknowlegdment
	}
		else if(myOrderState == CLOSED)
	{
	    //write to db and do settellement
	}
		else if(myOrderState == CANCEL)
	{
	    //write to db its cancelled
	}
		else if(myOrderState == INVALID)
	{
	//promt user to correct the order
	}
	
	switch(myOrderState)
	{
	    case OPEN:
	    //
	    break;
	    case SENT:
	    //
	    break;
	    case CLOSED:
	    //
	    break;
	    case CANCEL:
	    //
	    break;
	    case INVALID:
	    //
	    break;
	}
	//statement here
	
	return 0;
}
