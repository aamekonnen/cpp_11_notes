# include <iostream>

auto add(int x, int y) -> int;

int main()
{
    auto x = 3;
    auto y = 5;

    auto sum = add(x, y);

    std::cout << x << " + " << y << " = " << sum << std::endl;

    return 0;
}


int add(int x, int y)
{
    return x + y;
}