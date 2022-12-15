#include <stdio.h>

int linearSearch(int arr[10], int s){
	for (int i =0; i<10; i++){
		if (arr[i]==s) return i;
	}
	return -1;
}

int binarySearch(int arr[10], int s){
	int f=1, ll = 0, ul=9, mid =4;
	while (ll <= ul){
		if (arr[mid] ==s) return mid;
		else if (arr[mid] > s) ul= mid-1;
		else if (arr[mid] < s) ll = mid +1;
	}
	return -1;
}

void selectionSortDec(int arr[10]){
	int sorted =0;

	while (sorted==0){
		for (int i=0; i<9;i++){
			if (arr[i]<arr[i+1]){
				int temp = arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}

		for (int i=0; i<10; i++){
			if (i==9){
				sorted =1;
			}
			else if (arr[i]<arr[i+1]){
				break;
			}
		}
	}
}


int main(){
	int o=0, arr[10], s;
	printf("Enter 10 integers:\n");
	for (int i=0; i<10;i++){
		printf("Integer %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	int sorted =0;

	while (sorted==0){
		for (int i=0; i<9;i++){
			if (arr[i]<arr[i+1]){
				int temp = arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("Sorted Array: \n");
	for (int i=0; i<10;i++){
		printf("Element %d: %d", i+1, arr[i]);
	}

	printf("Enter\n1 for linear Search\n2 for Binary Search\n3 for Selection Sort\n4 to exit\n>>");
	scanf("%d", &o);
	while (o!=4){
		if (o==1){		
			printf("Enter the number you want to search: ");
			scanf("%d",&s);
			int i =linearSearch(arr, s);
			if (i==-1){
				printf("Element not found");
			}
			else{
				printf("Element found at index: %d\n", i);
			}
		}	
		else if (o==2){
			printf("Enter the number you want to search: ");
			scanf("%d",&s);
			int i =binarySearch(arr, s);
			if (i==-1){
				printf("Element not found");
			}
			else{
				printf("Element found at index: %d\n", i);
			}
		}
		else if (o==3){
			selectionSortDec(arr);
			printf("Printing in descending order:\n");
			for (int i =0; i<10; i++){
				printf("Elemen number %d: %d\n", i+1, arr[i]);
			}
			printf("Printing in ascending order:\n");
			for (int i =9; i>0; i--){
				printf("Element number %d: %d\n", i+1, arr[i]);
			}
			
		}
		printf("Enter\n1 for linear Search\n2 for Binary Search\n3 for Selection Sort\n4 to exit\n>>");
		scanf("%d", &o);
	}
	printf("\nBye Bye SearchNSort!");
}