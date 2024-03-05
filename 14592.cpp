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

bool customCompare(const vector<int>& a, const vector<int>& b) {
  if (a[0] != b[0]) return a[0] > b[0];
  if (a[1] != b[1]) return a[1] < b[1];
  if (a[2] != b[2]) return a[2] < b[2];
  return a[3] < b[3];
}

int main() {
  fast;
  int N, S, C, L;
  cin >> N;
  vector<vector<int>> v;
  for (int i = 1; i <= N; i++) {
    cin >> S >> C >> L;
    v.push_back({S, C, L, i});
  }
  sort(v.begin(), v.end(), customCompare);
  cout << v[0][3];
}
