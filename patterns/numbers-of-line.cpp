#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the N = ";
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    return 0;
}