#include <stdio.h>
int main () {
	int num[] = {10,20,30,40,50,60,70,80,90,100};
	float count = sizeof(num) / sizeof(num[0]);
	float avg = 0;
	int sum = 0, i = 0;
	do{
		sum += num[i];
		i++;
	}
	while( i <= count );
		avg = sum / count;
		printf("Average 10 Number is: %.2f", avg);
}

