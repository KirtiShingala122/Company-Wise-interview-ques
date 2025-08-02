class Solution {
  public:
    int maxLen(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) arr[i] = -1;
        }

        int maxLength = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += arr[j];
                if (sum == 0) {
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }

        return maxLength;
    }
};
