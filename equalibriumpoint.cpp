class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
     
        /* Check for indexes one by one until
        an equilibrium index is found */
        for (int i = 0; i < n; ++i) {
     
            /* get left sum */
            long long leftsum = 0;
            for (int j = 0; j < i; j++)
                leftsum += a[j];
     
            /* get right sum */
            long long rightsum = 0;
            for (int j = i + 1; j < n; j++)
                rightsum += a[j];
     
            /* if leftsum and rightsum
            are same, then we are done */
            if (leftsum == rightsum)
                return i+1;
        }
     
        /* return -1 if no equilibrium
        index is found */
        return -1;
    }

};


