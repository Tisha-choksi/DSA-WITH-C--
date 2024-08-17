#include <iostream>
int main(){
	int i,j;
	float salary,bonus;
	char gender;
	std::cout<<" enter M for male and F for females";
	std::cin>>gender;
	std::cout<<"enter salary";
	std::cin>>salary;
	if(gender=='M' || gender=='m')
	{
		if(salary>10000)
		{
			bonus=(float)(salary*0.05);
		}
		else
		{
			bonus=(float)(salary*0.07);
		}
	}
	if(gender=='F' || gender=='f')
	{
		if(salary>10000)
		{
			bonus=(float)(salary*0.1);
		}
		else
		{
			bonus=(float)(salary*0.12);
		}
	}
	salary+=bonus;
	std::cout<<"bonus = "<<bonus<<"\nsalary = "<<salary;		
}