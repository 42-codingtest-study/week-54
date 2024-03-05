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
  int T;
  ll a = 0;
  cin >> T;
  vector<int> v(5, 0);
  for (int i = 0; i < T; i++) cin >> v[i];
  a += v[0] > v[2] ? (v[0] - v[2]) * 508 : (v[2] - v[0]) * 108;
  a += v[1] > v[3] ? (v[1] - v[3]) * 212 : (v[3] - v[1]) * 305;
  a += v[4] ? v[4] * 707 : 0;
  cout << a * 4763;
}
