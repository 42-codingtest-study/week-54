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
  string s;
  cin >> s;
  if (s == "fdsajkl;" || s == "jkl;fdsa")
    cout << "in-out";
  else if (s == "asdf;lkj" || s == ";lkjasdf")
    cout << "out-in";
  else if (s == "asdfjkl;")
    cout << "stairs";
  else if (s == ";lkjfdsa")
    cout << "reverse";
  else
    cout << "molu";
}
