#include<iostream>
#include<cmath>  // Include the correct header for math functions

int main(){
    int choice;
    std::cout << "Enter:\n 1 for triangle\n 2 for square\n 3 for circle\n 4 for rectangle\n 5 for parallelogram\n";
    std::cin >> choice;

    switch(choice){
        case 1: {
            int a, b, c;
            float s, area;
            std::cout << "Enter sides of the triangle: ";
            std::cin >> a >> b >> c;
            s = (float)(a + b + c) / 2;
            area = sqrt(s * (s - a) * (s - b) * (s - c));  // sqrt() function needs correct syntax
            std::cout << "Area of triangle with sides " << a << ", " << b << ", " << c << " is " << area << std::endl;
            break;
        }
        case 2: {
            float side, area;
            std::cout << "Enter the side of the square: ";
            std::cin >> side;
            area = side * side;
            std::cout << "Area of square with side " << side << " is " << area << std::endl;
            break;
        }
        case 3: {
            float radius, area;
            std::cout << "Enter the radius of the circle: ";
            std::cin >> radius;
            area = 3.14159 * radius * radius;
            std::cout << "Area of circle with radius " << radius << " is " << area << std::endl;
            break;
        }
        case 4: {
            float length, breadth, area;
            std::cout << "Enter length and breadth of the rectangle: ";
            std::cin >> length >> breadth;
            area = length * breadth;
            std::cout << "Area of rectangle with length " << length << " and breadth " << breadth << " is " << area << std::endl;
            break;
        }
        case 5: {
            float base, height, area;
            std::cout << "Enter base and height of the parallelogram: ";
            std::cin >> base >> height;
            area = base * height;
            std::cout << "Area of parallelogram with base " << base << " and height " << height << " is " << area << std::endl;
            break;
        }
        default: {
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    }

    return 0;
}
