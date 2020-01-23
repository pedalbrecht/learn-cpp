#include <iostream>

int main() {

    int i, x, y;
    std::string(b) = "Buzz";
    std::string(a) = "Fizz";

    for (i = 1; i <= 100; i++)
    {
        x = i % 3;
        y = i % 5;
        if ((x != 0) && (y != 0))
            std::cout << i;
        if (x == 0)
            std::cout << a;
        if (y == 0)
            std::cout << b;
        std::cout << "\n";
    }

    return 0;
}
