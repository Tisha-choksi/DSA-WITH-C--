#include <iostream>
int main(){
	int a,b,i,multiplication=0;
	std::cout<<"enter a:";
	std::cin>>a;
	
	std::cout<<"enter b:";
	std::cin>>b;
	if(b>0)
	{
	a=a+b;
	b=a-b;
	a=a-b;
	}
	if(a>=0){
		for(i=1;i<=a;i++)
		multiplication+=b;	
	}
	if(a>=0){
		for(i=a;i<=-1;i++)
		multiplication-=b;	
	}
	std::cout<<"multiplication = "<<multiplication;
}
	