void nextGreatest(int arr[], int n) {
        // code here
         int greatestRight=-1;
        for(int i=n-1;i>=0;i--)
        {
      
            int temp=arr[i];
            arr[i]=greatestRight;
            greatestRight=Math.max(greatestRight,temp);
            }
            
        }
    
