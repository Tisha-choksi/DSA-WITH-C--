//fibonacci of given number 
#include<iostream>
int main(){
	int a=0,b=1,n,c,count;
	std::cout<<"enter a number : ";
	std::cin>>n;
	std::cout<<"the series is  : ";
	std::cout<<"\n"<<a<<" \n"<<b;
	count=2;
	while(count<n){
		c=a+b;
		a=b;
		b=c;
		std::cout<<c<<" \n";
		count++;
	}
}