#include <stdio.h>

enum 
{
	Ascending=0,
	Descending
};

int orderAgnBinarySearch(int arr[], int size, int target);
int main()
{
	//int arr[] = {3,4,7,8,9,10,34,44,56,78,99,100};
	int arr[] = {30,29,28,27,20,6,4,3,1,-1,-2,-3,-4};
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Give target: ");
	int target;
	scanf("%d",&target);
	int ans = orderAgnBinarySearch(arr, sizeof(arr)/sizeof(arr[0]), target);
	printf("Ans: %d\n", ans);
	return 0;
}

int orderAgnBinarySearch(int arr[], int size, int target)
{
	int start = 0, mid;
	int end = size - 1;
	int order = (arr[0] < arr[size - 1])?Ascending:Descending;
	while(start <= end)
	{
		mid = start + (end - start) / 2;
		if (target == arr[mid])
			return mid;

		if(order == Ascending)
		{
			if(target < arr[mid])
			{
				end = mid - 1;
			}
			else
			{
				start = mid + 1;
			}
		}
		else 
		{
			if (target < arr[mid])
			{
				start = mid + 1;
			}
			else 
			{
				end = mid - 1;
			}
		}
	}
	return -1;
	
}
