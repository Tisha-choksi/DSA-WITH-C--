//print sine value mathematically
#include<iostream>
#include<cmath>
int factorial(int);
int main(){
	int accuracy,count=0,k=1;
	float x,temp,sine=0;
	std::cout<<"enter value of x(in degree) to find sin x value ";
	std::cin>>x;
	temp=x;
	x=(float)x*(3.14159/180);
	std::cout<<"enter value to get more accurate \n 3 for least and more accuracy \n";
	std::cin>>accuracy;
	do
	{
		if(count%2==0)
		{
			sine=(float)sine+(pow(x,k)/factorial(k));
			
		}
		if(count%2==1)
		{
			sine=(float)sine-(pow(x,k)/factorial(k));
		}
		count++;
		k=k+2;
		
	}
	while(count<=accuracy);
	std::cout<<"sine"<<temp<<" = "<<sine<<" calculated mathematically.";
	std::cout<<"sine"<<temp<<" = "<<sin(x)<<" calculated using library function.";
}
int factorial(int val){
	int factorial=1,i;
	for(i=1;i<=val;i++){
		factorial=factorial*i;
		
	}
	return(factorial);
}