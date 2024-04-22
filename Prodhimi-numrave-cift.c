#include <stdio.h>

// Funksioni rekursiv për të llogaritur prodhimin e numrave çift per n-kufizat e para
int prodhimiCift(int n, int current) {
    if (n == 0) {
        return 1; // Kur n është 0, prodhimi i numrave eshte 1
    }
    return current * prodhimiCift(n - 1, current + 2);
}

int main() {
    int n;
    printf("Vendosni numrin n: ");
    scanf("%d", &n);
    
    int product = prodhimiCift(n, 2); // Llogarit prodhimin e numrave çift per n-kufizat e para
    printf("Prodhuimi i %d-kufizave te para te numrave cift eshte: %d\n", n, product);
    
    return 0;
}
