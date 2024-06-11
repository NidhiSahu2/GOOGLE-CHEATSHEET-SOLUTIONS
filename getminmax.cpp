class Solution 
{
    static Pair getMinMax(long a[], long n )  
    {
        //Write your code here
        
        sort (a, a+n);
        
        int mn = arr[0],  mx=a[n-1];
        return {mn,mx};
        
        
        
    }
}
