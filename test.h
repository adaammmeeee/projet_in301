struct livre {
	int tailleT;
	int tailleL;
	char *T;
	int *L;
};

typedef struct livre LIVRE;




int taille_fichier(char *nomfic);
LIVRE initialise_T(LIVRE BOOK);
LIVRE initialise_L(LIVRE book);

void affiche_livre(LIVRE book);


