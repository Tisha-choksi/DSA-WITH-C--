#include<iostream>
int main(){
	int n=5;
	int i,j,x,y;
	for(i=1;i<=n;i++){
		x=i;
		y=n-i+1;
		for(j=1;j<=n;j++){
			if(j%2==1){
				std::cout<<x<<" ";
			}
			else
			{
				std::cout<<y<<" ";
			}
			x=x+n;
			y=y+n;
		}
		std::cout<<"\n";
	}


}