#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;

int main() {
  ll W, H, x, y;
  cin >> W >> H >> x >> y;
  cout << 1.0 * W * H / 2.0 << ' '
       << ((x == W-x && y == H-y) ? 1 : 0) << endl;
  return 0;
}

