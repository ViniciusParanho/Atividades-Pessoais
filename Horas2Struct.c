#include <stdio.h>
#include <stdlib.h>

int main(void) {

    struct horario {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    struct horario agora; 

    agora.horas = 15;
    agora.minutos = 14;
    agora.segundos = 13;

    struct horario depois;

    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 55.0 / 10;
    depois.letra = 'v';

    printf("%i\n", depois.horas);
    printf("%i\n", depois.minutos);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);

    system("pause");
    return 0;
}
