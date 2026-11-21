#include <bits/stdc++.h>

#define ENDL "\n"

using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main() {
  vector<pair<char, ll>> o;
  int n;
  char op;
  ll num;
  cin >> n;
  for(int i=0; i<n; i++) {

    cin >> op >> num;
    if (op == '?') {
      ll resultado = num;
      for(auto par : o) {
        if (par.first == '+')
          resultado += par.second;
        else if (par.first == '*')
          resultado *= par.second;
      }
	  cout << resultado % MOD << ENDL;
    } else {
      o.push_back({op, num});
    }
  }
  return 0;
}