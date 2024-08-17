//simple structure 2 
#include<iostream>
#include<string>
struct Book{
	int id,price;
	char name[100];
}b1,b2;
int main(){
	
	std::cout<<"enter book 1 id : ";
	std::cin>>b1.id;
	std::cout<<"enter book 1 name: ";
	std::cin>>b1.name;
	std::cout<<"enter book 1 price: ";
	std::cin>>b1.price;
	std::cout<<"enter book 2 id: ";
	std::cin>>b2.id;
	std::cout<<"enter book 2 name: ";
	std::cin>>b2.name;
	std::cout<<"enter book 2 price: ";
	std::cin>>b2.price;
	std::cout<<"book id: "<<b1.id<<"\n";
	
	std::cout<<"book name: "<<b1.name<<"\n";
	
	std::cout<<"book price: "<<b1.price<<"\n";
	std::cout<<"book id: "<<b2.id<<"\n";
	
	std::cout<<"book name: "<<b2.name<<"\n";
	
	std::cout<<"book price: "<<b2.price<<"\n";
	
}