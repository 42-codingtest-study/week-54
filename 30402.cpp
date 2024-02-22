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
  string s;
  int n = 0;
  cin.ignore();
  for (int i = 0; i < 15; i++) {
    getline(cin, s);
    if (s.find('w') != s.npos)
      n = 0;
    else if (s.find('b') != s.npos)
      n = 1;
    else if (s.find('g') != s.npos)
      n = 2;
  }
  cout << (n == 0 ? "chunbae" : n == 1 ? "nabi" : "yeongcheol");
}
