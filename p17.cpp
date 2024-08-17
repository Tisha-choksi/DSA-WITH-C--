//to print reverse of the number
#include<iostream>
int main(){
	int dummy,n,rev=0,x;
	std::cout<<"enter a number: ";
	std::cin>>n;
	dummy=n;
	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	std::cout<<"the reverse of the "<<dummy<<" is "<<rev;
}