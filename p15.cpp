//sum of n numbers
#include<iostream>
int main(){
	int i,n,sum=0;
	std::cout<<"enter number";
	std::cin>>n;
	for(i=0;i<=n;i++){
		sum=sum+i;
	}
	std::cout<<sum;
}