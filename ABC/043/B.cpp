#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,n-1,0)
#define REPL(i,m,n) for(ll i=(ll)(m); i<(ll)(n); i++)
#define repl(i,n) REPL(i,0,n)
#define all(v) v.begin(), v.end()
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;

int main() {
  string s;
  cin >> s;
  string ans;
  for(char c: s) {
    if(c == '0') {
      ans += '0';
    } else if(c == '1') {
      ans += '1';
    } else {
      if(ans.size() > 0) ans.erase(ans.size()-1);
    }
  }
  cout << ans << endl;
  return 0;
}

