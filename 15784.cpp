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
  int N, a, b;
  cin >> N >> a >> b;
  vector<vector<int>> g(N + 1, vector<int>(N + 1));
  for (int i = 1; i <= N; i++)
    for (int j = 1; j <= N; j++) cin >> g[i][j];
  bool happy = true;
  for (int i = 1; i <= N; i++)
    if (g[a][i] > g[a][b] || g[i][b] > g[a][b]) happy = false;
  cout << (happy ? "HAPPY" : "ANGRY");
}
