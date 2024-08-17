#include<iostream>
int main(){
	int n=5;
	int i,j;
	int x;
	for(i=1;i<=n;i++){
		x=i;
		for(j=1;j<=n;j++){
			std::cout<<x<<" ";
			x+=n;
		}
		std::cout<<"\n";
	}
}