//simple structure 
#include<iostream>
#include<string>
struct Book{
	int id,price;
	char name[100];
};
int main(){
	struct Book b;
	std::cout<<"enter book id: ";
	std::cin>>b.id;
	std::cout<<"enter book name: ";
	std::cin>>b.name;
	std::cout<<"enter book price: ";
	std::cin>>b.price;
	std::cout<<"book id: "<<b.id;
	
	std::cout<<"book name: "<<b.name;
	
	std::cout<<"book price: "<<b.price;
	
}