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
  int K;
  while (cin >> K && K != 0) {
    int N, M, X, Y;
    cin >> N >> M;
    for (int i = 0; i < K; ++i) {
      cin >> X >> Y;
      if (X == N || Y == M) {
        cout << "divisa" << endl;
      } else if (X < N && Y > M) {
        cout << "NO" << endl;
      } else if (X > N && Y > M) {
        cout << "NE" << endl;
      } else if (X < N && Y < M) {
        cout << "SO" << endl;
      } else {
        cout << "SE" << endl;
      }
    }
  }
}
