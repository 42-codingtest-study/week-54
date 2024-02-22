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
  int N, T;
  cin >> T;
  while (T--) {
    cin >> N;
    for (int i = 0; i < N / 5; i++) cout << "++++ ";
    for (int i = 0; i < N % 5; i++) cout << "|";
    cout << "\n";
  }
}
