#include <iostream>

using namespace std;
int main()
{
  int rubles, priceOfDollar, priceOfEuro;
  cin >> rubles >> priceOfDollar >> priceOfEuro;

  priceOfEuro *= 5;

  int iteration = 0;
  int min = -1;

  while(true)
  {
    int remaining = (rubles - (iteration * priceOfEuro)) % priceOfDollar;
    if(rubles < iteration * priceOfEuro)
      break;
    if(remaining < min || min == -1)
      min = remaining;
    ++iteration;
  }

  cout << min;
  return 0;
}