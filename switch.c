#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(NULL));
	int arr1[10];
	arr1[0]=0;
	int i;
	for (i = 1; i < 10; i++) arr1[i]=rand();
	printf("Original array: ");
	for (i = 0; i < 10; i++) printf("%d ", arr1[i]);
	printf("\n");
	int arr2[10];
	int *p1 = arr1, *p2 = arr2;
	p2 += 9;
	for (i = 0; i < 10; i++) {
		*p2 = *p1;
		p2--; p1++;
	}
	printf("Using *:  ");
	for (i = 0; i < 10; i++) {
		p2++;
		printf("%d ", *p2);
	}
	printf("\nUsing []:  ");
	for (i = 0; i < 10; i++) printf("%d ", arr2[i]);
	printf("\n");
}
