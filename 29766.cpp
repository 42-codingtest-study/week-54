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
  int pos, a = 0;
  cin >> s;
  while (s.find("DKSH") != s.npos) {
    pos = s.find("DKSH");
    s = s.substr(pos + 4, s.size() - pos + 4);
    a++;
  }
  cout << a;
}
