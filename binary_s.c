#include <stdio.h>

int binarySearch(int arr[], int size, int target);
int main()
{
	int arr[] = {-9, -7, -4, 0, 23, 45, 67, 88, 90, 100};
	int target = -4;
	int size = sizeof(arr)/sizeof(arr[0]);
	int ans = binarySearch(arr, size, target);
	printf("Ans: %d\n",ans);
	return 0;
}

int binarySearch(int arr[], int size, int target)
{
	int start = 0, mid;
	int end = size - 1;
	while (start <= end)
	{
		mid = start + (end - start)/2;
		if (target > arr[mid])
		{
			start = mid + 1;
		}
		else if (target < arr[mid])
		{
			end = mid -1;
		}
		else 
		{
			return mid;
		}
	}
	return -1;
}
