#include <iostream>
int main()
{
	int i;
	std::cout<<"enter the number:";
	std::cin >>i;
	if(i%2==0)
	{
		std::cout << i << " is even." << std::endl;
	}
	else 
	{
		std::cout << i << " is odd." << std::endl;
	}
}