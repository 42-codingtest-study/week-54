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
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (i % 2 == 0) {
        if (j % 2 == 0)
          cout << "*";
        else
          cout << ".";
      } else {
        if (j % 2 == 0)
          cout << ".";
        else
          cout << "*";
      }
    }
    cout << "\n";
  }
}
