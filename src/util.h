#ifndef UTIL_H
#define UTIL_H

#include <limits>

void toContinue()
{
    bool isBrowsing{true};

    while (isBrowsing)
    {
        char toContinue{};

        std::cout << '\n';
        std::cout << "< Enter 'x' to return to the menu. >" << std::endl;
        std::cin >> toContinue;

        if (toContinue == 'x' || toContinue == 'X')
        {
            isBrowsing = false;
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

#endif // UTIL_H
