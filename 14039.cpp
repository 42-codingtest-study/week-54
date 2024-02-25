#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  vector<vector<int>> square(4, vector<int>(4));
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) cin >> square[i][j];
  int sum = 0;
  for (int i = 0; i < 4; i++) sum += square[0][i];
  bool isMagic = true;
  for (int i = 1; i < 4; i++) {
    int rowSum = 0, colSum = 0;
    for (int j = 0; j < 4; j++) rowSum += square[i][j], colSum += square[j][i];
    if (rowSum != sum || colSum != sum) {
      isMagic = false;
      break;
    }
  }
  cout << (isMagic ? "magic" : "not magic") << "\n";
}
