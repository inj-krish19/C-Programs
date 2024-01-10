void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    /*Selction Sort Is The 1st Minimum Or Maximum is store then rest of others .
	that is  1st  is stored at first place and other 4 is as it is 
	then 1 st will be there and in 2nd position 2nd will come 
	and rest are as it is 
	then 1st 2nd will be 1st and 2nd s positions and rest are as it is
	then 1st 2nd 3rd will be at their position and rest are as it is 
	then 1st 2nd 3rd 4th will be at their position and rest are as it it 
	that is last and it is over now .
	because of first 4 are sorted and others that is only one and only ( last ) element .
	so that array is sorted ...........................................                 */
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
