class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int> result(2);

        int duplicate = -1, missing = -1;
        for (int i = 1; i <= n; ++i) {
            int count = 0;
            for (int j = 0; j < n; ++j) {
                if (i == arr[j]) {
                    count++;
                    if (count == 2) // Found duplicate
                        duplicate = i;
                }
            }
            if (count == 0) // Found missing number
                missing = i;
        }
    
        result[0] = duplicate;
        result[1] = missing;
        return result;
    }
};
