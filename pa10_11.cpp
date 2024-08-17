#include<iostream>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=3;j++){
			std::cout<<i<<j;
			//std::cout<<j<<i;
		}
		std::cout<<"\n";
	}
}