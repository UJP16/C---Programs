#include <iostream>
using namespace std;

int main() {
	// your code goes here
	for(int idx = 1; idx <=100; ++idx) //idx++ is same
	{
	    if(idx % 3 == 0 && idx % 5 == 0)
	     std::cout << "FUZZBUZZ" << std::endl;
	    else if(idx % 3 == 0)
	        std::cout << "FUZZ" << std::endl;
	    else if(idx % 5 == 0)
	        std::cout << "BUZZ" << std::endl;
	    else
	    std::cout << idx << std::endl;
	    
	}
	return 0;
}
