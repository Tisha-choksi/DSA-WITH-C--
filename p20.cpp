//factorial of number 
#include<iostream>
int main(){
	int n,factorial=1,i;
	std::cout<<"enter a number : ";
	std::cin>>n;
	for(i=1;i<=n;i++){
		factorial=factorial*i;
	}
	std::cout<<n<<"! = "<<factorial;
}