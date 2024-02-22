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
  int N, T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> N;
    vector<double> v(N);
    for (int j = 0; j < N; j++) cin >> v[j];
    for (int j = 1; j < N - 1; j++) v[j] = min(v[j], (v[j - 1] + v[j + 1]) / 2);
    cout << "Case #" << i << ": " << v[N - 2] << "\n";
  }
}
