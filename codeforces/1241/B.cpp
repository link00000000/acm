#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
  int iterations;
  cin >> iterations;

  while(iterations--)
  {
    string s1, s2;
    cin >> s1 >> s2;

    set<char> set1, set2;
    for(auto itr = s1.begin(); itr != s1.end(); itr = next(itr))
      set1.insert(*itr);
    for(auto itr = s2.begin(); itr != s2.end(); itr = next(itr))
      set2.insert(*itr);

    bool isNo = true;
    for(auto itr = set1.begin(); itr != set1.end(); itr = next(itr))
    {
      if(set2.find(*itr) != set2.end())
      {
        isNo = false;
        break;
      }
    }
    cout << (isNo ? "NO" : "YES") << '\n';
  }

  return 0;
}
