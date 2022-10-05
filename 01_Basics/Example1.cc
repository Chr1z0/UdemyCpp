#include <iostream>

// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.

//Debug: Compiler führt 1:1 geschriebenes Programm aus
//Release: Compiler versucht zu verstehen was Programm macht & optimiert dieses (performanter)

int main()
{
    double userNumber = 0;

    std::cout << "Enter the side length of your square: " << std::endl;
    std::cin >> userNumber;

    double Perimeter = userNumber * 4;
    double Area = userNumber * userNumber;

    std::cout << "The Perimeter of your square is: " << Perimeter << std::endl;
    std::cout << "The Area of your square is: " << Area << std::endl;

    return 0;
}
