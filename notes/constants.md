### Different Kinds of Constant Modifiers


To help distinguish between compile time and run time constants, C++11 introduces
the ```cpp constexpr ``` keyword.

* Use ```cpp constexpr ``` to declare compile-time constants.
* Use ```cpp const ``` to declare run-time constants.

```cpp
constexpr double gravity (9.8); // ok, the value of 9.8 can be resolved at compile-time
constexpr int sum = 4 + 5; // ok, the value of 4 + 5 can be resolved at compile-time
 
std::cout << "Enter your age: ";
int age;
std::cin >> age;
constexpr int myAge = age; // not okay, age can not be resolved at compile-time

const int myAgeConst = age; // Okay
```

* Use const variables to declare symbolic constants (avoid using Macros)

```cpp
#ifndef CONSTANTS_H
#define CONSTANTS_H
 
// define your own namespace to hold constants
namespace constants
{
    const double pi(3.14159);
    const double avogadro(6.0221413e23);
    const double my_gravity(9.2); // m/s^2 -- gravity is light on this planet
    // ... other related constants
}
#endif
```

Usage

```cpp
#include "constants.h"
double circumference = 2 * radius * constants::pi;
```