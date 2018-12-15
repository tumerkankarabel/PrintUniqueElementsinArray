// Print all unique elements in the array
#include<stdio.h>

int main() {

	int a[10];
	int i, j, k, rows;
	int cnt = 0;
	
	printf("Enter rows of matrix: ");
	scanf("%d", &rows);
	
	printf("Enter matrix:\n");
	
	for(i=0; i<rows; i++) {
		scanf("%d",&a[i]);
	}
	
	printf("Unique elements:\n");
	
	for(i=0; i<rows; i++) {
		cnt = 0;
		
		for(j=0; j<i; j++) {
			if(a[i] == a[j]) {
				cnt++;
			}
		}
		
		for(k=i+1; k<rows; k++) {
			if(a[i] == a[k]) {
				cnt++;
			}
		}
		
		if(cnt == 0){
			printf("%d ",a[i]);
		}
	}
	
	return 0;

}
