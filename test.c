#include <stdio.h>
#include <stdlib.h>

#include "test.h"

int taille_fichier(char *nomfic){
	FILE *F;
	int la_taille;
	F = fopen(nomfic, "r");
	if(F) {
		// On se place à la fin du fichier
		fseek (F, 0, SEEK_END);
		// On récupère le décalage par rapport au début
		la_taille = ftell (F);
		fclose(F);
		return la_taille;
	}
	printf("Problème dans la lecture du fichier");
	return -1;
}




LIVRE initialise_T(LIVRE book){
	FILE *F;
	F = fopen("pg31469.txt", "r");
	char *tempT = malloc( book.tailleT*sizeof(char) );
	book.tailleL = 0;


	for (int i = 0; i <= book.tailleT ;i++){
		
		fscanf(F, "%c", &tempT[i]);
		if (tempT[i] == '\n') {book.tailleL++;}
	}

	printf("fini d'écrire le livre dans le tableau\n");
	printf("le livre fait %d lignes\n", book.tailleL);
	fclose(F);
	book.T = tempT;
	return book;
}









LIVRE initialise_L(LIVRE book){

	int *tempL = malloc( book.tailleL+1*sizeof(int) );
	int k = 1;
	tempL[k] = 0;
	k++;

	for (int i = 0 ; i < book.tailleT; i++) {
		if ( book.T[i] == '\n'){
		tempL[k] = i+1;
		k++;
		
		}
	}
	book.L = tempL;
	
	return book ;
	
	
}






void affiche_livre(LIVRE book){
	for (int i = 0; i < 500 ;i++){		
		printf("%c", book.T[i]);
	}
}

void liberation(LIVRE book){
		free(book.T);
		free(book.L);

}


