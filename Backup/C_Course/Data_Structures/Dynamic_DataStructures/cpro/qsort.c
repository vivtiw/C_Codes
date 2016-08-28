#include <stdio.h>
int main()
{
	void q_sort(int *a , int first ,int last);
	int i;
	int a[5]={6,4,9,2,5};
	q_sort(a,0,4);
	for(i=0;i<7;i++)
		printf(" %d",a[i]);

}
void q_sort(int *a , int first ,int last)
{
	int low = first;
	int high = last;
	int pivot = a[(low+high)/2];
	do{
		while(a[low]<pivot)
			low++;
		while(a[high]>pivot)
			high--;
		if(low<high){
			int temp = a[low];
			a[low]=a[high];
			a[high]=temp;
			low++;
			high--;
		}
	}while(low<high);
	
	if(low <last) q_sort(a,low,last);
	if(first <high) q_sort(a,first,high);

}
