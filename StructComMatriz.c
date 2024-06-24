#include <stdio.h>
#include <stdlib.h>

int main(void) {

    struct horario {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario teste [5]={{10,20,30},{10,20,30},{10,20,30},
    {10,20,30},{10,20,30}}; 

int i;
for (i=0; i<5; i++){

printf ("%i:%i:%i\n",teste[i].horas, teste[i].minutos, teste[i].segundos);   
}

 
    system("pause");
    return 0;
}
