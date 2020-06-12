#include <iostream>
#include <algorithm>

using namespace std;

bool coprime (int a, int b)
{
    return __gcd(a, b) == 1;
}

int main()
{
    int numQueries;
    cin >> numQueries;
    while(numQueries--)
    {
        int a, b;
        cin >> a >> b;

        cout << ((coprime(a, b) && a != b) || a == 1 || b == 1 ? "Finite" : "Infinite") << endl;
    }
}