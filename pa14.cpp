#include<iostream>
int main(){
	int n=5;
	int i,j,x;
	for(i=1;i<=n;i++){
		x=n-i+1;
		for(j=1;j<=n;j++){
			std::cout<<x<<" ";
			x=x+n;
		}
		std::cout<<"\n";
	}
}