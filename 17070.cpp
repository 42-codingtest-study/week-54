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
  int N;
  cin >> N;
  int arr[N][N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) cin >> arr[i][j];
  int dp[N][N][3];
  memset(dp, 0, sizeof(dp));
  dp[0][1][0] = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 2; j < N; j++) {
      if (arr[i][j] == 1) continue;
      if (arr[i][j] == 0) {
        dp[i][j][0] += dp[i][j - 1][0] + dp[i][j - 1][2];
      }
      if (i > 0 && arr[i][j] == 0) {
        dp[i][j][1] += dp[i - 1][j][1] + dp[i - 1][j][2];
      }
      if (i > 0 && j > 0 && arr[i][j] == 0 && arr[i - 1][j] == 0 &&
          arr[i][j - 1] == 0) {
        dp[i][j][2] +=
            dp[i - 1][j - 1][0] + dp[i - 1][j - 1][1] + dp[i - 1][j - 1][2];
      }
    }
  }
  cout << dp[N - 1][N - 1][0] + dp[N - 1][N - 1][1] + dp[N - 1][N - 1][2];
}
