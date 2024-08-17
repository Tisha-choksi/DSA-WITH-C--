#include<iostream>
int main(){
	int n=5,k=1;
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			std::cout<<" "<<k++;
		}
		std::cout<<"\n ";
	}
}