#include <stdio.h>

void swap(int *n, int *m) {
	int temp = *n;
	*n = *m;   
	*m = temp;
}
int main() {
    int n = 69; 
    int m = 70;
    swap(&n, &m);
    printf("n=%d, m=%d", n, m);
    return 0;
}
