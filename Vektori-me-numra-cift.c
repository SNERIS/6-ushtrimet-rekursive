#include <stdio.h>

// Funksioni rekursiv per të llogaritur sasinë e numrave çift në një vektor
int numraCift(int arr[], int n) {
    // Rasti bazë: kur nuk ka më elemente për të shqyrtuar
    if (n == 0) {
        return 0; // Nuk ka numra çift ne vektor
    }
    // Kontrollo nese numri aktual në fund të vektorit eshte çift
    if (arr[n - 1] % 2 == 0) {
        return 1 + numraCift(arr, n - 1); // Shto 1 dhe vazhdo rekursivisht
    } else {
        return numraCift(arr, n - 1); // Vazhdo rekursivisht
    }
}

int main() {
    int n;
    printf("Vendosni gjatesine e vektorit: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Vendosni elementet e vektorit:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementi %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Llogarit sasine e numrave çift në vektor
    int count = numraCift(arr, n);
    printf("Sasia e numrave cift ne vektor eshte: %d\n", count);
    
    return 0;
}
