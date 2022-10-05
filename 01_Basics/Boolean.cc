#include <iostream>

// !true == false
// !false == true

int main()
{
    bool check1 = 0;
    bool check2 = 99; //0 = false, >0 = true
    int number;

    std::cout << check2 << std::endl;

    std::cout << "Please enter a Number: " << std::endl;
    std::cin >> number;

    bool check3 = (number >= 0 && number <= 10);
    std::cout << std::boolalpha << check3
              << std::endl; //std::boolalpha: gibt statt 1 true aus

    bool check4 = !(number >= 0 && number <= 10);
    std::cout << std::boolalpha << check4
              << std::endl; //std::boolalpha: gibt statt 1 true aus

    return 0;
}
