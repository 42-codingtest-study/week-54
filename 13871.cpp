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
  int N, C, S, position = 1;
  cin >> N >> C >> S;
  vector<int> commands(C);
  for (int i = 0; i < C; i++) cin >> commands[i];
  int count = (S == 1) ? 1 : 0;
  for (int i = 0; i < C; i++) {
    position += commands[i];
    if (position < 1)
      position = N;
    else if (position > N)
      position = 1;
    if (position == S) count++;
  }
  cout << count << endl;
}
