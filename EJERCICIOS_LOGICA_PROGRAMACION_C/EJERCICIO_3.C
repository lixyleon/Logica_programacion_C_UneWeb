/*   
Hacer una funcion que diga si en una cadena hay solo digitos
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()

{
    char cadena[100];
    int i, cont=0;

    printf("Ingrese una cadena: "); gets(cadena);

    for(i=0;i<strlen(cadena);i++)
    {
        if(cadena[i]>='0' &&cadena[i]<='9')
        {
            cont++;
        }
    }

    if(cont==strlen(cadena)) {
        printf("la cadena %s tiene solo digitos\n", cadena);
    }

    else if(cont>0){
        printf("La cadena %s posee %i digitos\n", cadena,cont);
    }
    else {
        printf("La cadea %s no posee ningun digito\n",cadena);
    }
printf("Presione una tecla para continuar");
getch();

return 0;
}