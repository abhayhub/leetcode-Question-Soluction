class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> m(128,0);
        for(char c:t) ++m[c];
        int begin = 0;
        int end = 0;
        int head= 0;
        int count = t.size(),len = INT_MAX;
        while(end < s.size()) {
            if(m[s[end++]]-->0)--count;
            while (!count) {
                if (end - begin < len) len = end - (head = begin);
                if (m[s[begin++]]++ == 0) ++count;
            }
        }
        return len == INT_MAX ? "" : s.substr(head, len);
        
    }
};
