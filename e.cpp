#include <bits/stdc++.h>

using namespace std;

int main() {
	set<int> l;
	int n, q, o, num, line = 0, column = 0, idx = 0;
	cin >> n >> q;
	for(int i=0; i<n; i++)
	{
		cin >> o;
		l.insert(o);
	}
	for(int i=0; i<q; i++)
	{
		cin >> o >> num;
		switch(o)
		{
			case 1:
				l.insert(num);
				break;
			case 2:
				l.erase(num);
				break;
			case 3:
				for(int j: l)
				{
					if(j == num)
					{
						line = idx/4;
						column = idx - 4*line;
						cout << line + 1<< " " <<column + 1<< "\n";
						idx = 0;
						break;
					}
					idx++;
					
				}
				break;
			default:
				break;
		}
	}
	return 0;
}