#include<iostream>
int main(){
	int n=5;
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			std::cout<<i*j<<" ";
		}
		std::cout<<"\n";
	}
}