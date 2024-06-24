#include <stdio.h>
#include <stdlib.h>

int main(void) {

    struct horario {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora; 

    agora.horas = 15;
    agora.minutos = 14;
    agora.segundos = 13;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    system("pause");
    return 0;
}
