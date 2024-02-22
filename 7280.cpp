#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  int N, b;
  set<pair<char, int>> s;
  char c[4] = {'B', 'K', 'V', 'S'}, a;
  for (auto cc : c) {
    for (int i = 1; i < 14; i++) s.insert({cc, i});
  }
  for (int i = 0; i < 51; i++) {
    cin >> a >> b;
    s.erase({a, b});
  }
  auto answer = *s.begin();
  cout << answer.first << " " << answer.second;
}
