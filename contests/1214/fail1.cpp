#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  int rubles, priceOfDollar, priceOfEuro;
  cin >> rubles >> priceOfDollar >> priceOfEuro;

  // Because smallest bill is 5
  priceOfEuro *= 5;

  int leastNumberRemaining = -1;

  int largerConversion = max(priceOfDollar, priceOfEuro);
  int smallerConversion = min(priceOfDollar, priceOfEuro);

  int iteration = 0;

  while(true)
  {
    int numberOfLarger = (rubles / largerConversion) - iteration;
    int remainingRubles = rubles - (numberOfLarger * largerConversion);

    int numberOfSmaller = remainingRubles / smallerConversion;
    remainingRubles -= (numberOfSmaller * smallerConversion);

    if(numberOfLarger > 0 && (remainingRubles < leastNumberRemaining || leastNumberRemaining == -1))
    {
      leastNumberRemaining = remainingRubles;
      ++iteration;
    }
    else
    {
      if(leastNumberRemaining == -1)
        cout << remainingRubles;
      else
        cout << min(leastNumberRemaining, remainingRubles);
      break;
    }
  }

  return 0;
}