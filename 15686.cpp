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
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> house, chicken;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int x;
      cin >> x;
      if (x == 1)
        house.push_back({i, j});
      else if (x == 2)
        chicken.push_back({i, j});
    }
  }
  vector<int> v(chicken.size(), 1);
  fill(v.begin(), v.begin() + chicken.size() - M, 0);
  int ans = 1e9;
  do {
    int sum = 0;
    for (int i = 0; i < house.size(); i++) {
      int minDist = 1e9;
      for (int j = 0; j < chicken.size(); j++) {
        if (v[j]) {
          minDist = min(minDist, abs(house[i].first - chicken[j].first) +
                                     abs(house[i].second - chicken[j].second));
        }
      }
      sum += minDist;
    }
    ans = min(ans, sum);
  } while (next_permutation(v.begin(), v.end()));
  cout << ans;
}
