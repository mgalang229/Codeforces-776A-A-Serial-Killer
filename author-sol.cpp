#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	int n;
	cin >> n;
	// 
	for (int i = 0; i < n; i++) {
		cout << a << " " << b << '\n';
		string c, d;
		cin >> c >> d;
		// holder-1 = a
		// holder-2 = b
		// person-1 = c
		// person-2 = d
		// check if person-1 is equal to the holder-1:
		// if yes, then replace the holder-1 by person-2 (replacement for person-1)
		// otherwise, replace holder-2 by person-2 (replacement for person-1)
		// You just have to store the current two strings. This can simply be done by
		// replacing the string to be deleted with the new string.
		if (c == a) {
			a = d;
		} else {
			b = d;
		}
	}
	cout << a << " " << b << '\n';
	return 0;
}
