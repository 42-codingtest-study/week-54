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
  vector<int> v(4);
  for (int i = 0; i < 4; i++) cin >> v[i];
  sort(v.rbegin(), v.rend());
  cout << v[0] + v[1] + v[2] + 1;
}
