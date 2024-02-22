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
  string s, a;
  cin >> N;
  while (N--) {
    cin >> s;
    if (s.find('S') != s.npos) a = s;
  }
  cout << a;
}
