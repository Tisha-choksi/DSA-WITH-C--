#include<iostream>

int main(){
    int i, j, rows, col, flag = 1, x;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> col;

    int a1[rows][col], a2[rows][col], add[rows][col];

    std::cout << "Enter matrix 1: \n";
    for(i = 0; i < rows; i++){
        for(j = 0; j < col; j++){
            std::cin >> a1[i][j];
        }
    }

    while(flag){
        std::cout << "Enter matrix 2: \n";
        for(i = 0; i < rows; i++){
            for(j = 0; j < col; j++){
                std::cin >> a2[i][j];
            }
        }

        for(i = 0; i < rows; i++){
            for(j = 0; j < col; j++){
                add[i][j] = a1[i][j] + a2[i][j];
            }
        }

        std::cout << "Enter 1 to continue adding another matrix, or 0 to finish: ";
        std::cin >> x;

        if(x == 1){
            flag = 1;
            for(i = 0; i < rows; i++){
                for(j = 0; j < col; j++){
                    a1[i][j] = add[i][j];
                }
            }
        } else {
            flag = 0;
        }
    }

    std::cout << "The final sum of matrices is: \n";
    for(i = 0; i < rows; i++){
        for(j = 0; j < col; j++){
            std::cout << add[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
