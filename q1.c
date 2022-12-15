#include <stdio.h>

int main(){
	float arr[10];

	printf("Enter 10 floating point numbers: \n");
	for (int i=0; i<10;i++){
		printf("Number %d: ", i+1);
		scanf("%f", &arr[i]);
	}
	int sorted =0;

	while (sorted==0){
		for (int i=0; i<9;i++){
			if (arr[i]>arr[i+1]){
				float temp = arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}

		for (int i=0; i<10; i++){
			if (i==9){
				sorted =1;
			}
			else if (arr[i]>arr[i+1]){
				break;
			}
		}
	}

	printf("Max Number: %f\nSecond Max Number: %f\nMin Number: %f\nSecond Min Number: %f\nAverage of above four numbers: %f\n", arr[9],arr[8], arr[0], arr[1], (arr[9]+arr[8]+arr[0]+arr[1])/4);

}