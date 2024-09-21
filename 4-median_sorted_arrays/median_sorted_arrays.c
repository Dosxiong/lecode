#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
int g_i = 0;
int g_j = 0;
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
	int i = nums1Size/2;
	int j = nums2Size/2;
	int pre_j = 0;
	for (;;)
	{
		printf("----%d %d\n", i ,j);
		if ((*(nums2 + j - 1) < *(nums1 + i) ) && (*(nums1 + i - 1) < *(nums2 + j)))
		{
			break;
		}
		int step = abs(j-pre_j)/2;
		pre_j = j;
		printf("step %d\n", step);
		if (*(nums2 + j) > *(nums1 + i))
		{
			j = j - step;
			i = i + step;
		}
		else
		{
			j = j + step;
			i = i - step;
		}
	}
	g_i = i;
	g_j = j;
	if (*(nums1 + i) > *(nums2 + j))
		return 
	return 0;
}
int main(){
	int a[]={1,5,33,45,47,49,66,99};
	int b[]={3,6,9,11,32,46,77,88};
	findMedianSortedArrays(a, 8, b, 8);
	printf("%d %d\n", g_i, g_j);

	return 0;
}

