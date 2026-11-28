#include <bits/stdc++.h>
#include <vector>

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

int main() {
  FASTIO;
  int t;
  int a, b, l;
  int i1;
  int i2;
  cin >> t;
  int cont = 0;
  REP(i, 0, t - 1) {
    cin >> l >> a >> b;
    cont = 0;
    vector<int> straw(l, 0);
    vector<int> bl(l, 0);
    REP(j, 0, l - 1) {
      i1 = (j * a) % l;
      i2 = (j * b) % l;
      straw[i1] = 1;
      bl[i2] = 1;
    }
    REP(i, 0, l - 1) {
      if (straw[i] && bl[i])
        cont++;
    }
    cout << cont << ENDL;
  }

  return 0;
}