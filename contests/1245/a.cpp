#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool enoughConsecWhite(const vector<int> & whiteNums, int amount) {
  if (whiteNums.size() < amount)
    return false;
  
  for (int i = 0; i < amount; ++i) {
    auto itr = whiteNums.end();
    if (*itr != *(itr - 1))
      return false;
  }
  return true;
}

int main() {
    int numQueries;
    cin >> numQueries;

    while (numQueries--) {
      int a, b;
      cin >> a >> b;

      vector<int> whiteNums;
      whiteNums.push_back(0);

      do {
        int next;
        auto prevWhite = whiteNums.end();
        while (*prevWhite)

        whiteNums.push_back(next);

      } while (!enoughConsecWhite(whiteNums, min(a, b)));
    }

    return 0;
}

