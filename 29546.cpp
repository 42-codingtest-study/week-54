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
  int N, M;
  cin >> N;
  vector<string> imgs(N);
  for (int i = 0; i < N; ++i) cin >> imgs[i];
  cin >> M;
  vector<pair<int, int>> intervals(M);
  for (int i = 0; i < M; ++i) cin >> intervals[i].first >> intervals[i].second;
  for (int i = 0; i < M; ++i) {
    int start = intervals[i].first, end = intervals[i].second;
    for (int j = start; j <= end; ++j) cout << imgs[j - 1] << "\n";
  }
}
