#include <stdio.h>

int find(int *arr, int size, int target){
    for (int i = 0; i < size; i++){
        if (*(arr+i)==target){
            return i;
        }
    }
    return 1;
}

int main() {
    int arr[1000];
    int target,n; 
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
    	printf("Nhap phan tu a[%d]: ", i);
    	scanf("%d", &arr[i]);
	}
    int position=find(arr, n, target);
    if (position!=1) {
        printf("duoc tim thay tai vi tri: %d\n", position);
    } else {
        printf("khong ton tai\n", target);
    }
    return 0;
}
