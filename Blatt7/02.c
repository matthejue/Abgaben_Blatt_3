#include <stdio.h>

int ggt(int a, int b) {
  if (b == 0)
    // falls der Rest b gleich 0 ist gib den ggt a zurueck
    return a;
  else
    // suche weiter den ggt mit b als neuem a und a mod b als neuem b
    return ggt(b, a % b);
}

void main() {
  int ggt_result;
  ggt_result = ggt(16, 12); // Ruecksprungadresse 100
  printf("%d", ggt_result);
}
