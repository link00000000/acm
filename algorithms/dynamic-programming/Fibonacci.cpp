#include <iostream>
#include <unordered_map>

using namespace std;

int fib(int n)
{
    static unordered_map<int, int> cache;
    if (n <= 1)
    {
        return n;
    }

    if (cache.find(n) != cache.end())
    {
        return cache[n];
    }

    int result = fib(n - 1) + fib(n - 2);
    cache[n] = result;
    return result;
}

int main()
{
    int input;
    cin >> input;

    for (int i = 0; i < input; ++i)
    {
        cout << fib(i) << ' ';
    }
    cout << '\n';

    return 0;
}