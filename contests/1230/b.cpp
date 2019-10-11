#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int length, numChange;
  std::string input;
  
  cin >> length >> numChange;
  cin >> input;


  if(length == 1 && numChange > 0)
  {
    cout << '0';
    return 0;
  }

  for(int i = 0; i < length; ++i)
  {
    if(numChange == 0)
      break;

    if(i == 0 && input[i] != '1')
    {
      input[0] = '1';
      --numChange;
    }
    else if(i != 0 && input[i] != '0')
    {
      input[i] = '0';
      --numChange;
    }
  }

  cout << input;

  return 0;
}
