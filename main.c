/*
A função conta_pares tem um loop que internamente chama outro loop,
isso faz com que a função seja O(n²).

O código é inteiramente O(n²)
*/
#include <stdio.h>

int conta_pares(int n, int mat[][n]) {
    int aux = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(mat[i][j]%2 == 0)
            {
                aux++;
            }
        }
    }
    return aux;
}

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            scanf("%d", &mat[i][j]);

    printf("%d\n", conta_pares(n, mat));
    return 0;
}
