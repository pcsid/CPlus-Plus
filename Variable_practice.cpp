#include <iostream>

int main(){
    //flip variables
    int file_size = 100;
    int counter = 0;
    //rando vars
    double sales = 9.99;
    const double pi = 3.14;

    std::cout << file_size;
    std::cout << " ";
    std::cout << counter;
    std::cout << " ";

    double temp = 0.00;
    temp = file_size;
    file_size = counter;
    counter = temp;

    std::cout << file_size;
    std::cout << " ";
    std::cout << counter;
    std::cout << " ";

    //math
    double x = 10;
    int y = 3;
    double z = x/y;
    std::cout << z;
    std::cout << " " << std::endl;

    y = y*3;
    std::cout << "y = " << y << std::endl;
    std::cout << "enter a number";
    int value;
    std::cin >> value;
    std::cout << "you entered " << value;
    return 0;
}