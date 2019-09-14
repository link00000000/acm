#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  long long n, m, a;
  cin >> n >> m >> a;

  double x = (long long)ceil((double)n / a);
  double y = (long long)ceil((double)m / a);

  cout << (x * y);

  return 0;
}