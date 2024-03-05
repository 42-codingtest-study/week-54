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
  map<char, int> m = {
      {'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}, {'f', 0}, {'g', 0},
      {'h', 0}, {'i', 0}, {'j', 0}, {'k', 0}, {'l', 0}, {'m', 0}, {'n', 0},
      {'o', 0}, {'p', 0}, {'q', 0}, {'r', 0}, {'s', 0}, {'t', 0}, {'u', 0},
      {'v', 0}, {'w', 0}, {'x', 0}, {'y', 0}, {'z', 0},
  };
  int N, ans = -1;
  string s;
  char c = ' ';
  cin >> N >> s;
  for (int i = 0; i < N; i++) m[s[i]]++;
  for (int i = 0; i < 26; i++) {
    if (m['a' + i] > ans) {
      c = 'a' + i;
      ans = m['a' + i];
    }
  }
  cout << c << " " << ans;
}
