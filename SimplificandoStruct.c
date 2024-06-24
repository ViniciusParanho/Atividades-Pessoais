#include <stdio.h>
#include <stdlib.h>

int main(void) {

    struct horario {
        int horas;
        int minutos;
        int segundos;
    }agora = {15,14,13};

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    system("pause");
    return 0;
}
