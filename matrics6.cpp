//compare 2 matrices
#include<iostream>
int main(){
	int i,j,rows_1,col_1,rows_2,col_2,flag=1;
	std::cout<<"enter number of rows and cols of matrics 1 \n: ";
	std::cin >> rows_1 >> col_1;
	std::cout<<"enter number of rows and cols of matrics 2 \n: ";
	std::cin >> rows_2 >> col_2;
	int a1[rows_1][col_1],a2[rows_2][col_2];
	if(rows_1==rows_2&&col_1==col_2)
	{
		std::cout<<"enter matrics 1:";
		for(i=0;i<rows_1;i++)
		{
			for(j=0;j<col_1;j++)
			{
				std::cin>>a1[i][j];
			}
		}
		std::cout<<"enter matrics 1:";
		for(i=0;i<rows_2;i++)
		{
			for(j=0;j<col_2;j++)
			{
				std::cin>>a2[i][j];
			}
		}
		std::cout<<"matrics 1 is \n";
		for(i=0;i<rows_1;i++)
		{
			for(j=0;j<col_1;j++)
			{
				std::cout<<a1[i][j];
			}
			std::cout<<"\n";
		}
		std::cout<<"enter matrics 1:";
		for(i=0;i<rows_2;i++)
		{
			for(j=0;j<col_2;j++)
			{
				std::cout<<a2[i][j];
			}
			std::cout<<"\n";
		}
		for(i=0;i<rows_1;i++)
		{
			for(j=0;j<col_1;j++)
			{
				if(a1[i][j]!=a2[i][j])
				{
					flag=0;
				}
			}
		}
		if(flag==1)
		{
			std::cout<<"both matrics are eqal \n";
		}
		else
		{
			std::cout<<"both are not eqal \n";
		}
	}
	else
	{
		std::cout<<"matrices can not compared \n";
		
	}
}