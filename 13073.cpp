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
  int N, t;
  cin >> t;
  while (t--) {
    cin >> N;
    ll s1 = 0, s2 = 0, s3 = 0;
    for (ll i = 1; i <= N; i++) s1 += i;
    for (ll i = 1; i <= N; i++) s2 += (i * 2) - 1;
    for (ll i = 1; i <= N; i++) s3 += (i * 2);
    cout << s1 << " " << s2 << " " << s3 << "\n";
  }
}
