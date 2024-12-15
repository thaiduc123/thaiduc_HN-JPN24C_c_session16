#include <stdio.h>

void cacSum(int *n, int *m, int *result) {
    *result = *n + *m;
}
int main() {
    int n=69; 
    int m=70;
    int sum=0;
    cacSum(&n, &m, &sum);
    printf("%d", sum);
    return 0;
}
