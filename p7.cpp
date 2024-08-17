#include <iostream>
int main(){
	int a,b,c;
	std::cout<<"enter a:";
	std::cin>>a;
	
	std::cout<<"enter b:";
	std::cin>>b;
	
	
	std::cout<<"the value of a is"<< a<<"and the value of b is "<<b<<"before swapping"<<".";
	c=a;
	a=b;
	b=c;
	std::cout<<"the value of a is"<< a<<"and the value of b is "<<b<<"after swapping";
}