class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        int M = matrix.size(), N = matrix[0].size(), ans = 0;
        vector<int> H(N + 1);
        for (int i = 0; i < M; ++i) {
            stack<int> s;
            for (int j = 0; j <= N; ++j) {
                H[j] = j < N && matrix[i][j] == '1' ? H[j] + 1 : 0;
                while (s.size() && H[s.top()] >= H[j]) {
                    int h = H[s.top()];
                    s.pop();
                    int w = s.size() ? (j - s.top() - 1) : j;
                    ans = max(ans, w * h);
                }
                s.push(j);
            }
        }
        return ans;
        
    }
};
