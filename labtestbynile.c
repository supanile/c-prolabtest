#include <stdio.h>

int main () {
	int i = 0;
	int num[10];
	for(i = 0;i < 10;i++){
		printf("Enter the Number %d: ",i+1);
		scanf("%d", &num[i]);
	}
	float count = sizeof(num)/sizeof(num[0]);
	float avg = 0;
	int sum = 0;
	do{
		sum += num[i];
		i++;
	}
	while( i < count );
		avg = sum / count;
		printf("Average 10 Number is: %.2f", avg);
}

