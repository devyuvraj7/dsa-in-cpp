#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the Number: ";
    std::cin >> n;

    if (n % 2 == 0)
    {
        std::cout << "The given number " << n << " is even\n";
    }
    else
    {
        std::cout << "The given number " << n << " is odd\n";
    }

    return 0;
}