#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define REPL(i,m,n) for(ll i=(ll)(m); i<(ll)(n); i++)
#define repl(i,n) REP(i,0,n)
#define all(v) v.begin(), v.end()
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;

int main() {
  string S;
  cin >> S;
  int a=S.size(), z=-1;
  rep(i, S.size()) {
    if(S[i] == 'A') a = min(a, i);
    if(S[i] == 'Z') z = max(z, i);
  }
  cout << z - a + 1 << endl;
  return 0;
}
