#include <iostream>

using namespace std;

void floodFill(tiles, x, y) {
  // Outside range of grid
  if(x < 0 || x >= w || y < 0 || y >= h)
    return;
  
  // Incorrect 'Color'
  if(tiles[x][y] == 'x')
    return;

  floodFill(tiles, x - 1, y);
  floodFill(tiles, x + 1, y);
  floodFill(tiles, x, y - 1);
  floodFill(tiles, x, y + 1);
  
}

int main() {
  int w, h, Sx, Sy, Ex, Ey;
  char tiles[x][y];

  cin >> w >> h >> Sx >> Sy >> Ex >> Ey;

  for(int i = 0; i < w; ++i) {
    for(int i = 0; i < h; ++i) {
      cin >> tiles[x][y];
    }
  }

  floodFill(tiles, Sx, Sy);

  return 0;
}