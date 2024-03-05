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

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  fast;
  int N;
  cin >> N;
  vector<int> d(N);
  for (int i = 0; i < N; i++) cin >> d[i];
  sort(d.begin(), d.end());
  if (find(d.begin(), d.end(), 0) != d.end()) {
    cout << "YES\n0\n";
    return 0;
  }
  if (N >= 2)
    cout << "YES\n" << d[1] << d[1] << "\n";
  else {
    if (d[0] == 1)
      cout << "NO\n";
    else
      cout << "YES\n" << d[0] << d[0] << "\n";
  }
  return 0;
}
