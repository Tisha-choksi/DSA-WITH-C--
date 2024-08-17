//prime number or not
#include<iostream>
int main(){
	int n,i,count=0;
	std::cout<<"enter a number : ";
	std::cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		std::cout<<"the given number "<<n<<" is prime number ."; 
	}
	else {
		std::cout<<"the given number "<<n<<" is not prime number .";
		for(i=1;i<=n;i++){
			if(n%i==0){
				std::cout<<"\n"<<i;
			}
		}
	
	}
}