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
  string s;
  cin >> s;
  bool prev = s[0] == 's' ? true : false;
  for (int i = 1; i < s.size(); i++) {
    if (prev && s[i] == 's') {
      cout << "hiss";
      return 0;
    } else if (!prev && s[i] == 's')
      prev = true;
    else if (prev && s[i] != 's')
      prev = false;
  }
  cout << "no hiss";
}
