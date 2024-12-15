#include <stdio.h>

void print(int *arr, int size){
    for (int i=0; i<size; i++){
        printf("Phan tu thu %d: %d\n", i+1, *(arr + i));
    }
}

void update(int *arr, int size, int position, int value){
    if (position>=0 && position<size){
        *(arr+position)=value; 
    } else {
        printf("khong hop le");
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    int index,n;
    printf("Nhap vi tri can cap nhat: ");
    scanf("%d", &index);
    printf("Nhap so moi: ");
    scanf("%d", &n);
    update(arr, size, index, n);
    print(arr, size);
    return 0;
}
