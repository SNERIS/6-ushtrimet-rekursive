#include <stdio.h>

int calculateSum(int matric[][3], int rows, int cols, int row, int col) {
    // Rasti baze: Kur jemi në fund të matricës
    if (row == rows - 1 && col == cols - 1) {
        return matric[row][col];
    }
    // Rasti tjeter: Nese nuk jemi në fund të rreshtit, shko në të djathtë
    if (col < cols - 1) {
        return matric[row][col] + calculateSum(matric, rows, cols, row, col + 1);
    }
    // Rasti tjetër: Ne fund të rreshtit, shko në rreshtin tjetr
    else {
        return matric[row][col] + calculateSum(matric, rows, cols, row + 1, 0);
    }
}

int main() {
    int rows, cols;
    
    printf("Vendos numrin e rreshtave te matrices: ");
    scanf("%d", &rows);
    printf("Vendos numrin e kolonave te matrices: ");
    scanf("%d", &cols);
    
    int matric[rows][cols];
    
    // Lexo matricen nga përdoruesi
    printf("Vendos elementet e matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Vendos elementin e matrices ne poziten [%d][%d]: ", i, j);
            scanf("%d", &matric[i][j]);
        }
    }
    
    // Llogarit dhe shfaq shumen
    int sum = calculateSum(matric, rows, cols, 0, 0);
    printf("Shuma e elementeve te matrices eshte: %d\n", sum);
    
    return 0;
}
