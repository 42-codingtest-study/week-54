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
  int year;
  while (cin >> year && year != 0) {
    if (year < 1896 || (year % 4 != 0))
      cout << year << " No summer games" << endl;
    else if ((year == 1916) || (year == 1940) || (year == 1944))
      cout << year << " Games cancelled" << endl;
    else if (year >= 2024)
      cout << year << " No city yet chosen" << endl;
    else
      cout << year << " Summer Olympics" << endl;
  }
}
