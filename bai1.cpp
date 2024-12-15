#include <stdio.h>

int main() {
    int n = 69;  
    int *p = &n; 
    // cach 1
    printf("Gia tri cua bien: %d\n", n);
    printf("Dia chi cua bien: %d\n", &n);
	// cach 2
    printf("Gia tri cua bien: %d\n", *p);
    printf("Dia chi cua bien: %d\n", p);
    return 0;
}
