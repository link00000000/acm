#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {

  int numQueries;
  cin >> numQueries;
  while(numQueries--) {

    int scheduleLength, numShows, length;
    cin >> scheduleLength >> numShows >> length;

    vector<int> schedule(scheduleLength);
    for(int i = 0; i < scheduleLength; ++i) {
      int show;
      cin >> show;
      schedule[i] = show;
    }

    int smallestSetLength = -1;
    for(int i = 0; i < scheduleLength - length + 1; ++i) {
      unordered_set<int> shows;
      for(int j = 0; j < length; ++j) {
        shows.insert(schedule[i + j]);
      }
      if(shows.size() < smallestSetLength || smallestSetLength == -1)
        smallestSetLength = shows.size();
    }
    cout << smallestSetLength << '\n';

  }

  return 0;
}