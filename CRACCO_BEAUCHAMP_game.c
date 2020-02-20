#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Structures


//                      printf ("\n \n");


//Fonctions 


int main () {
	//variables
	int repPlayer = 0;
	int tamponRepPlayer = 0;
	
	//Début
	
	//INTRO
	printf ("\n****************************************************************************************************************************************************************\n");
	printf ("Bienvenu a l'ecole de magie Blingue Premier ! Vous etes un eleve qui a rate sa cinquieme annee et qui est convoque dans le bureau de Tapadkeur le Directeur...");
	printf ("\n****************************************************************************************************************************************************************\n");
	printf ("\n'Bon. Tres bien. *soupir* J'ai ici votre dossier, et croyez moi, son epaisseur n'est pas la pour vous rassurer.... Vos resultats sont a l'image de ma patience, ils s'affaiblissent chaque jour un peu plus.");
	printf ("\nEtant donne votre niveau de base, vous pouvez comprendre que vos notes sont maintenant plus basses que les enfers. Et si vous ne voulez pas les y rejoindre, il faudra commencer a vous bougez un peu.'");
	printf ("\nCe que je vous propose donc, c'est de rehausser vos resultats en participant un peu plus activement a la vie de l'ecole, que vous vous evertuez a humilier, un peu plus chaque annee.'");
	printf ("\n'Vous allez donc accomplir un stage, et comme je suis bon prince, je vous laisse trois possiblites, vous pouvez effectuez votre stage :'");
	printf ("\n 1) A l'infirmerie sous la tutelle de Roxane la Shamane.");
	printf ("\n 2) Dans les cuisines sous la tutelle de Poulet le Gourmet.");
	printf ("\n 3) Ou dans les couloirs sous la tutelle de Grendel Larimenel");
	
	scanf("\n%d", &repPlayer);
	
	while(repPlayer!= 1 && repPlayer!= 2 && repPlayer!= 3){
		printf("'Repondez a la question correctement nom d'un bling !'\n");
		scanf("%d", &repPlayer);
		
	}
	
		//SCENAR ROXANE
		if (repPlayer== 1 && tamponRepPlayer == 0){
			tamponRepPlayer =1;
			printf("\nVous arrivez a l'infirmerie et vous tombez nez a nez avec Fransiscain le Praticien.\n");
			printf("\nFransiscain : Mon enfant, etes vous l'eleve qui viens effectuer son stage chez mon eminente et neanmoins illuminee collegue Roxane la Shamane ?\n"); 
			printf("\nRoxane n'est pas ici tres cher, elle est dans les jardins de l'ecole.\n");
			printf ("\n1) Se rendre dans les jardins pour trouver Roxane. \n");
			printf ("\n2) Demander a Fransiscain si il peut s'occupper de vous a la place de Roxane. \n");
			printf ("\n3) Retourner voir Tapadkeur pour lui dire que Roxane n'est pas la. \n");
			
			scanf("%d", &repPlayer);
				if (repPlayer== 1 && tamponRepPlayer == 1){
					
					
				}
				
				if (repPlayer== 2 && tamponRepPlayer == 1){
					
					
				}
				
				if (repPlayer == 3 && tamponRepPlayer == 1){
					printf ("\nTapadkeur le Directeur : VOUS VOUS FOUTEZ DE MOOOOI ?! VOUS ETES VIRE ! VOUS ETES TELLEMENT VIRE QUE MEME SI JE VOUS REPRENAIS VOUS SERIEZ VIRE PAR DEFAUT ! \n");
					printf ("\n Vous avez mis le directeur en colère, vous avez perdu, il vaudrait mieux reessayer.... \n");
					
				}
			
			
		}
		
		//SCENAR POULET
		if (repPlayer== 2 && tamponRepPlayer == 0){
			tamponRepPlayer =2;
			printf("\nVous arrivez dans les cuisines. \n");
			
			
			
			
		}
		
		
		//SCENAR GRENDEL
		if (repPlayer== 3 && tamponRepPlayer == 0){
			tamponRepPlayer =3;
			printf("\n Vous arrivez devant la vie scolaire.\n");
			
			
		}
	
	
	
	
	
	
	return 0;
}