class Solution {
  public:
    int missingNumber(int n, vector<int> &arr) {
        for (int i = 1; i <= n ; i++) {
            bool flag = false;
            for (int j = 0; j < n - 1; j++) {
                if (arr[j] == i) {
                    flag = true;
                    break;
                }
            }
            if (!flag)
                return i;
        }
        return -1; 
    }
};
