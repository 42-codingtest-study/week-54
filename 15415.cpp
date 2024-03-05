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
  int N, W, w, l, sum = 0;
  cin >> W >> N;
  while (N--) {
    cin >> w >> l;
    sum += w * l;
  }
  cout << sum / W;
}
