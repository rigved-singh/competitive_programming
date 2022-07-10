#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, k;
	cin >> n >> k;
	vector<int> ids;
	for (int i = 0; i < n; ++i) {
		int id;
		cin >> id;
		if (find(ids.begin(), ids.end(), id) == ids.end()) {
			if (int(ids.size()) >= k) ids.pop_back();
			ids.insert(ids.begin(), id);
		}
	}
	
	cout << ids.size() << endl;
	for (auto it : ids) cout << it << " ";
	cout << endl;
	
	return 0;
}