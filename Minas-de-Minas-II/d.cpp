#include <bits/stdc++.h>
#include <cmath>
#include <iostream>

#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define CLEAR(vetor) memset(vetor, 0, sizeof vetor)
#define DEBUG(var) cout << #var << ": '" << var << "'\n"
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define ENDL "\n"


using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int POS_INF = 1e9;
const int NEG_INF = -1e9;
const int MOD = 1e9 + 7;

struct Circulo{
  long long  x, y, r;
}typedef circulo;

vector<circulo> c;

int main() {
  FASTIO;
  int n, j, flag = 0;
  long long  xc, yc, rc;
  // vector<dardos> d;
  cin >> n >> j;
  // cout << n << j << ENDL;
  REP(i, 0, n-1){
    cin >> xc >> yc >> rc;
    c.push_back({xc, yc, rc});
    // cout << i << ENDL;
  }
  REP(k, 0, j-1){
    cin >> xc >> yc;
    flag = 0;
    for(int i=n-1; i>=0; i--){  
      long long  result = (xc - c[i].x) * (xc - c[i].x) + (yc - c[i].y) * (yc - c[i].y);
      if(result <= c[i].r * c[i].r){
        flag = i + 1;
        break;
      }
    }
    cout << flag << ENDL;
    // d[j].x = xc;
    // d[j].y = yc;
  }

  return 0;
}