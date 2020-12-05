#include "test.h"
#include <stdio.h>
#include <stdlib.h>



int main (){


int l = 1;

LIVRE book;

book.tailleT = taille_fichier("pg31469.txt");
printf("book.tailleT : %d\n", book.tailleT);
book = initialise_T(book);
book = initialise_L(book);


for ( l = 1; l < 10 ; l++){

	printf("le premier caractère de la ligne %d est #%c#\n",l, book.T[book.L[l]] );

}

affiche_livre(book);




return 0;	
}
