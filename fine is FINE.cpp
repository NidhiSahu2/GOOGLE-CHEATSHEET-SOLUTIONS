class Solution{
  public:
    //Function to calculate total fine based on date, car numbers and respective fines.
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int even = 0, odd = 0;
        
        //iterating over all the cars.
        for (int i = 0; i < n; i++) {
            //if car number is even, adding fine to even variable.
            if (car[i] % 2 == 0)
                even += fine[i];
            //if car number is odd, adding fine to odd variable.
            else
                odd += fine[i];
        }
        
        //if date is even, returning odd fines.
        if (date % 2 == 0)
            return odd;
        //if date is odd, returning even fines.
        else
            return even;
    }
};
