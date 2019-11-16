#include <iostream>
#include <algorithm>

using namespace std;

bool coprime (int a, int b)
{
    return __gcd(a, b) == 1;
}

int main()
{
    while(true)
    {
        int a, b;
        cin >> a >> b;

        cout << (coprime(a, b) ? "Finite" : "Infinite") << endl;
    }
}