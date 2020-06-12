#include <iostream>

using namespace std;

int main()
{
  int bags[4];
  int total = 0;

  for(int i = 0; i < 4; ++i)
  {
    cin >> bags[i];
    total += bags[i];
  }

  if(total % 2 == 1)
  {
    std::cout << "NO";
    return 0;
  }

  const int candiesPer = total / 2;

  for(int i = 0; i < 4; ++i)
  {
    int single = bags[i];
    int triple = 0;
    for(int j = 0; j < 4; ++j)
    {
      if(i != j)
        triple += bags[j];
    }
    if(single == triple)
    {
      std::cout << "YES";
      return 0;
    }
  }

  for(int i = 0; i < 4; ++i)
  {
    for(int j = i + 1; j < 4; ++j)
    {
      if(bags[i] + bags[j] == candiesPer)
      {
        std::cout << "YES";
        return 0;
      }
    }
  }
  
  std::cout << "NO";
  return 0;
}