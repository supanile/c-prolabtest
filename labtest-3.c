#include <stdio.h>
float CtoF(float C);
float FtoC(float F);

int main(){
	float C,F;
	int i = 1;
	int j = 1;
	printf("********Program Celsius to Farenheit AND Farenheit to Celsius 3 Times********\n\n");
	for( i = 1; i <= 2; i++){
		printf("********************\n\n");
		printf("Enter Celsius %d: ",i);
		scanf("%f", &C);
		F = CtoF(C);
		printf("Farenheith %d: %.2f\n\n",i,F);
		for( j = 1; j <= 1; j++){
			printf("********************\n\n");
			printf("Enter Farenheit %d: ",i+1);
			scanf("%f", &F);
			C = FtoC(F);
			printf("Celsius %d: %.2f\n\n",i+1,C);
		}
	}
	printf("Program End!");

}

float CtoF(float C){
	float F;
	F = 32 + C *(180.0/100.0);
	return F;
}

float FtoC(float F){
	float C;
	C = (F - 32) / (180.0/100.0);
	return C;
}
