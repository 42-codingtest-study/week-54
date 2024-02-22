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
  vector<ll> v(3);
  for (int i = 0; i < 3; i++) cin >> v[i];
  sort(v.begin(), v.end());
  cout << v[1];
}
