#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int cent, real;
  cin >> n;
  int s1r, s1c, s2r, aux;
  s1r = s1c = s2r = 0;
  for (int i = 0; i < n; i++) {
    cin >> real >> cent;
    s1r += real;
    s1c += cent;
    s2r += real;
    if (cent >= 50) {
      s2r += 1;
    }
  }
  if (s1c >= 100) {
    aux = s1c / 100;
    s1r += aux;
	s1c%=100;
  }
  if (s1c >= 50) s1r+=1;
  cout << min(s1r, s2r) << "\n";
  return 0;
}