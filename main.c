#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>


//fonction al�atoire pour generer des nombre aleatoire
int * aleatoire()
{

    int *tab=malloc(sizeof(5));

    srand(time(NULL));
    for (int i=0; i<4; i++)
    {


        while (true)
        {

            int v = rand()%16;
            if (v == 7 || v == 10 || v == 11 || v == 12 || v == 14 || v == 15)
            {
                tab [i] = v;

                break;
            }

        }

    }

	return tab;
}



// ON FAIT APPELLE A LA FONCTION TEXTBACKGROUND
void carre(color)
{
 textbackground(color);
 printf(" ");
 textbackground(0);
}

//LA FONCTION COULEUR POUR CONVERTIR LES NOMBRE DES COULEURS EN NOM DES COULEURS
char couleur(int *tab)
{
    for(int i=0; i<4; i++){
        if(tab[i]==15){
                printf("BL ");
            }
        if(tab[i]==14){
                printf("JA ");
        }
        if(tab[i]==12){
                printf("RO ");
        }
        if(tab[i]==10){
                printf("VE ");
        }
        if(tab[i]==7){
                printf("GR ");
        }
        if(tab[i]==11){
            printf("CY ");
        }
    }
}

//LA FONCTION QUI AFFICHE CE QUI EST DANS L INTERFACE DE L EX
int tableAff(int *tab)
{
char x;
printf("+===========+                                                                ************\n");
printf("\|");carre(tab[0]);carre(tab[0]);printf("\|"); carre(tab[1]);carre(tab[1]); printf("\|");carre(tab[2]);carre(tab[2]);printf("\|");carre(tab[3]);carre(tab[3]);printf("\|                                                                * BL:blanc *\n");
printf("\|");carre(tab[0]);carre(tab[0]);printf("\|"); carre(tab[1]);carre(tab[1]);printf("\|");carre(tab[2]);carre(tab[2]);printf("\|"); carre(tab[3]);carre(tab[3]); printf("\|    ordinateur                                                  * JA:jaune *\n");
printf("\|+=========+\|                                                                                                                                                                                                                                * CY:cyan *\n");
printf("                                                                                                                                                                                                                                             *RO:ROUGE *\n");
printf("                                                                                                                                                                                                                                             * VE:VERT *\n");
printf("                                                                                                                                                                                                                                             ************\n");

}


int main()
{
    int randomUtili1 =0, randomUtili2=0, randomUtili3=0, randomUtili4=0;
    int *tab;
	tab=aleatoire();
    /* POUR AFFICHER LES NOMBRE ALEATOIRE GENERE PAR L ORDINATEUR
     printf ("%d\n", tab[0]);
     printf ("%d\n", tab[1]);
     printf ("%d\n", tab[2]);
     printf ("%d\n", tab[3]);*/

	bool choice1=false, choice2=false, choice3=false, choice4=false;
    printf("*****bienvenue sur mastermind*****\n");
    for(int i=0; i<10; i++){
       //CREATION D UN FICHIER CONTIENT LE NOM DU JOUEUR
        FILE *fp;
        char nom[100];
        char prenom[100];
        fp= fopen("mastermind.txt", "w");
        fprintf(fp,"le nom du joueur est:\n ");
        printf( "veuillez entrer votre nom:\n");
        scanf("%s", nom);
        printf("veuillez entrer votre prenom\n");
        scanf("%s", prenom);
        fprintf(fp, "%s %s \n", nom, prenom);
         // DEMANDER A L UTILISATEUR D ENTER 4 VARIABLE ALEATOIR
          printf("veuillez choisir votre nombre parmi la liste suivante {7,10, 11, 12, 14, 15} " );
          scanf("%d", &randomUtili1);
          printf("veuillez choisir votre 2�me nombre parmi la liste suivante {7,10, 11, 12, 14, 15} " );
          scanf("%d", &randomUtili2);
          printf("veuillez choisir votre 3 �me nombre parmi la liste suivante {7,10, 11, 12, 14, 15} ");
          scanf("%d", &randomUtili3);
          printf("veuillez choisir votre 4 �me nombre parmi la liste suivante {7,10, 11, 12, 14, 15} " );
          scanf("%d", &randomUtili4);
              // GENERER LES DIFFERENTE CAS POSSIBLE
              if (randomUtili1==tab[0]){
                 printf("=");
                 choice1=true;


              }else if (randomUtili1==tab[1] || randomUtili1==tab[2] || randomUtili1==tab[3]) {


							printf("O");



			  }

              else {
                printf("X");
              }



          printf("\n");
              if (randomUtili2==tab[1]){
                 printf("=");
                 choice2=true;
              }

              else if (randomUtili2==tab[0] || randomUtili2==tab[2] || randomUtili2==tab[3]){
                printf("O");
             }
			  else {
				  printf ("X");
			  }
              printf("\n");

               if (randomUtili3==tab[2]){
                  printf("=");
                  choice3=true;

                }

                else if (randomUtili3==tab[0] || randomUtili3==tab[1] || randomUtili3==tab[3]){
                    printf("O");

                }
                else {
                     printf("X");
                }

               printf("\n");
               if (randomUtili4==tab[3]){
                  printf("=");
                  choice4=true;

               }

               else if (randomUtili4==tab[0] || randomUtili4==tab[1] || randomUtili4==tab[2]){
                   printf("O");

               }
               else {
                    printf("X");

               }

            printf("\n");


   if (choice1==true && choice2==true && choice3==true && choice4==true){

        printf("~~~~~~~~~F�licitation~~~~~~~~~~\n");
        tableAff(tab);
        printf("Votre proposition[4 couleurs separees par '']? :");
        couleur(tab);
        printf("\n F�licitation vous avez r�ussi apr�s %d essai ",i+1);
        fprintf(fp, " F�licitation vous avez r�ussi apr�s %d essai ", i+1);
        fclose(fp);
        break;
    }

    if(i==9){
        printf("la bonne solution est : %d %d %d %d \n" , tab[0], tab[1], tab[2], tab[3]);
    }

}

  }



