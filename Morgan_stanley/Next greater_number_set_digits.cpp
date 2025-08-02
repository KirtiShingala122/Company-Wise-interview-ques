class Solution {
  public:
    int findNext(int N) {
        string s = to_string(N);
        int i = s.length() - 2;
        while (i >= 0 && s[i] >= s[i + 1]) {
            i--;
        }
        if (i < 0) return -1;
        int j = s.length() - 1;
        while (s[j] <= s[i])  {
            j--;
        }
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
        long long res = stoll(s);
        return (res > INT_MAX) ? -1 : (int)res;
    }
};
