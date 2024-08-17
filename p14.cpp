#include <iostream>
int main(){
	float basicPay,dearnessAllowance,houseRentAllowance,grossSalary,providentfund;
	std::cout<<" enter basic pay:";
	std::cin>>basicPay;
	houseRentAllowance=0.2*basicPay;
	dearnessAllowance=0.4*basicPay;
	providentfund=0.12*basicPay;
	grossSalary=basicPay+dearnessAllowance+houseRentAllowance+providentfund;
	std::cout<<"basicPay = "<<basicPay;
	std::cout<<"\ndearnessAllowance = "<<dearnessAllowance;
	std::cout<<"\nhouseRentAllowance = "<<houseRentAllowance;
	std::cout<<"\ngrossSalary = "<<grossSalary;
	std::cout<<"\nprovidentfund = "<<providentfund;
}