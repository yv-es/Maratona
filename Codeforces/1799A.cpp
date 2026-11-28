#include <algorithm>
#include<bits/stdc++.h>
#include <iostream>
#include <iterator>

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

deque<int> v;
deque<int> dq;
deque<int> descartados;
int main () {
	FASTIO;
	int t;
	int n, m;
	int p;
	bool achou = false;
	int cont = 0;
	cin >> t;
	REP(i, 0, t-1){
		cin >> n >> m;
		v.clear();
		dq.clear();
		descartados.clear();
		cont = 0;
		REP(j, 0, n-1){
			v.push_back(j+1);
			descartados.push_back(-1);
		}
		REP(k, 1, m){
			cin >> p;
			auto valor = find(v.begin(), v.end(), p);
			if(valor == v.end()){
				if(n >= v.back() && descartados[v.back()-1] == -1){
					descartados[v.back()-1] = k;
					cont++;
				}	
				v.pop_back();
				v.push_front(p);
			}
			// else v.erase(valor);
		
		}
		// REP(l, 1, descartados.size()){
		// 	// auto it = find(descartados.begin(), descartados.end(), l);
		// 	// int indice = distance(descartados.begin(), it);
		// 	cout << descartados[l-1] << " ";
		// }
		for(auto d : descartados)
			cout << d << " ";
		// REP(l, 1, n){
		// 	auto it = find(descartados.begin(), descartados.end(), l);
		// 	if(it != descartados.end()){
		// 		int indice = distance(descartados.begin(), it);
		// 		cout << indice + 1 << " ";
		// 	}else {
		// 		cout << "-1 ";
		// 	}
		// }
		cout << ENDL;
	}
	return 0;
}