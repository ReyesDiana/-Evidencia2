#include<stdio.h>

int * ptr;
int i;

int arreglo2 [5];



int Copiar (int *arreglo, int *arreglo2)

{

for (i = 0; i<5; i++)
{
*(arreglo2+i) = *(arreglo+i);

}
}




int imprimir (){
for (i = 0; i<5; i++)

printf ("arreglo2[%d]=%d\n",i,*(arreglo2+i));
}




int main ()

{
	int arreglo [5];
	arreglo [0] = 1;
	arreglo [1] = 2;
	arreglo [2] = 3;
	arreglo [3] = 4;
	arreglo [4] = 5;

Copiar (arreglo, arreglo2);
imprimir ();

}
