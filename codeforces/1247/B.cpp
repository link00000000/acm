#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {

  int numQueries;
  cin >> numQueries;
  while(numQueries--) {

    // k, d, n
    int scheduleLength, numShows, length;
    cin >> scheduleLength >> numShows >> length;

    /**
     * EDGE: d = n
     */
    if(scheduleLength == length) {
      cout << numShows;
      continue;
    }

    // Populate vector
    vector<int> schedule(scheduleLength);
    for(int i = 0; i < scheduleLength; ++i) {
      int show;
      cin >> show;
      schedule[i] = show;
    }

    auto iter1 = schedule.begin();
    auto iter2 = iter1 + length;
    map<int, int> counts;

    for(int i = 0; i < scheduleLength - length + 1; ++i) {

    }

  }

  return 0;
}