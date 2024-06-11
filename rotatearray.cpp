//Back-end complete function Template for C++

void rotate(int arr[], int n)
{
   //storing the last element of the array in a variable x
   int x = arr[n-1], i;

   //shifting each element one position to the right
   for (i = n-1; i > 0; i--)
      arr[i] = arr[i-1];

   //placing the stored element x in the first position of the array
   arr[0] = x;
}

