#include <algorithm>
#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define DEBUG(x) cout << #x << ": '" << x << "'\n"
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define ENDL "\n"

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

const int POS_INF = 1e9;
const ll POS_LLINF = 4e18;
const int NEG_INF = -1e9;
const int MOD = 1e9 + 7;

vector<int> jp;
vector<int> maiores;

int main() {
  FASTIO;
  ll t, n, k, p, pt;
  int sobrou;
  int aux;
  cin >> t;
  REP(i, 0, t - 1) {
    ll qnt = 0;
    ll soma = 0;

    jp.clear();
    cin >> n >> k >> p;
    REP(j, 0, n - 1) {
      cin >> pt;
      jp.push_back(pt);
      qnt += jp[j];
    }
    sort(jp.begin(), jp.end());
    REP(m, 0, n - 1) {
      ll qnt2 = 0;
      if (m + k - 1 < n) {
        REP(j, 0, k - 1) qnt2 += jp[m + j];
        soma += max(qnt2, p);
        m += k - 1;
      } else
        soma += jp[m];
      // cout << m << ENDL;
    }
    // aux = n/k;
    // if(aux != 0){
    //   qnt2 = p * aux;
    //   sobrou = n - aux * k;
    //   if(sobrou){
    //     REP(m, 0, sobrou-1){
    //       qnt2+=jp[m];
    //     }
    //   }
    //   // cout << max(qnt, qnt2) << ENDL;
    // }
    // cout << soma << ENDL;
    cout << max(qnt, soma) << ENDL;
  }
  return 0;
}