#include <iostream>

// Recursive function: Calculate the nth Fibonacci Number
// fib(n) = 1 1 2 3 5 8 13...
//      n = 1 2 3 4 5 6 7...

/**
 * @brief Calculate the nth fib number
 * 
 * @param n designates which number in the sequence we desire, start
 * @return int 
 */
int fib(int n);
// This is called a declaration!

int main ( )
{
    std::cout << "Hello, World!" << std::endl;
    for (int i{0}; i < 6; ++i)
    {
        std::cout << "fib(" << i << ") = " << fib(i) << std::endl;
    }
    return 0;
}

int fib(int n)
{
    if (n == 0 or n == 1)
    {
        // this is our base case
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
