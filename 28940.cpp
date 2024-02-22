#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int w, h, n, a, b;
  cin >> w >> h >> n >> a >> b;
  if (w < a || h < b) {
    cout << -1;
    return 0;
  }
  int lettersPerRow = w / a;
  int rowsPerPage = h / b;
  int lettersPerPage = lettersPerRow * rowsPerPage;
  int totalPages = (n + lettersPerPage - 1) / lettersPerPage;
  cout << totalPages;
}
