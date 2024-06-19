

#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int main() {
    int n, i, x;
    int stack[MAX];
    int top = -1;
    int sum = 0;

    // Leitura do número de entradas
    scanf("%d", &n);

    // Processamento dos números
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == 0) {
            if (top >= 0) {
                top--;
            }
        } else {
            stack[++top] = x;
        }
    }

    // Calculo da soma dos elementos restantes na pilha
    for (i = 0; i <= top; i++) {
        sum += stack[i];
    }

    // Impressão do resultado
    printf("%d\n", sum);

    return 0;
}
