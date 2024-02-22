#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int n, vector<int> times) {
  sort(times.begin(), times.end());
  long long minT = 1;
  long long maxT = (long long)times[times.size() - 1] * n;
  while (minT <= maxT) {
    long long midT = (maxT + minT) / 2;
    long long tmp = 0;
    for (long long t : times) tmp += midT / t;
    if (tmp >= n)
      maxT = midT - 1;
    else
      minT = midT + 1;
  }
  return maxT + 1;
}
