//sub N matrics
#include<iostream>
int main(){
	int i,j,rows,col,flag=1,x;
	std::cout<<"enter the number of rows: ";
	std::cin>>rows;
	std::cout<<"enter the number of col: ";
	std::cin>>col;
	int a1[rows][col],a2[rows][col],sub[rows][col];
	
	std::cout<<"enter matrics 1:";
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cin>>a1[i][j];
		}
	}
	do
	{
		std::cout<<"enter matrics 2:";
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cin>>a2[i][j];
		}
	}
	//diffrence of matrics
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			sub[i][j]=a2[i][j]-a1[i][j];
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<sub[i][j];
		}
		std::cout<<"\n";
	}
	std::cout<<"enter 1 to continue to subtract the above from another matrics else o\n";
	std::cin>>x;
	if(x==1)
	{
		flag=1;
		for(i=0;i<rows;i++)
		{
			for(j=0;j<col;j++)
			{
				a1[i][j]=sub[i][j];
				sub[i][j]=0;
			}
		}
	}
	else
	{
		flag=0;
	}
	
}
while(flag);
std::cout<<"final diffrence is \n";
for(i=0;i<rows;i++)
{
	for(j=0;j<col;j++)
	{
		std::cout<<sub[i][j];
	}
	std::cout<<"\n";
}
	
}