#include <stdio.h>

// Funksioni rekursiv per të kontrolluar simetrikine e vektorit
int eshteSimetrik(int arr[], int fillimi, int fundi) {
    // Rasti baze: Kur nuk ka më elemente për të krahasuar
    if (fillimi >= fundi) {
        return 1; // Vektori është simetrik
    }
    // Nëse elementet në pozitat fillimi dhe fundi janë të njejta, shko neper vazhdim
    if (arr[fillimi] == arr[fundi]) {
        return eshteSimetrik(arr, fillimi + 1, fundi - 1);
    }
    // Nese elementet nuk janë të njejta, vektori nuk është simetrik
    return 0;
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
    
    // Kontrollo simetrikinë e vektorit
    if (eshteSimetrik(arr, 0, n - 1)) {
        printf("Vektori eshte simetrik.\n");
    } else {
        printf("Vektori nuk eshte simetrik.\n");
    }
    
    return 0;
}
