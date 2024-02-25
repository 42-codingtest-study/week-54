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

int ball[4] = {1, 0, 0, 2};

int main() {
  fast;
  int tmp;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A')
      tmp = ball[0], ball[0] = ball[1], ball[1] = tmp;
    else if (s[i] == 'B')
      tmp = ball[0], ball[0] = ball[2], ball[2] = tmp;
    else if (s[i] == 'C')
      tmp = ball[0], ball[0] = ball[3], ball[3] = tmp;
    else if (s[i] == 'D')
      tmp = ball[1], ball[1] = ball[2], ball[2] = tmp;
    else if (s[i] == 'E')
      tmp = ball[1], ball[1] = ball[3], ball[3] = tmp;
    else
      tmp = ball[2], ball[2] = ball[3], ball[3] = tmp;
  }
  for (int i = 0; i < 4; i++)
    if (ball[i] == 1) cout << i + 1 << "\n";
  for (int i = 0; i < 4; i++)
    if (ball[i] == 2) cout << i + 1 << "\n";
}
