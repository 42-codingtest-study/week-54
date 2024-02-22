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
  int N;
  string p, t;
  cin >> p >> N;
  while (N--) {
    cin >> t;
    int a = 0, b = 0;
    for (int i = 0; i < 4; i++) {
      if (p[i] == t[i]) b++;
      if (p.find(t[i]) != p.npos) a++;
    }
    cout << a << " " << b << "\n";
  }
}
