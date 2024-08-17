#include <iostream>
int main(){
	int a,b;
	std::cout<<"enter a:";
	std::cin>>a;
	
	std::cout<<"enter b:";
	std::cin>>b;
	std::cout<<"the value of a is"<< a<<"and the value of b is "<<b<<"before swapping"<<".";
	a=a+b;
	b=a-b;
	a=a-b;
	std::cout<<"the value of a is"<< a<<"and the value of b is "<<b<<"after swapping";

}