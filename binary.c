#include <stdio.h>
int main()
{
	int c, start, end, mid, n, s, a[100];
	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("Enter %d integers\n", n);
	for (c = 0; c < n; c++)
		scanf("%d",&a[c]);
	printf("Enter value to find\n");
	scanf("%d", &s);
	start = 0;
	end = n - 1;
	mid = (start+end)/2;
	while (start <= end) 
	{
		if (a[mid] < s)
			start = mid + 1;    
		else if (a[mid] == s)
		{
			printf("%d found at position %d.\n", s, mid+1);
			break;
		}
		else
			end = mid - 1;
			mid = (start + end)/2;
	}
	if (start > end)
	printf("Not found! %d isn't present in the array.\n", s);
	return 0;   
}
