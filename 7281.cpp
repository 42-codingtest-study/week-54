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
  vector<int> v;
  int N, a, b, answer = 0;
  cin >> N;
  while (N--) {
    cin >> a >> b;
    if (b) v.push_back(a);
  }
  for (int i = 1; i < v.size(); i++) answer = max(v[i] - v[i - 1], answer);
  cout << answer;
}
