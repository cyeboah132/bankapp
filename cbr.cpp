#include <iostream>

void change(int *x, int *y);
int main()
{

    int x = 10, y = 20;

    change(&x, &y);
    std::cout << "main: " << x << " " << y << std::endl;
    return 0;
}

void change(int *x, int *y)
{
    *x = 20;
    *y = 30;
    std::cout << "function: " << *x << " " << *y << std::endl;
}
