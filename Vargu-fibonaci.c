#include <stdio.h>

// Funksioni rekursiv për të llogaritur n-tin numër te vargut të Fibonacit
int fibonaci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonaci(n - 1) + fibonaci(n - 2);
}

// Funksioni rekursiv për të llogaritur shumën e n-kufizave të vargut të Fibonacit
int sumOfFibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    return fibonaci(n) + sumOfFibonacci(n - 1);
}

int main() {
    int n;
    printf("Vendosni numrin n: ");
    scanf("%d", &n);
    
    int sum = sumOfFibonacci(n - 1); // Llogarit shumën e n-kufizave të vargut të Fibonacit
    printf("Shuma e %d-kufizave te vargut te Fibonacit eshte: %d\n", n, sum);
    
    return 0;
}
