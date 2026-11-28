#include<bits/stdc++.h>
 
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define DEBUG(x) cout << #x << ": '" << x << "'\n"
#define REP(i, a, b) for(int i=a; i<=b; i++)
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
const int MOD = 1e9+7;
 
int main () {
	FASTIO;
	int t;
	int a, b, c;
	cin >> t;
	REP(i, 0, t-1){
		cin >> a >> b >> c;
		if(a == b) cout << c << ENDL;
		else if (b == c) cout << a << ENDL;
		else if (a == c) cout << b << ENDL;
	}
	return 0;
}