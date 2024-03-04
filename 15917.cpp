#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  int Q, a;
  cin >> Q;
  while (Q--) {
    cin >> a;
    cout << ((a & (-a)) == a ? 1 : 0) << "\n";
  }
}
