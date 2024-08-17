//structure pointer 
#include<iostream>
#include<string>
struct Book{
	int id,price;
	char name[100];
	
}b,*b1;
int main(){
	b1=&b;
	std::cout<<"enter book id: ";
	std::cin>>b.id;
	std::cout<<"enter book name: ";
	std::cin>>b.name;
	std::cout<<"enter book price: ";
	std::cin>>b.price;
	std::cout<<"book id: "<<b1->id;
	
	std::cout<<"book name: "<<b1->name;
	
	std::cout<<"book price: "<<b1->price;
}