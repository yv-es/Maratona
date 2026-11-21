#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<string, int> d;
  string s;
  int c=0;
  int data;
  cin >> s >> data;
  d = {s, data};
  if(d.first == "segunda-feira") c = 4;
  else if(d.first == "terca-feira") c = 3;
  else if(d.first == "quarta-feira") c = 2;
  else if(d.first == "quinta-feira") c= 1;
  else if(d.first == "sabado") c = 6;
  else if(d.first == "domingo") c = 5;
  d.second+=c;
  while(d.second != 13){
	c+=7;
	d.second+=7;
	if(d.second > 30) d.second%=30;
  }
  cout << c << "\n";


  return 0;
}