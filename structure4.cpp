//structure array
#include<iostream>
#include<string>
struct Book{
	int id,price;
	char name[100];
	
}b[3];
int main(){
	int i,max=3;
	for(i=0;i<max;i++)
	{
		std::cout<<"enter book "<<i+1<<" id: ";
		std::cin>>b[i].id;
		std::cout<<"enter book "<<i+1<<" name: ";
		std::cin>>b[i].name;
		std::cout<<"enter book "<<i+1<<" price: ";
		std::cin>>b[i].price;
	}
	for(i=0;i<max;i++)
	{
		std::cout<<"Book "<<i+1<<" id= "<<b[i].id<<"\n";
		
		std::cout<<"Book "<<i+1<<" name= "<<b[i].name<<"\n";
		
		std::cout<<"Book "<<i+1<<" price= "<<b[i].price<<"\n";
	}
}