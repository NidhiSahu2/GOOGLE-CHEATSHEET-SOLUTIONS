
Problem Name-
26. Remove Duplicates from Sorted Array.
Link-https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
---------------------Solution-----------------------
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
        
    }
};
SS
