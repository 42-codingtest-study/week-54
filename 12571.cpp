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
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    int N;
    cin >> N;
    vector<pair<int, int>> wires(N);
    for (int i = 0; i < N; i++) {
      cin >> wires[i].first >> wires[i].second;
    }

    int answer = 0;
    for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {
        if ((wires[i].first < wires[j].first &&
             wires[i].second > wires[j].second) ||
            (wires[i].first > wires[j].first &&
             wires[i].second < wires[j].second)) {
          answer++;
        }
      }
    }
    cout << "Case #" << t << ": " << answer << "\n";
  }
}
