#include <iostream>
int main(){
	int year;
	std::cout<<"enter a year :";
	std::cin>>year;
	if(year%400==0)
	{
		std::cout<<year<<" "<<"is leap year.";
	}
	else if(year%100==0)
	{
		std::cout<<year<<" "<<"is not leap year.";
	}
	else if(year%4==0)
	{
		std::cout<<year<<" "<<"is  leap year.";
	}
	else
	{
		std::cout<<year<<" "<<"is not leap year.";
	}
}