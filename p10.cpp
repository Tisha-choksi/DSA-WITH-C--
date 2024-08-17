#include <iostream>
int main(){
	int nodays,years,weeks,days;
	std::cout<<"enter a days :";
	std::cin>>nodays;
	years=nodays/365;
	weeks=(nodays%365)/7;
	
	days=(nodays%365)%7;
	std::cout<<nodays<<" = "<<years<<"years "<<weeks<<"weeks "<<days<<"days";
}