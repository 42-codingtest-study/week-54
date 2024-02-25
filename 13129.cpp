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
  int A, B, N;
  cin >> A >> B >> N;
  for (int i = 1; i <= N; i++) cout << A * N + B * i << " ";
}
