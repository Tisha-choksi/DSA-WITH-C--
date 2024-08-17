//multiplication of 2 matrics
#include<iostream>
int main(){
	int i,j,k,rows_1,col_1,rows_2,col_2,sum=0;
	std::cout<<"enter number of rows and cols of matrics 1 \n: ";
	std::cin >> rows_1 >> col_1;
	std::cout<<"enter number of rows and cols of matrics 2 \n: ";
	std::cin >> rows_2 >> col_2;
	int a1[rows_1][col_1],a2[rows_2][col_2],mul[rows_1][col_2];
	if(col_1==rows_2){
		std::cout<<"enter matrix 1 \n : ";
	for(i=0;i<rows_1;i++){
		for(j=0;j<col_1;j++){
			std::cin>>a1[i][j];
		}
	}
	std::cout<<"enter matrix 2 \n : ";
	for(i=0;i<rows_2;i++){
		for(j=0;j<col_2;j++){
			std::cin>>a2[i][j];
		}
	}
	for(i=0;i<rows_1;i++){
		for(j=0;j<col_2;j++){
			for(k=0;k<rows_2;k++){
				sum+=a1[i][k]*a2[k][j];	
			}
			mul[i][j]=sum;
			sum=0;
		}
	}
	std::cout<<"multiplication of above matrics is \n";
	for(i=0;i<rows_1;i++){
		for(j=0;j<col_2;j++){
			std::cout<<mul[i][j]<<" ";
		}
		std::cout<<"\n ";
	}
	}
	else{
		std::cout<<"not possible with the given rows and colums ....";
	}
}