#include<iostream>

int main(){
    int n, i, j;
    bool isPrime;

    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "The prime numbers up to " << n << " are: ";
    
    for(i = 2; i <= n; i++){
        isPrime = true;
        for(j = 2; j <= i / 2; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            std::cout << i << " ";
        }
    }
    
    std::cout << std::endl;
    return 0;
}
