//STRUCTURE USING FUNCTION 
#include<iostream>
#include<string>
void bookprint(struct Book);
struct Book{
	int id,price;
	char name[100];
}b;
int main(){
	std::cout<<"enter book id: ";
	std::cin>>b.id;
	std::cout<<"enter book name: ";
	std::cin>>b.name;
	std::cout<<"enter book price: ";
	std::cin>>b.price;
	bookprint(b);	
}
void bookprint(struct Book b1){
	std::cout<<"book id: "<<b1.id;
	
	std::cout<<"book name: "<<b1.name;
	
	std::cout<<"book price: "<<b1.price;
}