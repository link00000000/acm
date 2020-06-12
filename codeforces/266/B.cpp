#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
  int numChildren, seconds;
  string queue;
  cin >> numChildren >> seconds >> queue;

  while(seconds--)
  {
    for(auto itr = queue.begin(); itr != prev(queue.end()); ++itr)
    {
      if(*itr == 'B')
      {
        swap(*itr, *next(itr));
        if(next(itr, 2) == queue.end())
          break;
        ++itr;
      }
    }
  }

  cout << queue << '\n';

  return 0;
}
