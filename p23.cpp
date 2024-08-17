//print all prime number within given number 
#include<iostream>
int main(){
	int n,i,count=0,j;
	std::cout<<"enter a number : ";
	std::cin>>n;
	std::cout<<"the prime numbers upto "<<n<<" are ";
	for(i=0;i<=n;i++){
		count=0;
		for(j=0;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			std::cout<<"\n"<<i;
		}
	}
}