#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int n, f, flag = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> f;
    if (f % 2 != 0) {
      cout << "Bem me quer" << "\n";
      flag = 1;
      break;
    }
  }
  if(!flag) cout << "Mal me quer" << "\n";
  return 0;
}