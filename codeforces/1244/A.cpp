#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
  int numQueries, numLectures, numClasses, lecturesPerPen, classesPerPencil, capacity;
  cin >> numQueries;

  for(int i = 0; i < numQueries; ++i) {
    cin >> numLectures >> numClasses >> lecturesPerPen >> classesPerPencil >> capacity;
    int pensRequired = ceil((double)numLectures / lecturesPerPen);
    int pencilsRequired = ceil((double)numClasses / classesPerPencil);

    if(pensRequired + pencilsRequired > capacity)
      cout << -1 << '\n';
    else
      cout << pensRequired << ' ' << pencilsRequired << '\n';
  }

  return 0;
}
