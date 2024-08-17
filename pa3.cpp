#include<iostream>
int main(){
	int n=5,x=2;
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			std::cout<<x<<" ";
			x+=2;
		}
		std::cout<<"\n";
	}
}