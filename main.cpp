#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vl = vector<ll>;

ll p;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> p;

  auto ans = vl(4, 0);
  while (0 < (p--)) {
    ll g, c, n;
    cin >> g >> c >> n;

    if (1 == g) {
      ++ans[3];
      continue;
    }

    if (3 == c) {
      ++ans[1];
      continue;
    }

    if (4 == c) {
      ++ans[2];
      continue;
    }

    ++ans[0];
  }

  for (const auto& x : ans) {
    cout << x << '\n';
  }

  return 0;
}