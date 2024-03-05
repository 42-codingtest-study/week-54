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
  int n;
  cin >> n;
  vector<int> stops(n);
  for (int i = 0; i < n; ++i) cin >> stops[i];
  ll energy = 0;
  for (int i = 1; i < n; ++i) {
    int jumpDistance = stops[i] - stops[i - 1];
    energy += (ll)jumpDistance * jumpDistance;
  }

  cout << energy << "\n";
}
