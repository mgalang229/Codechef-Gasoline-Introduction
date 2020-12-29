#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int f[n];
		for (int i = 1; i <= n; i++) {
			cin >> f[i];
		}
		// the current gas will be first value from the array
		int gas = f[1];
		// set 'id' to 2 to for the next car
		int id = 2;
		int dist = 0;
		// run a while loop until gas is 0
		while (gas > 0) {
			// for every loop decrement the gas
			gas--;
			// if 'id' is still less than 'n' then it means there are cars in front of car 1
			if (id <= n) {
				gas += f[id];
				f[id] = 0;
				id++;
			}
			// increment the distance
			dist++;
		}
		cout << dist << '\n';
	}
	return 0;	
}
