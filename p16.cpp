//sum of all digits in number 
#include<iostream>
int main(){
	int dummy,n,sum=0,x;
	std::cout<<"enter number :";
	std::cin>>n;
	dummy=n;
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}
	std::cout<<"the sum of the digits in "<<dummy<<" is "<<sum;
}
