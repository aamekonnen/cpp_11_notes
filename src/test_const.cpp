#include <iostream>

namespace constants
{
    constexpr double pi(3.14159);
    constexpr double avogadro(6.0221413e23);
    constexpr double my_gravity(9.2); // m/s^2 -- gravity is light on this planet
}


int main()
{

    std::cout << "Value of pi             : " << constants::pi <<std::endl;
    std::cout << "Value of avogadro's no. : " << constants::avogadro <<std::endl;

    return 0;
}