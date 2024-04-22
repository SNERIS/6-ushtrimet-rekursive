#include <stdio.h>

// Funksioni për llogaritjen e faktorialit
int faktorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * faktorial(num - 1);
}

// Funksioni rekursiv për llogaritjen e shumës së faktorialeve deri në numrin n
int shuma(int n) {
    if (n == 1) {
        return faktorial(1);
    }
    return faktorial(n) + shuma(n - 1);
}

int main() {
    int n;
    printf("Vendosni numrin n: ");
    scanf("%d", &n);
    
    int sum = shuma(n);
    printf("Shuma e faktorialeve deri ne %d eshte: %d\n", n, sum);
    
    return 0;
}
