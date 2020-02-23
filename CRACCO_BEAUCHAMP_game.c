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
			
			//Arrivee jardins
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
					
					//
					scanf("%d", &repPlayer);
						if (repPlayer== 1 && tamponRepPlayer == 1){
							tamponRepPlayer=4;
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
							printf ("\n2) Vous lui demandez s'il veut bien vous prendre en stage à la place de Roxane, il a quand meme l'air moins bizarre. \n");
							printf ("\n3) Vous lui demandez d'aller aider Roxane.\n");
							printf ("\n************************************************ \n");
							
							scanf("%d", &repPlayer);
								if (repPlayer== 1 && tamponRepPlayer == 2){
									tamponRepPlayer=1;
										printf ("\n Grendel : Mc Krame ? Aux dernieres nouvelles il est parti dans la foret, en dehors de l'ecole, pour verifier la pousse des boulots a feuilles d'or que le Directeur a fait planter.\n");
										printf ("\n Et n'ai pas peur de ce que les eleves raconte. Il parrait qu'il y a quelque chose dans les bois, mais c'est juste un gros ecureuil, ca fait des annees qu'il vit la bas.\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous le remerciez et vous rendez dans les bois.\n");
										printf ("\n2) Vous commencez a en avoir assez et retournez voir le Directeur pour lui dire ce que vous pensez de son ecole et de ce jeu\n");
										printf ("\n3) Finalement, ça ne vaut peut-etre pas le coup, s'il y a quelque chose dans les bois... autant retourner voir Roxane.\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
											if (repPlayer== 1 && tamponRepPlayer == 1){
												tamponRepPlayer=1;
												
											}
											
											if (repPlayer== 2 && tamponRepPlayer == 1){
												tamponRepPlayer=4;
												printf ("\n Le Directeur est pour le moins... vexe. Vous etes renvoye. Mais vous pourrez toujours reessayer...\n");
											}
											
											if (repPlayer== 3 && tamponRepPlayer == 1){
												tamponRepPlayer=3;
												printf ("\n Vous retournez dans les jardins pour aider Roxane\n");
												printf ("\n Roxane : Ah tu tombe bien toi, la dis donc ! He je sais que Tapadkoeur il t'a demande de faire un stage avec moi, alors tu sais tu vas pouvoir m'aider mon petit, la dis donc ! \n");
												printf ("\n J'ai besoin de trouver une fleur poussee au vent des landes de pierres pour en faire un RAGOUT qui me permettra de communiquer avec les ESPRITS\n");
												printf ("\n Le probleme c'est que je ne sais pas du tout a quoi c'est que ressemble cette satane fleur, je ne sais pas laquelle de ces trois la c'est et le Jardinier il n'est pas la pour aider !\n");
												printf ("\n Alors laquelle de ces trois la tu choisirait, toi, la dis donc ?\n");
												printf ("\n************************************************ \n");
												printf ("\n1) La fleur blanche a taches vertes et a tige jaune.\n");
												printf ("\n2) La fleur verte a taches jaunes et a tige blanche. \n");
												printf ("\n3) La fleur jaune a taches blanches et a tige verte.\n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
													if(repPlayer== 1 && tamponRepPlayer == 3){
														tamponRepPlayer=4;
														printf ("\n Mais vous etes fou ? On ne touche pas une fleur blanche a taches vertes et a tige jaune, tout le monde le sais !\n");
														printf ("\n Vous êtes victime d'une infection à la main et passerez le reste des vacances à l'infirmerie, a subir les remedes schamaniques de Roxane...\n");
														printf ("\n Peut-être vaudrait-il mieux recommencer la partie...\n");
													}
													
																										
													if(repPlayer== 2 && tamponRepPlayer == 3){
														tamponRepPlayer=4;
														printf ("\n Mais vous etes fou ? On ne touche pas une fleur verte a taches jaunes et a tige blanche, tout le monde le sais !\n");
														printf ("\n Vous êtes immédiatement empoisonné et mourrez sur le coup. Voilà qui risque de faire desordre dans les papiers de l'ecole... heureusement, nous avons un necromancien.\n");
														printf ("\n Vous pourrez peut-être recommencer la partie...\n");
													}
													
													if(repPlayer== 3 && tamponRepPlayer == 3){
														tamponRepPlayer=3;
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
															if(repPlayer== 1 && tamponRepPlayer == 3){
																tamponRepPlayer=4;
																printf ("\n Roxane et Franciscain ne sont pas souvent d'accord, mais votre manque d'implication fait concensus. Une tres mauvaise facon de commencer votre stage...\n");
																printf ("\n Vous etes renvoye... peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
															}
															
															if(repPlayer== 2 && tamponRepPlayer == 3){
																tamponRepPlayer=4;
																printf ("\n Roxane : AHA ! vous voyez Franciscain, le gamin il est d'accord avec moi, dis donc ! et la verite sort de la bouche des ENFANTS. Viens petit, on va aller preparer notre RAGOUT pour le Directeur\n");
																printf ("\n Ce n'est pas vraiment votre faute. Vous ne saviez pas que ca serait pour Tapadkoeur. Ni que ca serait si mauvais.\n");
																printf ("\n Ni qu'il vous accuserait parce qu'il ne peut pas faire renvoyer Roxane...\n");
															}
															
															if(repPlayer== 3 && tamponRepPlayer == 3){
																tamponRepPlayer=4;
																printf ("\n Franciscain : Ah ! brave enfant ! en voila au moins un ici dont l'ame sera sauvee !\n");
																printf ("\n Votre ame est peut-etre sauvee mais, pour votre stage, c'est mal parti. Vous venez de vexer attrocement Roxane, vous etes vire. \n");
																printf("\n Tapadkoeur ne vous laissera pas de seconde chance...peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
															}
													}

											}
														
								}						
								
								if (repPlayer== 2 && tamponRepPlayer == 2){
									tamponRepPlayer=2;
									printf ("\n Grendel : Mmmh... pourquoi pas. Justement, j'ai pas mal de boulot en ce moment et je serais pas contre un peu d'aide, si tu pouvais me remplacer sur certains trucs. Voilà ce que je te propose. Tu peux...\n");
									
								}
								
								if (repPlayer== 3 && tamponRepPlayer == 2){
									tamponRepPlayer=3;
									printf ("\n Grendel : Oulah, non. J'ai beaucoup trop de trucs a faire, desole. Tu devrais plutot retourner aider Roxane, apres tout tu es la pour ca.\n");
									printf ("\n Vous retournez dans les jardins pour aider Roxane\n");
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
											tamponRepPlayer=4;
											printf ("\n Mais vous etes fou ? On ne touche pas une fleur blanche a taches vertes et a tige jaune, tout le monde le sais !\n");
											printf ("\n Vous êtes victime d'une infection à la main et passerez le reste des vacances à l'infirmerie, a subir les remedes schamaniques de Roxane...\n");
											printf ("\n Peut-être vaudrait-il mieux recommencer la partie...\n");
										}
										
										if(repPlayer== 2 && tamponRepPlayer == 3){
											tamponRepPlayer=2;
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
												if(repPlayer== 1 && tamponRepPlayer == 2){
													tamponRepPlayer=4;
													printf ("\n Roxane et Franciscain ne sont pas souvent d'accord, mais votre manque d'implication fait concensus. Une tres mauvaise facon de commencer votre stage...\n");
													printf ("\n Vous etes renvoye... peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
												}
												
												if(repPlayer== 2 && tamponRepPlayer == 2){
													tamponRepPlayer=4;
													printf ("\n Roxane : AHA ! vous voyez Franciscain, le gamin il est d'accord avec moi, dis donc ! et la verite sort de la bouche des ENFANTS. Viens petit, on va aller preparer notre RAGOUT pour le Directeur\n");
													printf ("\n Ce n'est pas vraiment votre faute. Vous ne saviez pas que ca serait pour Tapadkoeur. Ni que ca serait si mauvais.\n");
													printf ("\n Ni qu'il vous accuserait parce qu'il ne peut pas faire renvoyer Roxane...\n");
												}
												
												if(repPlayer== 3 && tamponRepPlayer == 2){
													tamponRepPlayer=4;
													printf ("\n Franciscain : Ah ! brave enfant ! en voila au moins un ici dont l'ame sera sauvee !\n");
													printf ("\n Votre ame est peut-etre sauvee mais, pour votre stage, c'est mal parti. Vous venez de vexer attrocement Roxane, vous etes vire. \n");
													printf("\n Tapadkoeur ne vous laissera pas de seconde chance...peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
												}
										}
										
										if(repPlayer== 3 && tamponRepPlayer == 3){
											tamponRepPlayer=4;
											printf ("\n Mais vous etes fou ? On ne touche pas une fleur verte a taches jaunes et a tige blanche, tout le monde le sais !\n");
											printf ("\n Vous êtes immédiatement empoisonné et mourrez sur le coup. Voilà qui risque de faire desordre dans les papiers de l'ecole... heureusement, nous avons un necromancien.\n");
											printf ("\n Vous pourrez peut-être recommencer la partie...\n");
										}
								}
								
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
									tamponRepPlayer=4;
									printf ("\n Mais vous etes fou ? On ne touche pas une fleur blanche a taches vertes et a tige jaune, tout le monde le sais !\n");
									printf ("\n Vous êtes victime d'une infection à la main et passerez le reste des vacances à l'infirmerie, a subir les remedes schamaniques de Roxane...\n");
									printf ("\n Peut-être vaudrait-il mieux recommencer la partie...\n");
								}
								
								if(repPlayer== 2 && tamponRepPlayer == 3){
									tamponRepPlayer=2;
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
										if(repPlayer== 1 && tamponRepPlayer == 2){
											tamponRepPlayer=4;
											printf ("\n Roxane et Franciscain ne sont pas souvent d'accord, mais votre manque d'implication fait concensus. Une tres mauvaise facon de commencer votre stage...\n");
											printf ("\n Vous etes renvoye... peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
										}
										
										if(repPlayer== 2 && tamponRepPlayer == 2){
											tamponRepPlayer=4;
											printf ("\n Roxane : AHA ! vous voyez Franciscain, le gamin il est d'accord avec moi, dis donc ! et la verite sort de la bouche des ENFANTS. Viens petit, on va aller preparer notre RAGOUT pour le Directeur\n");
											printf ("\n Ce n'est pas vraiment votre faute. Vous ne saviez pas que ca serait pour Tapadkoeur. Ni que ca serait si mauvais.\n");
											printf ("\n Ni qu'il vous accuserait parce qu'il ne peut pas faire renvoyer Roxane...\n");
										}
										
										if(repPlayer== 3 && tamponRepPlayer == 2){
											tamponRepPlayer=4;
											printf ("\n Franciscain : Ah ! brave enfant ! en voila au moins un ici dont l'ame sera sauvee !\n");
											printf ("\n Votre ame est peut-etre sauvee mais, pour votre stage, c'est mal parti. Vous venez de vexer attrocement Roxane, vous etes vire. \n");
											printf("\n Tapadkoeur ne vous laissera pas de seconde chance...peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
										}
								}
								
								if(repPlayer== 3 && tamponRepPlayer == 3){
									tamponRepPlayer=4;
									printf ("\n Mais vous etes fou ? On ne touche pas une fleur verte a taches jaunes et a tige blanche, tout le monde le sais !\n");
									printf ("\n Vous êtes immédiatement empoisonné et mourrez sur le coup. Voilà qui risque de faire desordre dans les papiers de l'ecole... heureusement, nous avons un necromancien.\n");
									printf ("\n Vous pourrez peut-être recommencer la partie...\n");
								}
						}
				}
				//FRANCISCAIN
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
					//ROXANE
					scanf("%d", &repPlayer);
						if (repPlayer== 1 && tamponRepPlayer == 2){
							tamponRepPlayer=1;
							printf ("\n Vous retournez dans les jardins pour aider Roxane\n");
							printf ("\n Roxane : Ah tu tombe bien toi, la dis donc ! He je sais que Tapadkoeur il t'a demande de faire un stage avec moi, alors tu sais tu vas pouvoir m'aider mon petit, la dis donc ! \n");
							printf ("\n J'ai besoin de trouver une fleur poussee au vent des landes de pierres pour en faire un RAGOUT qui me permettra de communiquer avec les ESPRITS\n");
							printf ("\n Le probleme c'est que je ne sais pas du tout a quoi c'est que ressemble cette satane fleur, je ne sais pas laquelle de ces trois la c'est et le Jardinier il n'est pas la pour aider !\n");
							printf ("\n Alors laquelle de ces trois la tu choisirait, toi, la dis donc ?\n");
							printf ("\n************************************************ \n");
							printf ("\n1) La fleur blanche a taches vertes et a tige jaune.\n");
							printf ("\n2) La fleur verte a taches jaunes et a tige blanche. \n");
							printf ("\n3) La fleur jaune a taches blanches et a tige verte.\n");
							printf ("\n************************************************ \n");
												
							scanf("%d", &repPlayer);
								if(repPlayer== 1 && tamponRepPlayer == 1){
									tamponRepPlayer=4;
									printf ("\n Mais vous etes fou ? On ne touche pas une fleur blanche a taches vertes et a tige jaune, tout le monde le sais !\n");
									printf ("\n Vous êtes victime d'une infection à la main et passerez le reste des vacances à l'infirmerie, a subir les remedes schamaniques de Roxane...\n");
									printf ("\n Peut-être vaudrait-il mieux recommencer la partie...\n");
								}
													
																										
								if(repPlayer== 2 && tamponRepPlayer == 1){
									tamponRepPlayer=4;
									printf ("\n Mais vous etes fou ? On ne touche pas une fleur verte a taches jaunes et a tige blanche, tout le monde le sais !\n");
									printf ("\n Vous êtes immédiatement empoisonné et mourrez sur le coup. Voilà qui risque de faire desordre dans les papiers de l'ecole... heureusement, nous avons un necromancien.\n");
									printf ("\n Vous pourrez peut-être recommencer la partie...\n");
								}
													
								if(repPlayer== 3 && tamponRepPlayer == 1){
									tamponRepPlayer=3;
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
										if(repPlayer== 1 && tamponRepPlayer == 3){
											tamponRepPlayer=4;
											printf ("\n Roxane et Franciscain ne sont pas souvent d'accord, mais votre manque d'implication fait concensus. Une tres mauvaise facon de commencer votre stage...\n");
											printf ("\n Vous etes renvoye... peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
										}
															
										if(repPlayer== 2 && tamponRepPlayer == 3){
											tamponRepPlayer=4;
											printf ("\n Roxane : AHA ! vous voyez Franciscain, le gamin il est d'accord avec moi, dis donc ! et la verite sort de la bouche des ENFANTS. Viens petit, on va aller preparer notre RAGOUT pour le Directeur\n");
											printf ("\n Ce n'est pas vraiment votre faute. Vous ne saviez pas que ca serait pour Tapadkoeur. Ni que ca serait si mauvais.\n");
											printf ("\n Ni qu'il vous accuserait parce qu'il ne peut pas faire renvoyer Roxane...\n");
										}
															
										if(repPlayer== 3 && tamponRepPlayer == 3){
											tamponRepPlayer=4;
											printf ("\n Franciscain : Ah ! brave enfant ! en voila au moins un ici dont l'ame sera sauvee !\n");
											printf ("\n Votre ame est peut-etre sauvee mais, pour votre stage, c'est mal parti. Vous venez de vexer attrocement Roxane, vous etes vire. \n");
											printf("\n Tapadkoeur ne vous laissera pas de seconde chance...peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
										}
								}

						}
						//au service de Franciscain
						if(repPlayer== 2 && tamponRepPlayer == 2){
							tamponRepPlayer=2;
							printf ("\n Ah ! Le seigneur est tout aussi ravi que moi d'apprendre que vous vous souciez du salut des ames des pauvres gens qui habittent cette ecole ! \n");
							printf ("\n L'Eglise a, figurez-vous, trois menues taches a confier a un appotre volontaire tel que vous, mon enfant...\n");
							printf ("\n************************************************ \n");
							printf ("\n1) Se rendre en cuisines pour s'assurer que l'ostie a bien ete preparee pour le souper de ce dimanche. \n");
							printf ("\n2) Descendre au laboratoire de Machin le Nécromancien pour s'assurer qu'il ne profane pas une nouvelle depouille. \n");
							printf ("\n3) Porter un paquet de tracts à Marxiste le Latiniste pour la chorale de l'ecole, que le professeur de Sortilèges pourra toujours distribuer lors de sa prochaine reunion syndicale. \n");
							printf ("\n************************************************ \n");
							
							scanf("%d", &repPlayer);
							//POULET
							if(repPlayer== 1 && tamponRepPlayer == 2){
								tamponRepPlayer=1;
								printf ("\n \n");
							}
							//MACHIN
							if(repPlayer== 2 && tamponRepPlayer == 2){
								tamponRepPlayer=2;
								printf ("\n Machin : La SCIENCE, Marty ! La SCIENCE !\n");
											printf ("\n En entrant dans le laboratoire du Necromancien, vous constatez que les soupçons de Franciskain étaient on ne peut plus justifiés. Il est en train de dissequer un cadavre humain !\n");
											printf ("\n Machin : Vois-tu Marty c'est extremement simple. Si je prend le foie et que je l'intervertit avec l'un des poumons nous obtenons... AAAH ! Qu'est-ce que tu fiche ici ? Je... euh... tu...\n");
											printf ("\n************************************************ \n");
											printf ("\n1) S'enfuir en courant pour prevenir le Directeur.\n");
											printf ("\n2) S'enfuir en courant pour prevenir Franciscain.\n");
											printf ("\n3) Attaquer immediatement cet espece de malade mental !\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer== 1 && tamponRepPlayer == 2){
												tamponRepPlayer=4;
												printf ("\n Tapadkoeur : Mais qu'est-ce que vous venez m'emmerder, encore ? Machin le Necromancien a une accreditation pour pratiquer ces autopsies, et le cadavre est celui d'un homme ayant donne son corps a la science !\n");
												printf ("\n Alors bon... Je veux bien que vous n'ayez pas ete au courant, bien que cela soit une preuve de plus de votre absence totale d'implication dans vos etudes l'an dernier...\n");
												printf ("\n Mais EN REVANCHE vous me sortez que vous avez ete envoye chez Machin par Franciscain le Praticien... alors que vous faisiez votre stage chez Roxane la Shamane !\n");
												printf ("\n Alors vous savez quoi ? Puisque vous n'etes meme pas fichu de rester avec votre maitresse de stage, vous allez pouvoir vous en eloigner d'autant plus que vous ne remettrez jamais les pieds ici !\n");
												printf ("\n ... bon et bien vous etes renvoye... j'imagine qu'il vaut mieux recommencer. Et eviter d'aller enquiquiner le Necromancien...\n");
											}
											
											if(repPlayer== 2 && tamponRepPlayer == 2){
												tamponRepPlayer=4;
												printf ("\n Alors que vous couriez vers l'infirmerie, un jeune garçon en chaussettes, portant un bandeau a cornes sur le front, passe devant vous en courant, une enorme creature a ses trousses, en plein dans les couloirs de l'ecole !\n");
												printf ("\n Paulo le Nouveau : Restez pas laaaaaa !\n");
												printf ("\n Un conseil avise que vous n'avez pas vraiment le temps de suivre, puisque la creature vous percute et vous assomme contre un mur...\n");
												printf ("\n \n");
												printf ("\n Vous vous reveillez le lendemain a l'infirmerie, ou franciscain le Praticien et Roxane la Shamane vous expliquent gentiment qu'une manticore avait ete malencontreusement ramenee par un professeur dans l'ecole.\n");
												printf ("\n Heureusement, la creature a ete maitrisee grace a l'aide de quelques eleves. Tapadkoeur le Directeur a decide de vous epargner le stage, en raison de blessures que vous avez recu a cause d'un enseignant.\n");
												printf ("\n Tout est encore un peu confus mais, l'important, c'est qu'on dirait bien que vous avez gagne...\n");
												printf ("\n VICTOIRE !\n");
											}
											
											if(repPlayer== 3 && tamponRepPlayer == 2){
												tamponRepPlayer=4;
												printf ("\n Machin le Necromancien a une accreditation pour pratiquer ces autopsies, et le cadavre est celui d'un homme ayant donne son corps a la science...\n");
												printf ("\n Certes vous ne pouviez pas vraiment le savoir... mais tres franchement, Tapadkoeur s'en moque. Vous avez attaque un professeur dans l'exercice cent pour cent legal de ses fonctions... alors...\n"); 
												printf ("\n Tapadkoeur : ...Les mots me manque pour vous dire a quel point vous etes vire.\n");
											}
							}
							//MATHEUX
							if(repPlayer== 3 && tamponRepPlayer == 2){
								tamponRepPlayer=3;
								printf ("\n Les bras charges de tracts, vous vous vous rendez a la salle des professeurs pour trouver Marxiste le Latiniste mais, arrive ici, vous tombez sur Matheux le Boutonneux.\n");
								printf ("\n L'odieux professeur de mathematiques, plus carthesien que la realite elle meme, se tourne vers vous, sa tasse de cafe sale a la main, en vous adressant un regard meprisant.\n");
								printf ("\n Matheux : Tiens, mais je te connais toi. Le stagiaire de Roxane, il parrait. Comme quoi, qui se ressemble s'assemble... d'un imbécile a un autre. Qu'est-ce que tu fiche la ? T'as rien a faire ici.\n");
								printf ("\n************************************************ \n");
								printf ("\n1) Vous vexer et lui faire part du fond de votre pensee.\n");
								printf ("\n2) Rester calme et lui demander ou trouver le Latiniste.\n");
								printf ("\n3) Lui donner les tracts en passant outre son mepris. \n");
								printf ("\n************************************************ \n");
								
								scanf("%d", &repPlayer);
								if(repPlayer== 1 && tamponRepPlayer == 3){
									tamponRepPlayer=4;
									printf ("\n Matheux : Ho ho ! Mais c'est qu'il a du repondant, le trilobite ! Mais c'est pas un avantage evolutif certifie, ca.\n");
									printf ("\n Ce que tu viens de faire, ca s'appelle un erreur. Et ce que tu vas recolter, tu sais comment ca s'appelle ? La selection naturelle.\n");
									printf ("\n \n");
									printf ("\n Matheux n'a pas le droit de vous renvoyer, rassurez-vous. En revanche il peut vous coller. Vous coller pour plusieurs heures. Durant lesquelles vous n'effecturez pas votre stage.\n");
									printf ("\n Et puisque vous ne travaillez pas... vous etes vire.\n");
									printf ("\n Tres franchement il faudrait peut-etre apprendre a tenir votre langue. Recommencez et essayez de vous rappeller votre place dans la chaine alimentaire.\n");
								}
								
								if(repPlayer== 2 && tamponRepPlayer == 3){
									tamponRepPlayer=2;
									printf ("\n Matheux : Je vois pas pourquoi je te rendrais ce service. Quand bien meme tu reussirais ton stage, t'es deja un mort en sursis vu ton bulletin. J'vais pas perdre du temps a sauver une espece deja eteinte.\n");
									printf ("\n Mais si tu me prouve que je me suis trompe sur ton compte, je pourrais peut-etre faire un petit effort. Enfin, c'est pas comme si je m'etais deja trompe, reve pas trop.\n");
									printf ("\n T'as qu'a repondre a une question simple. Meme une paramecie y arriverait. Pour peu que tu sache ce qu'est une paramecie, mais vu que ca fait plus de trois syllabes j'ai des doutes.\n");
									printf ("\n Allez, une facile : vingt-cinq au carre plus trois-mille huit-cent cinquante-sept divise par cinquante-quatre virgule six, le tout moins 3 virgule zero, huit, neuf, sept, six, quinze et pour finir tu me divise out ça par soixante-dix-huit virgule neuf, neuf, huit, un, cinq, zero, cinq, huit, sept, neuf, un, deux, zero, neuf.\n");
									printf ("\n************************************************ \n");
									printf ("\n1) Refuser de répondre, qu'est-ce que c'est que ce calcul ?!\n");
									printf ("\n2) 1\n");
									printf ("\n3) 78,99815058791209 \n");
									printf ("\n************************************************ \n");
									
									scanf("%d", &repPlayer);
									if(repPlayer== 1 && tamponRepPlayer == 2){
										tamponRepPlayer=4;
										printf ("\n Matheux : Et du coup non. Petit con. Tant pis pour toi, mais je suis pas vraiment surpris. Quitte a ruiner ta scolarite t'aurais au moins pu essayer de t'en sortir, mais bon, on peut pas demander a un chanrançon de voir plus loin que le bout de son rostre. Allez ca degage.\n");
										printf ("\n Pennaud, vous retournez voir Franciscain. L'homme d'Eglise est tres decu que vous n'ayez meme pas reussi a donner de simples tracts. Puisque l'Eglise ne peut pas vous faire confiance, l'ecole n'a aucune raison de le faire...\n");
										printf ("\n Je sais ce que vous vous dites. ''Est-ce que c'est seulement possible de gagner a ce jeu ?!'' Vous pouvez toujours recommencer, si vous voulez la reponse...\n");
									}
									
									if(repPlayer== 2 && tamponRepPlayer == 2){
										tamponRepPlayer=4;
										printf ("\n Matheux vous regarde avec de grands-yeux rond.\n");
										printf ("\n Matheux : J'y crois pas... il a PENSE cet abruti. Il a trouve. Oh le con. Gamin, tu viens de me redonner foi en l'humanite. Aboule tes tracts, ca me fait plaisir. De toute facon j'avais besoin d'un sous-boc.\n");
										printf ("\n Lorsque vous racontez ce qu'il s'est passe a Franciscain, il est impressionne par vos capacites. Vous etes clairement un genie, ce stage ne peut pas vous apporter grand chose. Tapadkoeur sera bien force de ceder !\n");
										printf ("\n Vous avez prouve votre genie au Directeur. c'est donc une VICTOIRE !\n");
									}
									
									if(repPlayer== 3 && tamponRepPlayer == 2){
										tamponRepPlayer=3;
										printf ("\n Matheux : MAIS IL EST COMPLETEMENT CON, LUI !!!\n");
										printf ("\n Matheux vous jette sa tasse, qui explose sur le mur derriere vous et ruine les tracts en les couvrant de cafe. Vous tournez immediatement les talons, parce qu'ils s'agirait de ne pas prendre la suivante sur le visage.\n");
										printf ("\n Mais vous voila a present sans avoir accompli la tache que vous avait confie L'Eglise (Franciscain) et ca la fichera mal quand vous passerez au purgatoire... que faire ?\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Se rendre en cuisines pour s'assurer que l'ostie a bien ete preparee pour le souper de ce dimanche. Apres tout franciscain vous avait aussi confie cette tache.\n");
										printf ("\n2) Descendre au laboratoire de Machin le Nécromancien pour s'assurer qu'il ne profane pas une nouvelle depouille. Apres tout franciscain vous avait aussi confie cette tache.\n");
										printf ("\n3) Retourner voir Franciscain pour lui expliquer\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
										//POULET
										if(repPlayer== 1 && tamponRepPlayer == 3){
											tamponRepPlayer=1;
										}
										//MACHIN
										if(repPlayer== 2 && tamponRepPlayer == 3){
											tamponRepPlayer=2;
											printf ("\n Machin : La SCIENCE, Marty ! La SCIENCE !\n");
											printf ("\n En entrant dans le laboratoire du Necromancien, vous constatez que les soupçons de Franciskain étaient on ne peut plus justifiés. Il est en train de dissequer un cadavre humain !\n");
											printf ("\n Machin : Vois-tu Marty c'est extremement simple. Si je prend le foie et que je l'intervertit avec l'un des poumons nous obtenons... AAAH ! Qu'est-ce que tu fiche ici ? Je... euh... tu...\n");
											printf ("\n************************************************ \n");
											printf ("\n1) S'enfuir en courant pour prevenir le Directeur.\n");
											printf ("\n2) S'enfuir en courant pour prevenir Franciscain.\n");
											printf ("\n3) Attaquer immediatement cet espece de malade mental !\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer== 1 && tamponRepPlayer == 2){
												tamponRepPlayer=4;
												printf ("\n Tapadkoeur : Mais qu'est-ce que vous venez m'emmerder, encore ? Machin le Necromancien a une accreditation pour pratiquer ces autopsies, et le cadavre est celui d'un homme ayant donne son corps a la science !\n");
												printf ("\n Alors bon... Je veux bien que vous n'ayez pas ete au courant, bien que cela soit une preuve de plus de votre absence totale d'implication dans vos etudes l'an dernier...\n");
												printf ("\n Mais EN REVANCHE vous me sortez que vous avez ete envoye chez Machin par Franciscain le Praticien... alors que vous faisiez votre stage chez Roxane la Shamane !\n");
												printf ("\n Alors vous savez quoi ? Puisque vous n'etes meme pas fichu de rester avec votre maitresse de stage, vous allez pouvoir vous en eloigner d'autant plus que vous ne remettrez jamais les pieds ici !\n");
												printf ("\n ... bon et bien vous etes renvoye... j'imagine qu'il vaut mieux recommencer. Et eviter d'aller enquiquiner le Necromancien...\n");
											}
											
											if(repPlayer== 2 && tamponRepPlayer == 2){
												tamponRepPlayer=4;
												printf ("\n Alors que vous couriez vers l'infirmerie, un jeune garçon en chaussettes, portant un bandeau a cornes sur le front, passe devant vous en courant, une enorme creature a ses trousses, en plein dans les couloirs de l'ecole !\n");
												printf ("\n Paulo le Nouveau : Restez pas laaaaaa !\n");
												printf ("\n Un conseil avise que vous n'avez pas vraiment le temps de suivre, puisque la creature vous percute et vous assomme contre un mur...\n");
												printf ("\n \n");
												printf ("\n Vous vous reveillez le lendemain a l'infirmerie, ou franciscain le Praticien et Roxane la Shamane vous expliquent gentiment qu'une manticore avait ete malencontreusement ramenee par un professeur dans l'ecole.\n");
												printf ("\n Heureusement, la creature a ete maitrisee grace a l'aide de quelques eleves. Tapadkoeur le Directeur a decide de vous epargner le stage, en raison de blessures que vous avez recu a cause d'un enseignant.\n");
												printf ("\n Tout est encore un peu confus mais, l'important, c'est qu'on dirait bien que vous avez gagne...\n");
												printf ("\n VICTOIRE !\n");
											}
											
											if(repPlayer== 3 && tamponRepPlayer == 2){
												tamponRepPlayer=4;
												printf ("\n Machin le Necromancien a une accreditation pour pratiquer ces autopsies, et le cadavre est celui d'un homme ayant donne son corps a la science...\n");
												printf ("\n Certes vous ne pouviez pas vraiment le savoir... mais tres franchement, Tapadkoeur s'en moque. Vous avez attaque un professeur dans l'exercice cent pour cent legal de ses fonctions... alors...\n"); 
												printf ("\n Tapadkoeur : ...Les mots me manque pour vous dire a quel point vous etes vire.\n");
											}
											
										}
										
										if(repPlayer== 3 && tamponRepPlayer == 3){
											tamponRepPlayer=4;
											printf ("\n Pennaud, vous retournez voir Franciscain. L'homme d'Eglise est tres decu que vous n'ayez meme pas reussi a donner de simples tracts. Puisque l'Eglise ne peut pas vous faire confiance, l'ecole n'a aucune raison de le faire...\n");
											printf ("\n Je sais ce que vous vous dites. ''Est-ce que c'est seulement possible de gagner a ce jeu ?!'' Vous pouvez toujours recommencer, si vous voulez la reponse...\n");
										}
									}
								}
								
								if(repPlayer== 3 && tamponRepPlayer == 3){
									tamponRepPlayer=4;
									printf ("\n Matheux regarde negligement le paquet de tracts que vous lui tendez et ricane en portant son cafe a sa bouche.\n");
									printf ("\n Matheux : T'as vraiment cru que ca marcherait ? Darwinn se fout de ta gueule. Allez degage de ma vue.\n");
									printf ("\n Pennaud, vous retournez voir Franciscain. L'homme d'Eglise est tres decu que vous n'ayez meme pas reussi a donner de simples tracts. Puisque l'Eglise ne peut pas vous faire confiance, l'ecole n'a aucune raison de le faire...\n");
									printf ("\n Je sais ce que vous vous dites. ''Est-ce que c'est seulement possible de gagner a ce jeu ?!'' Vous pouvez toujours recommencer, si vous voulez la reponse...\n");
									
								}
								
							}
							
							
						}
						//LELO !	
						if(repPlayer== 3 && tamponRepPlayer == 2){
							tamponRepPlayer=3;
							printf ("\n Sans demander votre reste, vous tournez les talons et vous precipitez vers les dortoirs de deuxieme annee.\n");
							printf ("\n  Mais alors que vous tourniez a l'angle, vous trebuchez soudain sur une mauvaise blague et vous etalez par terre !\n");
							printf ("\n Vous vous redressez pour tomber nez a truffe avec Lelo le Chalaud, un nouvel eleve de premiere annee deja connu pour ses farces... renversantes.\n");
							printf ("\n Le jeune garçon, accroupi par terre avec sa queue battant tranquielement l'air derriere lui, vous adresse un petit sourire hautain de ses dents pointues rehausse par ses yeux jaunes\n");
							printf ("\n Et place un petit doigt griffu sur votre nez avec un amusement certain.\n");
							printf ("\n Lelo : Lelo.\n");
							printf ("\n Sans crier gare, il saute au plafond, et vous realisez soudainement qu'il vous a retire, par un odieux tour de passe passe, vos deux chaussures et qu'il s'enfuit avec !\n");
							printf ("\n************************************************ \n");
							printf ("\n1) Vous filez a la vie scolaire vous plaindre du vol. Lelo a commis la betise de trop.. \n");
							printf ("\n2) Tant pis, ce ne sont que des chaussures, vous n'avez pas que ca a faire et rester en chaussettes vous va aussi bien. \n");
							printf ("\n3) Vous lui courez immediatement apres. Vous n'allez pas laisser passer ça ! \n");
							printf ("\n************************************************ \n");
							
							scanf("%d", &repPlayer);
							//ARMONISTE
							if(repPlayer== 1 && tamponRepPlayer == 3){
								tamponRepPlayer=1;
								printf ("\n En arrivant devant la vie scolaire, vous marchez par megarde dans le tas de poussiere que venait de balayer Grendel Larimenel, le concierge. Vos chaussettes accrochent la poussiere et l'etalent partout.\n");
								printf ("\n Grendel est assez agace et vous traine devant le CPE pour que vous expliquiez ce que vous fichiez en chaussettes dans les couloirs sans accreditation speciale.\n");
								printf ("\n  Armoniste le Bouddhiste, psychologue scolaire, conseiller d'orientation et CPE par interim, vous regarde avec bienveillance.\n");
								printf ("\n************************************************ \n");
								printf ("\n1) Lui dire simplement la verite. \n");
								printf ("\n2) Vous taire, comme le font tous les eleves face a un CPE.\n");
								printf ("\n3) S'offusquer qu'on ne vous laisse pas vous chausser (ou non-chausser) comme vous le souhaitez. \n");
								printf ("\n************************************************ \n");
								
								scanf("%d", &repPlayer);
								if(repPlayer== 1 && tamponRepPlayer == 1){
									tamponRepPlayer=4;
									printf ("\n Ah ce satane Lelo, il n'en est pas a son coup d'essai ! Vous n'etes que sa derniere victime en date. Il a sans doute dors et deja jete vos chaussures dans un niz de fourmis.\n");
									printf ("\n Tapadkoeur le Directeur est peut-etre ulcere, mais il reconnait que ca n'est pas votre faute. Pour la peine, il vous epargne le stage. Vous aurez a faire vos preuves l'annee prochaine, mais pour cette annee, vous etes sauve.\n");
									printf ("\n VICTOIRE !\n");
								}
								
								
								if(repPlayer== 2 && tamponRepPlayer == 1){
									tamponRepPlayer=4;
									printf ("\n S'il y a une chose qui peut enerver un Bouddhiste, c'est qu'on fasse preuve de mepris quand il fait preuve de bienveillance. Repondre a la question aurait ete la moindre des politesses !\n");
									printf ("\n Puisque vous refusez de vous justifier, Tapadkoeur n'aura pas a se justifier lui non plus. Vous etes renvoye.\n");
									printf ("\n Vous devriez peut-etre reessayer et faire preuve de plus de politesse...\n");
								}
								//GRENDEL
								if(repPlayer== 3 && tamponRepPlayer == 1){
									tamponRepPlayer=2;
									printf ("\n Armoniste : Tu as bien raison. Apres tout, chaque eleve est libre de se vetir comme il le souhaite, dans les limites de la pudeur, que tu ne franchis assurement pas. Je ne vois pas ce qu'il y aurait a te repprocher.\n");
									printf ("\n En revanche, tu as derange le travail de ce cher monsieur Larimenel, et cela demande reparation. Tu vas donc l'assister pour le reste de la journee.\n");
									
									printf ("\n \n");
								}
								
							}
							//ARNAKOEUR
							if(repPlayer== 2 && tamponRepPlayer == 3){
								tamponRepPlayer=2;
								printf ("\n Vous voila a presant errant dans les dortoirs, en chaussettes, a avoir fuit votre nouveau maitre de stage. Si Tapadkoeur l'apprend, vous allez vous retrouver dans les ennuis jusqu'au coup...\n");
								printf ("\n Une voix vous fait soudain vous retourner. Arnakoeur le Porte-Malheur, le meilleur surveillant de l'ecole (et accessoirement fils du Directeur...).\n");
								printf ("\n Arnakoeur : Hey ! Salut Paulo, qu'est-ce que tu fiche la ? Oh, pardon, je t'ai confondu avec un autre eleve. Les chaussettes, tout ca... Enfin, je maintient ma question quand meme, qu'est-ce que tu fais la ?\n");
								printf ("\n************************************************ \n");
								printf ("\n1) Autant lui dire la verite, Arnakoeur est parfois indulgent avec les eleves... \n");
								printf ("\n2) Lui demander qui est Paulo. \n");
								printf ("\n3) Prendre la pire decision possible et fuir immediatement. C'est le fils du Directeur ! \n");
								printf ("\n************************************************ \n");
								
								scanf("%d", &repPlayer);
								if(repPlayer== 1 && tamponRepPlayer == 2){
									tamponRepPlayer=1;
									printf ("\n Arnakoeur : Oulah. Bon, pour tes chaussures, je previendrais le CPE, par contre que tu ai fui ton stage, c'est pas ouf... Le Directeur va peter un ulcere s'il apprend ca.\n");
									printf ("\n Bien sur, je pourrais toujours m'arranger avec lui pour t'eviter des ennuis... apres tout, il perd toujours au black jack... mais c'est que mon aide se merite, tu sais.\n");
									printf ("\n Alors voila ce que je te propose. On va jouer a un petit jeu, et si tu gagne, je te sauverais les miches. Deal ? \n");
									printf ("\n************************************************ \n");
									printf ("\n1) Refuser. Vous sentez le piege. \n");
									printf ("\n2) Accepter, vous n'avez rien a perdre. \n");
									printf ("\n3) Finalement, fuir n'etait peut-etre pas une si mauvaise idee...\n");
									printf ("\n************************************************ \n");
									scanf("%d", &repPlayer);
									
									if(repPlayer== 1 && tamponRepPlayer == 1){
										tamponRepPlayer=4;
										printf ("\n Arnakoeur : Tu es sur ? Tant pis pour toi alors. Je vais pas t'aider si tu refuse de jouer.\n");
										printf ("\n Quand on vous tend la perche, saisissez-la. Tsss... bon et bien, puisqu'Arnakoeur etait votre seule chance de vous en sortir, vous avez perdu.\n");
										printf ("\n Naturelement, Tapadkoeur va vous renvoyer. Alors vous devriez peut-etre mieux recommencer...\n");
									}
									
									if(repPlayer== 2 && tamponRepPlayer == 1){
										tamponRepPlayer=2;
										printf ("\n Arnakoeur : Parfait ! Le jeu est tout con. Tu choisit une de ces trois cartes. J'en prendrais une autre. Celui qui a la plus grande gagne. Go !\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Choisir la carte 1 (Arnakoeur prendra la 3). \n");
										printf ("\n2) Choisir la carte 2 (Arnakoeur prendra la 1). \n");
										printf ("\n3) Choisir la carte 3 (Arnakoeur prendra la 2). \n");
										printf ("\n************************************************ \n");
										scanf("%d", &repPlayer);
										
										if(repPlayer== 1 && tamponRepPlayer == 2){
											tamponRepPlayer=4;
											printf ("\n Vous tirez un 10 de carreau et Arnakoeur un As de Pique. Vous avez perdu.\n");
											printf ("\n¨Pas la peine de compter sur son aide, vous ne pouvez plus qu'attendre le verdict du Directeur sur votre cas...\n");
											printf ("\n Sans surprise, vous etes renvoye. mais vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer== 2 && tamponRepPlayer == 2){
											tamponRepPlayer=4;
											printf ("\n Vous tirez un 2 de trefles et Arnakoeur un 10 de carreau. Vous avez perdu.\n");
											printf ("\n¨Pas la peine de compter sur son aide, vous ne pouvez plus qu'attendre le verdict du Directeur sur votre cas...\n");
											printf ("\n Sans surprise, vous etes renvoye. mais vous pourrez toujours recommencer...\n");
											
										}
										
										if(repPlayer== 3 && tamponRepPlayer == 2){
											tamponRepPlayer=4;
											printf ("\n Vous tirez un as de pique et Arnakoeur un 2 de trefles. Vous avez gagne !\n");
											printf ("\n Arnakoeur : J'ai perdu ! Comme promis, je dirais a Tapadkoeur de te laisser tranquille. T'es sauve, ''chaussettes'' ! Profites-en bien.\n");
											printf ("\n Tapadkoeur ne sait pas resister a une partie de black-jack et il perd toujours. Vous etes sauve du stage et de toutes ses consequences...\n");
											printf ("\n VICTOIRE !\n");
										}
									}
									
									if(repPlayer== 3 && tamponRepPlayer == 1){
										tamponRepPlayer=4;
										printf ("\n Arnakoeur sait se montrer comprehensif avec les eleves, mais il faudrait voir a ne pas le prendre pour un Trickster de bas etage. Il vous rattrappe en deux temps trois mouvements.\n");
										printf ("\n Vous vouliez vraiment fuir un mage confirme en chaussettes ? Je vous avait dit que c'etait la pire decision possible.\n");
										printf ("\n Le Directeur n'est deja pas tres coulant d'ordinaire, mais votre suite de mauvaises decisions tient de l'abus. Vous etes vire. Et pas qu'un peu.\n");
										printf ("\n Allez, reccommencez et essayez de prendre au moins UNE bonne decision, cette fois, quand meme.\n");
									}
								}
								
								if(repPlayer== 2 && tamponRepPlayer == 2){
									tamponRepPlayer=4;
									printf ("\n Arnakoeur : Paulo ? Tu le connais pas ? On voit que t'as rien suivit l'an dernier, toi. C'est un peu notre mascotte a nous, Paulo. Le gamin non-mage plus doue que des mages\n");
									printf ("\n Tu vois pas ? Pas très grand, des bras de crevettes, se balade en chaussettes et a un bandeau a cornes de chevres sur le front... il a toujours l'air un peu paume, tu vois pas ?\n");
									printf ("\n Ce gamin c'est l'incarnation du Schnaps. je l'adore. Bon tu sais quoi ? Puisque tu es en chaussettes, tu peux pas etre du genre mauvais, alors je sais pas trop ce que t'as fait mais je dirais au dirlo de te laisser tranquille.\n");
									printf ("\n \n");
									printf ("\n ...C'est un peu confus, mais quelle qu'en soit la raison... on dirait bien que vous avez gagne.\n");
									printf ("\n VICTOIRE !\n");
								}
								
								if(repPlayer== 3 && tamponRepPlayer == 2){
									tamponRepPlayer=4;
									printf ("\n Arnakoeur sait se montrer comprehensif avec les eleves, mais il faudrait voir a ne pas le prendre pour un Trickster de bas etage. Il vous rattrappe en deux temps trois mouvements.\n");
									printf ("\n Vous vouliez vraiment fuir un mage confirme en chaussettes ? Je vous avait dit que c'etait la pire decision possible.\n");
									printf ("\n Le Directeur n'est deja pas tres coulant d'ordinaire, mais votre suite de mauvaises decisions tient de l'abus. Vous etes vire. Et pas qu'un peu.\n");
									printf ("\n Allez, reccommencez et essayez de prendre au moins UNE bonne decision, cette fois, quand meme.\n");
								}
							}
							
							if(repPlayer== 3 && tamponRepPlayer == 3){
								tamponRepPlayer=4;
								printf ("\n En courant apres Lelo, vous vous retrouvez a percuter violement Brutus et Rufus, le sdeux brutes de quatrieme annee, qui prennent assez mal cette violente colision.\n");
								printf ("\n Perche au sommet d'une poutre, Lelo regarde le spectacle de la destruction progressive de votre integrite physique en ricanant, avant de vous achever en laissant retomber vos chaussures sur votre crane.\n");
								printf ("\n Et puisqu'il s'agirait de partir en beaute, le Chalaud en profite pour aller vous denoncer a la vie scolaire pour harcelement. Apres tout il n'a pas vos chaussures en main...\n");
								printf ("\n La jusctice scolaire etant ce qu'elle est, Tapadkoeur vous aura vire bien avant de decouvrir que vous n'y etiez pour rien. Il sera d'accord pour vous reprendre, mais d'ici la Lelo aura fait courir la rumeur que vous etes une brute et un harceleur\n");
								printf ("\n Votre vie scolaire et sociale va etre difficile a sauver... vous avez perdu.\n");
								printf ("\n LELO.\n");
							}
						}
				}
				
				if (repPlayer == 3 && tamponRepPlayer == 1){
					tamponRepPlayer=4;
					printf ("\nTapadkeur le Directeur : VOUS VOUS FOUTEZ DE MOOOOI ?! VOUS ETES VIRE ! VOUS ETES TELLEMENT VIRE QUE MEME SI JE VOUS REPRENAIS VOUS SERIEZ VIRE PAR DEFAUT ! \n");
					printf ("\n Vous avez mis le directeur en colère, vous avez perdu, il vaudrait mieux reessayer.... \n");
					
				}
			
			
		}
		
		//SCENAR POULET
		if (repPlayer== 2 && tamponRepPlayer == 0){
			tamponRepPlayer =2;
			printf("\n Vous arrivez dans les cuisines. Ou vous tombez nez a nez avec votre nouveau maitre de stage, Poulet le Gourmet.\n");
			printf("\n Poulet : Par l'argenterie de ma grand-tante ! Macareux ! Qu'est-ce que vous fichez encore de MON cote des cuisines !?\n");
			printf ("\n A votre maigre et sec maitre de stage (dont la moustache en zigzag reflete a merveille le cote anguleux de sa personalite) repond un grand homme pour le moins corpulent, a la tete coiffee d'une toque.\n");
			printf ("\n Eh beh, teh, Poulet ! Si vous vouliez pas que j'vienne de votre cote il fallait pas garder tout l'sel ici, Peuchere !\n");
			printf ("\n Poulet : Comme si vous aviez besoin de sel pour quoi que ce soit, vous ! Meme vos frites sont sucrees !\n");
			printf ("\n Macareux : Teh Macarel, si vous les aviez goutte vous cracheriez pas d'sus comme ca, a mes frites sucrees. \n");
			printf ("\n Poulet : Y goutter ? Vous voulez ma mort ?!\n");
			
			printf ("\n************************************************ \n");
			printf ("\n1) Leur signaler votre presence en toussotant. \n");
			printf ("\n2) Retourner voir Tapadkoeur pour lui expliquer qu'il y a un probleme en cuisine.\n");
			printf ("\n3) Attendre patiemment qu'ils arretent de se disputer et vous remarquent. \n");
			printf ("\n************************************************ \n");
			
			scanf("%d", &repPlayer);
			if (repPlayer== 1 && tamponRepPlayer == 2){
				tamponRepPlayer =1;
				printf ("\nMacareux se tourne subitement vers vous avec un regard degageant toute la gentillesse du monde et vous interpelle.\n");
				printf ("\nMacareux : Et benh gamin pourquoi donc que tu tousses comme ca la ? Tiens vas-y goute donc a mes frites sucrees au miel c'bon pour la gorge. Ca va te requinquer peuchere !\n");
				printf ("\nMacareux vous pose un enorme bol de fites sucrees dans les mains et vous regarde avec impatience, un sourire presque aussi large que sa bedaine se dessinant sur son visage.\n");
				printf ("\nPoulet: NOOOOOOON !! Ne mange pas ça gamin, sinon tu vas mourir du du diabesterol ! C'est pire que du kouignaman ! Mange plutot ca.\n");
				printf ("\nC'est sur cet avertissement que Poulet vous tendit une patate douce cuite a la vapeur.\n");
				
				printf ("\n************************************************ \n");
				printf ("\n1) Choisir les frites SUCREES.\n");
				printf ("\n2) Choisir la patate.\n");
				printf ("\n3) Ne rien manger. \n");
				printf ("\n************************************************ \n");

				scanf("%d", &repPlayer);
				if (repPlayer== 1 && tamponRepPlayer == 1){
					tamponRepPlayer =1;
					printf ("\nVous regardez le bol de frites avec attention. \n");
					
					printf ("\n************************************************ \n");
					printf ("\n1) Manger toutes les frites parce que ca a l'air trop bon!\n");
					printf ("\n2) Ne manger du'une seulte frite pour gouter.\n");
					printf ("\n3) Changer d'avis au dernier moment et manger la patate. \n");
					printf ("\n************************************************ \n");
					
					scanf("%d", &repPlayer);
						if (repPlayer== 1 && tamponRepPlayer == 1){
						tamponRepPlayer =4;
						printf ("\nVous vous tappez la plus grosse indigestion de votre vie et vous retrouvez a l'infirmerie pour toutes les vacances. \n");
						printf ("\nIl va s'en dire que vous etes vire. Mais avez-vous vraiment des regrets ? C'etait si bon ! \n");
						
						}
						
						//forêt
						if (repPlayer== 2 && tamponRepPlayer == 1){
							tamponRepPlayer =2;
							printf ("\nVous mangez la frite et il s'avere que cette frite est plutot goutue. Vous vous retenez de devorer le reste du bol et faites par de votre avis aux cuisiniers. \n");
							printf ("\nPoulet : Meaah! ce gamin n'a aucun gout. Et c'est ca qui va faire son stage chez moa ? Plutot que d'alimenter ton diabesterol va donc me chercher des champignons dans la foret. Au moins tu te rendras utile... \n");
							
							printf ("\n************************************************ \n");
							printf ("\n1)  \n");
							printf ("\n2)  \n");
							printf ("\n3)  \n");
							printf ("\n************************************************ \n");
							
						}
						
						if (repPlayer== 3 && tamponRepPlayer == 1){
							tamponRepPlayer =4;
							printf ("\nVous mangez la patate de Poulet et toute la joie de vivre qui vous animait, toutes les emotions positives que vous pouviez ressentir quittent votre etre... \n");
							printf ("\nA quoi bon continuer ? Autant recommencer... \n");
							
						}
					

				
				}
				
				if (repPlayer== 2 && tamponRepPlayer == 1){
					tamponRepPlayer =4;
					printf ("\nVous mangez la patate de Poulet et toute la joie de vivre qui vous animait, toutes les emotions positives que vous pouviez ressentir quittent votre etre... \n");
					printf ("\nA quoi bon continuer ? Autant recommencer... \n");
				}
				
				if (repPlayer== 3 && tamponRepPlayer == 1){
					tamponRepPlayer =4;
					printf ("\nMacareux le Delicieux et Poulet le Gourmet ne sont pas souvent d'accord, mais votre manque d'implication est deplorable. \n");
					printf ("\nLes deux cuistots vous ont bannis des cuisines, il semblerait que Tapadkeur decide de vous virer... \n");
					printf ("\nPerduuuuuuuuu. \n");
				}
				
				
			}
			
			//Vers ROXANE
			if (repPlayer== 2 && tamponRepPlayer == 2){
				tamponRepPlayer =2;
				printf ("\nVous faites de nouveau face a Tapadkeur le Directeur dans son rutilant bureau et lui expliquez la discorde qui règne dans les cuisines. \n");
				printf ("\nTapadkeur : Bon, tres bien, dans ce cas vous allez partir aider Roxane La Shamane dans les jardins....\n");
				printf ("\nTapadkeur : Et plus vite que ca ! TAAAAAAAAH !\n");
				printf ("\nVous arrivez dans les jardins et apercevez une drole de femme avec un fort accent senegalais qui semble en pleine reflexion devant un parterre de fleurs.\n");
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
					if(repPlayer== 1 && tamponRepPlayer == 2){
						tamponRepPlayer=4;
						printf ("\n Mais vous etes fou ? On ne touche pas une fleur blanche a taches vertes et a tige jaune, tout le monde le sais !\n");
						printf ("\n Vous êtes victime d'une infection à la main et passerez le reste des vacances à l'infirmerie, a subir les remedes schamaniques de Roxane...\n");
						printf ("\n Peut-être vaudrait-il mieux recommencer la partie...\n");
					}
					
					if(repPlayer== 2 && tamponRepPlayer == 2){
						tamponRepPlayer=2;
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
							if(repPlayer== 1 && tamponRepPlayer == 2){
								tamponRepPlayer=4;
								printf ("\n Roxane et Franciscain ne sont pas souvent d'accord, mais votre manque d'implication fait concensus. Une tres mauvaise facon de commencer votre stage...\n");
								printf ("\n Vous etes renvoye... peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
							}
							
							if(repPlayer== 2 && tamponRepPlayer == 2){
								tamponRepPlayer=4;
								printf ("\n Roxane : AHA ! vous voyez Franciscain, le gamin il est d'accord avec moi, dis donc ! et la verite sort de la bouche des ENFANTS. Viens petit, on va aller preparer notre RAGOUT pour le Directeur\n");
								printf ("\n Ce n'est pas vraiment votre faute. Vous ne saviez pas que ca serait pour Tapadkoeur. Ni que ca serait si mauvais.\n");
								printf ("\n Ni qu'il vous accuserait parce qu'il ne peut pas faire renvoyer Roxane...\n");
							}
							
							if(repPlayer== 3 && tamponRepPlayer == 2){
								tamponRepPlayer=4;
								printf ("\n Franciscain : Ah ! brave enfant ! en voila au moins un ici dont l'ame sera sauvee !\n");
								printf ("\n Votre ame est peut-etre sauvee mais, pour votre stage, c'est mal parti. Vous venez de vexer attrocement Roxane, vous etes vire. \n");
								printf("\n Tapadkoeur ne vous laissera pas de seconde chance...peut etre vaudrait-il mieux recommencer du debut et faire vos preuves.\n");
							}
					}
					
					if(repPlayer== 3 && tamponRepPlayer == 2){
						tamponRepPlayer=4;
						printf ("\n Mais vous etes fou ? On ne touche pas une fleur verte a taches jaunes et a tige blanche, tout le monde le sais !\n");
						printf ("\n Vous êtes immédiatement empoisonné et mourrez sur le coup. Voilà qui risque de faire desordre dans les papiers de l'ecole... heureusement, nous avons un necromancien.\n");
						printf ("\n Vous pourrez peut-être recommencer la partie...\n");
					}
						
			}
			
			if (repPlayer== 3 && tamponRepPlayer == 2){
				tamponRepPlayer =3;
				printf ("\n \n");
				
				
			}
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