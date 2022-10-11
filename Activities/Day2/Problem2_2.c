#include <stdio.h>
int binsearch(int arr[], int left, int right, int x)
{
	if (right >= left) {
		int middle = left + (right - left) / 2;
		if (arr[middle] == x)
			return middle;
		if (arr[middle] > x)
			return binsearch(arr, left, middle-1, x);
		return binsearch(arr, middle+1, right, x);
}
return -1;
}

int main()
{
	int arr[100], n, i, x;
	printf("How many numbers in the array? ");
    	scanf("%d", &n);
    	printf("\nEnter %d numbers: ", n);
    	for (i = 0; i < n; i++){
        	scanf("%d", &arr[i]);
    	}
    	printf("\nWhich number to search? ");
        scanf("%d", &x);
	int res = binsearch(arr, 0, n - 1, x);

	if (res == -1){
        printf("Number is not present\n");
    }
        
	else {
        printf("Number is present at index %d\n", res);
    }
}
