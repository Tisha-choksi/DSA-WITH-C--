//to find whether given number is palindrome or not
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
	if(dummy==rev)
	std::cout<<"the given number "<<rev<<" is palindrome.";
	else 
	std::cout<<"the given number "<<rev<<" is  not palindrome.";
}