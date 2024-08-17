//subtraction  of 2 matrics
#include<iostream>
int main(){
	int i,j,rows,col;
	std::cout<<"enter number of rows: ";
	std::cin>>rows;
	std::cout<<"enter number of col: ";
	std::cin>>col;
	int a1[rows][col],a2[rows][col],diff[rows][col];
	std::cout<<"enter matrix 1 \n : ";
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			std::cin>>a1[i][j];
		}
	}
	std::cout<<"enter matrix 2 \n : ";
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			std::cin>>a2[i][j];
		}
	}
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			diff[i][j]=a1[i][j]-a2[i][j];
		}
	}
	std::cout<<"addition of above matrics is \n";
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			std::cout<<diff[i][j]<<" ";
		}
		std::cout<<"\n ";
	}
}