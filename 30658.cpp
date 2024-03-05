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
  int N, A;
  while (1) {
    cin >> N;
    if (N == 0) break;
    vector<int> v;
    while (N--) {
      cin >> A;
      v.push_back(A);
    }
    for (int i = v.size() - 1; i >= 0; i--) cout << v[i] << "\n";
    cout << 0 << "\n";
  }
}
