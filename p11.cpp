#include <iostream>
int main(){
	int a,b,c;
	std::cout<<"enter a:";
	std::cin>>a;
	
	std::cout<<"enter b:";
	std::cin>>b;
	std::cout<<"enter c:";
	std::cin>>c;
	if((a>b)&&(a>c))
	{
		std::cout<<a<<" is bigger.";
	}
	else if((b>a)&&(b>c))
	{
		std::cout<<b<<" is bigger.";
	}
	else
	{
		std::cout<<c<<" is bigger.";
	}
}