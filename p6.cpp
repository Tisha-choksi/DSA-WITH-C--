#include <iostream>
int main()
{
	int i,n;
	std::cout<<"enter the number: ";
	std::cin>>n;
	for(i=0;i<=n;i++)
	{
		if(i%2==1)
		{
			std::cout<<i<< " ";
		}
		else
		{
			continue;
		}
	}
}