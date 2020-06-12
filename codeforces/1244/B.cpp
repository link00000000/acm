#include <iostream>
#include <string>

using namespace std;

int main()
{
  int numQueries;
  cin >> numQueries;

  for(int i = 0; i < numQueries; ++i)
  {
    int roomsPerFloor;
    string stairs;
    bool farSide; // Left = false, Right = true
    bool hasStairs = false;
    int stairLocation;
    cin >> roomsPerFloor >> stairs;

    for(int j = 0; j < stairs.length() / 2; ++j)
    {
      if(stairs[j] == '1')
      {
        farSide = true;
        hasStairs = true;
        stairLocation = j;
        break;
      }
      else if(stairs[stairs.length() - 1 - j] == '1')
      {
        farSide = false;
        hasStairs = true;
        stairLocation = j;
        break;
      }
    }

    if(!hasStairs)
    {
      cout << stairs.length() << '\n';
    }
    else
    {
      // Start on right side
      if(farSide)
      {
        cout << (((stairs.length() - stairLocation) * 2)) << '\n';
      }

      // Start on left side
      else
      {
        cout << ((stairLocation * 2) + 1) << '\n';
      }
    }

  }

  return 0;
}
