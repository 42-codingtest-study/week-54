#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  int N, dd, mm, yyyy, idx = 1;
  map<int, string> m = {{1, "Jan"}, {2, "Feb"},  {3, "Mar"},  {4, "Apr"},
                        {5, "May"}, {6, "Jun"},  {7, "Jul"},  {8, "Aug"},
                        {9, "Sep"}, {10, "Oct"}, {11, "Nov"}, {12, "Dec"}};
  while (cin >> N && N != 0) {
    cout << "Case #" << idx << ":\n";
    vector<int> cal(13, 0);
    for (int i = 0; i < N; i++) {
      cin >> dd >> mm >> yyyy;
      cal[mm]++;
    }
    for (int i = 1; i < 13; i++) {
      cout << m[i] << ":";
      while (cal[i]--) cout << "*";
      cout << "\n";
    }
    idx++;
  }
}
