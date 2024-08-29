#include<iostream>
int main(){
    int i,j,num,t;
    std::cout<<"enter number of elements \n";
    std::cin>>num;
    int a[num];
    std::cout<<"enter number \n";
    for(i=0;i<num;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    std::cout<<"assending order of given number is ";
    for(i=0;i<num;i++)
    {
        std::cout<<a[i];
    }
}