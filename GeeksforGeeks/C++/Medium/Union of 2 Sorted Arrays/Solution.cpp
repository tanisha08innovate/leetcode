class Solution {
	public:
	vector<int> findUnion(vector<int> &a, vector<int> &b) {
		// code here
		int n = a.size();
		int m = b.size();
		set<int>st;
		
		for (int i = 0; i<n; i++) {
			st.insert(a[i]);
		}
		for (int i = 0; i<m; i++) {
			st.insert(b[i]);
		}
		vector<int>temp;
		for (auto it : st) {
			temp.push_back(it);
		}
		return temp;
	}
};
