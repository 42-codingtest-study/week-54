#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  map<char, int> m = {{'.', 0},  {'K', 0},  {'k', 0}, {'P', 1},  {'p', -1},
                      {'N', 3},  {'n', -3}, {'B', 3}, {'b', -3}, {'R', 5},
                      {'r', -5}, {'Q', 9},  {'q', -9}};
  string s;
  int a = 0;
  for (int i = 0; i < 8; i++) {
    cin >> s;
    for (int j = 0; j < 8; j++) {
      a += m[s[j]];
    }
  }
  cout << a;
}
