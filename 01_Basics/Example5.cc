#include <iostream>

// 1.) User-Input: integer number
// 2.) Compute if the number is a prime number
// 3.) Print out the result

// Prime Number: Only divisble by itself and 1 with a remainder of 0

int main()
{
    int number;
    bool isPrime = true;
    std::cout << "Please enter a number: ";
    std::cin >> number;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
        }
    }

    if (isPrime == true)
    {
        std::cout << "Your Number is a prime number." << std::endl;
    }
    else
    {
        std::cout << "Your Number is not a prime number." << std::endl;
    }

    return 0;
}
