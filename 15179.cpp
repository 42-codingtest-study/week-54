#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  int N, x = 0, y = 0;
  string a, b, s;
  getline(cin, a), getline(cin, b);
  cin >> N >> s;
  for (int i = 0; i < N; i++) {
    if (s[i] == 'H') {
      if (i % 2)
        y++;
      else
        x++;
    } else if (s[i] == 'D') {
      if (i % 2)
        y = y == 6 ? y + 1 : y + 2;
      else
        x = x == 6 ? x + 1 : x + 2;
    } else if (s[i] == 'O') {
      if (i % 2)
        x++;
      else
        y++;
    }
    if (x >= 7 || y >= 7) break;
  }
  cout << a << " " << x << " " << b << " " << y << ". ";
  if (x >= 7 || y >= 7)
    cout << (x > y ? a : b) << " has won.\n";
  else if (x != y)
    cout << (x > y ? a : b) << " is winning.\n";
  else
    cout << "All square.\n";
}
