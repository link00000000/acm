#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int numIterations;
  cin >> numIterations;  
  for(int i = 0; i < numIterations; ++i)
  {
    int numMatches, numBought = 0;
    cin >> numMatches;
    
    // Buy one match if input is odd
    if(numMatches % 2 == 1)
    {
      numMatches += 1;
      numBought += 1;
    }

    if(numMatches == 2)
    {
      numBought += 2;
    }

    cout << numBought << '\n';

  }

  return 0;
}
