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
  int N, a = 0;
  string s;
  cin >> N;
  while (N--) {
    cin >> s;
    if (s.find("01") != s.npos || s.find("OI") != s.npos) a++;
  }
  cout << a;
}
