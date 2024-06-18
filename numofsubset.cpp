class Solution {
    public static int numofsubset(int arr[], int n)
    {
         Arrays.sort(arr);
         int c=0;
         for(int i=0;i<n-1;i++){
            if(arr[i]+1!=arr[i+1])c++;
         }
         return c+1;
    }
}
