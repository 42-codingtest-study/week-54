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
  int N, B, a = 0;
  cin >> N;
  vector<int> v(N);
  for (int i = 0; i < N; i++) cin >> v[i];
  for (int i = 0; i < N; i++) {
    cin >> B;
    if (B >= v[i]) a++;
  }
  cout << a;
}
