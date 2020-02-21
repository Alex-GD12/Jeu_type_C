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
	printf ("Bienvenu a l'ecole de magie Blingue Premier ! Vous etes un eleve qui a rate sa deuxieme annee et qui est convoque dans le bureau de Tapadkeur le Directeur...");
	printf ("\n****************************************************************************************************************************************************************\n");
	printf ("\n'Bon. Tres bien. *soupir* J'ai ici votre dossier, et croyez moi, son epaisseur n'est pas la pour vous rassurer.... Vos resultats sont a l'image de ma patience, ils s'affaiblissent chaque jour un peu plus.");
	printf ("\nEtant donne votre niveau de base, vous pouvez comprendre que vos notes sont maintenant plus basses que les enfers. Et si vous ne voulez pas les y rejoindre, il faudra commencer a vous bougez un peu.'");
	printf ("\nCe que je vous propose donc, c'est de rehausser vos resultats en participant un peu plus activement a la vie de l'ecole, que vous vous evertuez a humilier, un peu plus chaque annee.'");
	printf ("\n'Vous allez donc accomplir un stage, et comme je suis bon prince, je vous laisse trois possiblites, vous pouvez effectuez votre stage :'");
	
	printf ("\n************************************************ \n");
	printf ("\n 1) A l'infirmerie sous la tutelle de Roxane la Shamane.");
	printf ("\n 2) Dans les cuisines sous la tutelle de Poulet le Gourmet.");
	printf ("\n 3) Ou dans les couloirs sous la tutelle de Grendel Larimenel");
	printf ("\n************************************************ \n");
	
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
			
			printf ("\n************************************************ \n");
			printf ("\n1) Se rendre dans les jardins pour trouver Roxane. \n");
			printf ("\n2) Demander a Fransiscain si il peut s'occupper de vous a la place de Roxane. \n");
			printf ("\n3) Retourner voir Tapadkeur pour lui dire que Roxane n'est pas la. \n");
			printf ("\n************************************************ \n");
			
			scanf("%d", &repPlayer);
				if (repPlayer== 1 && tamponRepPlayer == 1){
					tamponRepPlayer = 1;
					 printf ("\nVous arrivez dans les jardins et entendez Roxane et son fort accent senegalais.\n");
					 printf ("\n Roxane : Pitain de merde ou c'est que c'est qu'il est passé le Mc Krame la !? \n");
					 printf ("\nJe ne vais pas trouver les fleurs que je cherche si ce cretin de jardinier il n'arrive pas tout de suite la dis donc eh ! \n");
					
					printf ("\n************************************************ \n");
					printf ("\n1) Vous ne restez pas la, cette dame vous parait bien trop louche, vous ne souhaitez pas risquer votre vie pour un stage.\n");
					printf ("\n2) Vous decider d'aider votre maitre de stage en partant chercher ce fameux jardinier. \n");
					printf ("\n3) Vous allez directement proposer votre aide a Roxane pour trouver les plantes en question. \n");
					printf ("\n************************************************ \n");
					
					scanf("%d", &repPlayer);
						if (repPlayer== 1 && tamponRepPlayer == 1){
							tamponRepPlayer=1;
							printf ("\nTapadkeur le Directeur : VOUS AVEZ QUOI ?! VOUS VOUS ETES ENFUI AVANT MEME LE DEBUT DE VOTRE STAGE !\n");
							printf("\n PUISQUE VOUS AIMEZ COURIR, VOUS AVEZ QU'A COURIR LOIN DE MON ECOLE, MEPRISABLE RESIDUT DE MARAIS SALANT ! \n");
							printf ("\n Vous avez mis le directeur en colère, vous avez perdu, il vaudrait mieux reessayer.... \n");
						}
							
						if (repPlayer== 2 && tamponRepPlayer == 1){
							tamponRepPlayer=2;
							printf ("\n Vous partez en quete de Mc Krame le Jardinier à la vie scolaire. \n");
							printf ("\n Sans doute pourra-t-on vous indiquez ou il a bien pu passer avant que Roxane ne se mette à arracher toutes les plantes des jardins\n");
							printf ("\n en arrivant a la vie scolaire, vous rencontrez Grendel Larimenel, le concierge de l'ecole, qui vous adresse un sourire amical\n");
							printf ("\n Grendel : Tiens ! T'es le gamin en stage avec Roxane, non ? Qu'est-ce que tu fiche la ?\n");
							printf ("\n************************************************ \n");
							printf ("\n1) Vous lui demandez où trouver le Jardinier.\n");
							printf ("\n2) Vous lui demandez d'aller aider Roxane.\n");
							printf ("\n3) Vous lui demandez s'il veut bien vous prendre en stage à la place de Roxane, il a quand même l'air moins bizarre. \n");
							printf ("\n************************************************ \n");
							
							scanf("%d", &repPlayer);
						}
						
						if (repPlayer== 3 && tamponRepPlayer == 1){
							tamponRepPlayer=3;
							printf ("\n Roxane : Ah tu tombe bien toi, la dis donc ! He je sais que Tapadkoeur il t'a demande de faire un stage avec moi, alors tu sais tu vas pouvoir m'aider mon petit, la dis donc ! \n");
							printf ("\n J'ai besoin de trouver une fleur poussee au vent des landes de pierres pour en faire un RAGOUT qui me permettra de communiquer avec les ESPRITS\n");
							printf ("\n Le probleme c'est que je ne sais pas du tout a quoi c'est que ressemble cette satane fleur, je ne sais pas laquelle de ces trois la c'est et le Jardinier il n'est pas la pour aider !\n");
							printf ("\n Alors laquelle de ces trois la tu choisirait, toi, la dis donc ?\n");
							printf ("\n************************************************ \n");
							printf ("\n1) La fleur blanche a taches vertes et a tige jaune.\n");
							printf ("\n2) La fleur jaune a taches blanches et a tige verte.\n");
							printf ("\n3) La fleur verte a taches jaunes et a tige blanche. \n");
							printf ("\n************************************************ \n");
							
							scanf("%d", &repPlayer);
								if(repPlayer== 1 && tamponRepPlayer == 3){
									printf ("\n Mais vous etes fou ? On ne touche pas une fleur blanche a taches vertes et a tige jaune, tout le monde le sais !\n");
									printf ("\n Vous êtes victime d'une infection à la main et passerez le reste des vacances à l'infirmerie, a subir les remedes schamaniques de Roxane...\n");
									printf ("\n Peut-être vaudrait-il mieux recommencer la partie...\n");
								}
								
								if(repPlayer== 2 && tamponRepPlayer == 3){
									printf ("\n Vous avez bien choisit ! Heureusement que vous vous souveniez de vos cours. Vous vous en souveniez, non ?\n");
									printf ("\n Peu importe, Roxane est bien contente que vous lui ayez choisit une fleur et vous rentrez tous deux à l'infirmerie, ou vous retrouvez Franciskain le Praticien.\n");
									printf ("\n Franciskain : Roxane ! Qu'est-ce que vous etes encore en train de preparer la ? Quelle sorte d'impiete allez vous encore repandre en ce lieu saint ?\n");
									printf ("\n Roxane : La dis donc Franciskain vous n'allez pas commencer a m'enquiquiner sinon je vous jure que je vais vous faire comprendre pourquoi personne ne connait l'ingredient secret de mon RAGOUT !\n");
									printf ("\n C'est parce que c'est eux l'ingredient secret !\n");
									printf ("\n Franciskain : Impietes ! Sacrileges ! Mon enfant, qu'en pensez-vous ?\n");
									printf ("\n1) Refuser de s'en meler.\n");
									printf ("\n2) Prendre le parti de Roxane.\n");
									printf ("\n3) Prendre le parti de Franciskain le Praticien. \n");
									printf ("\n************************************************ \n");
									
									scanf("%d", &repPlayer);
								}
								
								if(repPlayer== 3 && tamponRepPlayer == 3){
									printf ("\n Mais vous etes fou ? On ne touche pas une fleur verte a taches jaunes et a tige blanche, tout le monde le sais !\n");
									printf ("\n Vous êtes immédiatement empoisonné et mourrez sur le coup. Voilà qui risque de faire desordre dans les papiers de l'ecole... heureusement, nous avons un necromancien.\n");
									printf ("\n Vous pourrez peut-être recommencer la partie...\n");
								}
						}
				}
				
				if (repPlayer== 2 && tamponRepPlayer == 1){
					tamponRepPlayer=2;
					printf ("\n Fransiscain : Et bien mon enfant, l'Eglise est toujours en mal d'agneau a sauver et votre aide serait la bienvenue. \n");
					printf ("\n Le Seigneur dans son infinie bontee a nie une fois de plus son existence au hasard, en me placant sur votre route. \n");
					printf ("\n Il s'avere justement que l'Eglise (MOI) a une tache a vous confiez... \n");
					printf ("\n L'accepteriez-vous ? \n");
					
					printf ("\n************************************************ \n");
					printf ("\n1) Changer d'avis et retourner chercher Roxane car elle ne peut pas etre pire que Fransiscain. \n");
					printf ("\n2) Accepter volontier de rendre service a l'Eglise (LUI). \n");
					printf ("\n3) S'enfuir immediatement et se precipiter vers les dortoirs. (Parce que cet homme est clairement malsain). \n");
					printf ("\n************************************************ \n");
				}
				
				if (repPlayer == 3 && tamponRepPlayer == 1){
					tamponRepPlayer=3;
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
			printf("\n Vous arrivez devant la vie scolaire. Grendel Larimenel, ecouteurs sur les oreilles, est en train de passer tranquilement le balais a cote de la porte.\n");
			printf ("\n Grendel : Salut ! Alors c'est toi que je dois prendre en stage ? Rale pas, on va se marrer, t'en fais pas. Et puis t'avais qu'a réviser, aussi...\n");
			printf ("\n enfin bref, tu tombe bien, ya plein de trucs a faire et j'ai pas envie d'etre partout a la fois. Alors ducoup si tu pouvais faire l'un de ces trucs...\n");
			printf ("\n************************************************ \n");
			printf ("\n1) Aller aux toilettes du deuxième etage pour vérifier qu'elles sont propres. \n");
			printf ("\n2) Aller dans la foret, en dehors de l'ecole, pour enqueter sur un truc qu'aurait vu un eleve. \n");
			printf ("\n3) Aller dans l'aile Ouest, celle ou vivent les professeurs, pour chercher le chat du Directeur qui s'est encore enfui. \n");
			printf ("\n************************************************ \n");
			scanf("%d", &repPlayer);
				if(repPlayer==1 && tamponRepPlayer==3){
					tamponRepPlayer=1;
					printf ("\n vous avez repondu 1\n");
				}
				
				if(repPlayer==2 && tamponRepPlayer==3){
					printf ("\n réponse 2\n");
				}
				
				if(repPlayer==3 && tamponRepPlayer==3){
					printf ("\n réponse 3\n");
				}
		}
	
	
	
	
	
	
	return 0;
}