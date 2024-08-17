//sum of all integers diviisible by 2 between two numbers
#include<iostream>
int main(){
	int i,sum=0,num1,num2;
	std::cout<<"enter number 1 ";
	std::cin>>num1;
	std::cout<<"enter number 2 ";
	std::cin>>num2;
	for(i=num1;i<=num2;i++){
		if(i%2==0){
			sum+=i;
		}
	}
	std::cout<<"the sum of all integers divisible by 2 between "<<num1<< " and "<<num2<<" is "<<sum;
	
}