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
												printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
												printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
												printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
												printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
												printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
												printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
												printf ("\n************************************************ \n");
												//la manticore
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==1){
													tamponRepPlayer=1;
													printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
													printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
													printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
													printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
													printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
														printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
														printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
														printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														
																tamponRepPlayer=2;
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
														printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
														printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
													printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
												}
												//la Creature
												if(repPlayer==3 && tamponRepPlayer==1){
													tamponRepPlayer=3;
													printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
													printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
													printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
														printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
														printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
														printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
													}
													//dans l'aile Ouest
													if(repPlayer==2 && tamponRepPlayer==3){
														tamponRepPlayer=2;
														printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
														printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
														printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
														printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
														printf ("\n************************************************ \n");
														printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
														printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
														printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
															printf ("\n Vous etes donc sauvagement decede. RIP.\n");
															printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
															printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=3;
															printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
															printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
															printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
															printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
															printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
															printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
															printf ("\n Oui mais le bocal est ferme...\n");
															printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
															printf ("\n \n");
															printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
															printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
															printf ("\n3) C'est foutu, vous partez en courant !\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==3){
																tamponRepPlayer=1;
																printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==1){
																	tamponRepPlayer=1;
																	printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																	printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																	printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																	printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																	printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																	printf ("\n Paulo : Evidement qu'il l'a !\n");
																	printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																	printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																	printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																	printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==1){
																		tamponRepPlayer=4;
																		printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																		printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==1){
																		tamponRepPlayer=2;
																		printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																		printf ("\n Rancuniere : paulo ! Attrappe !\n");
																		printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																		printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																		
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																		printf ("\n2) Vous tentez de recuperer le bocal. \n");
																		printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																			printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																			printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==2){
																			tamponRepPlayer=2;
																			printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																			printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																			printf ("\n************************************************ \n");
																			printf ("\n Vous lui jetez le bocal dessus.\n");
																			printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																			printf ("\n Vous changez d'avis et tournez les talons.\n");
																			printf ("\n************************************************ \n");
																			
																			
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																				printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																				printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																				printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																				printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																				printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																				printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																				printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																				printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																				printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																				printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																			printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																		}
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==1){
																		tamponRepPlayer=4;
																		printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																		printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																		printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																		printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																		printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																		printf ("\n VICTOIRE... ?\n");
																	}
																}
																
																if(repPlayer==2 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																	printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																	printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																	printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																	printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																	printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																	printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																	printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																	printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																	printf ("\n VICTOIRE... ?\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																	printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																}
															}
															
															if(repPlayer==2 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==3){
																tamponRepPlayer=3;
																printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																printf ("\n Paulo : Evidement qu'il l'a !\n");
																printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																printf ("\n************************************************ \n");
																	
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																	printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																}
																	
																if(repPlayer==2 && tamponRepPlayer==3){
																	tamponRepPlayer=2;
																	printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																	printf ("\n Rancuniere : paulo ! Attrappe !\n");
																	printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																	printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																		
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																	printf ("\n2) Vous tentez de recuperer le bocal. \n");
																	printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																	printf ("\n************************************************ \n");
																		
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																		printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																		printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																	}
																		
																	if(repPlayer==2 && tamponRepPlayer==2){
																		tamponRepPlayer=2;
																		printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																		printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n Vous lui jetez le bocal dessus.\n");
																		printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																		printf ("\n Vous changez d'avis et tournez les talons.\n");
																		printf ("\n************************************************ \n");
																			
																			
																		if(repPlayer==1 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																			printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																			printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																			printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																			printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																			printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																			printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																			printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																			printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																			printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																			printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																		}
																			
																		if(repPlayer==3 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																			printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																		}
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																		printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																	}
																}
																
																if(repPlayer==3 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																	printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																	printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																	printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																	printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																	printf ("\n VICTOIRE... ?\n");
																}
																
																
															}
															
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
														printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
														printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
													}
												}
											
												
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
									printf ("\n************************************************ \n");
									printf ("\n1) Aller aux toilettes du deuxieme etage pour verifier qu'elles sont propres. \n");
									printf ("\n2) Aller dans la foret, en dehors de l'ecole, pour enqueter sur un truc qu'aurait vu un eleve. \n");
									printf ("\n3) Aller dans l'aile Ouest, celle ou vivent les professeurs, pour chercher le chat du Directeur qui s'est encore enfui. \n");
									printf ("\n************************************************ \n");
									scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==2){
											tamponRepPlayer=1;
											printf ("\n Vous arrivez dans les toilettes du deuxieme etage. A premiere vue, aucun probleme, tout est propre, mais vous entendez soudain un drole de bruit provenant de la porte du fond...\n");
											printf ("\n Une sorte de hahanement un peu essoufle... \n");
											printf ("\n************************************************ \n");
											printf ("\n1) Quoi qu'il soit en train de se passer la dedans, ca ne vous concerne pas... Vous faites comme si vous n'aviez rien entendu. \n");
											printf ("\n2) Vous toquez doucement a la porte. \n");
											printf ("\n3) Vous enfoncez la porte d'un grand coup de pied. \n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											//BOUKETIN LE MAGICIEN !
											if(repPlayer==1 && tamponRepPlayer==1){
												tamponRepPlayer=1;
												printf ("\n Alors que vous faisiez demi-tour, la porte s'ouvre en grand sur Bouketin le Magicien, votre professeur de Defense contre les Forces du Mahl, et Magicien le Bouquetin, son animal de compagnie.\n");
												printf ("\n Bouketin : Nom d'un bouc Magi comment t'as pu l'faire tomber la dedans ? Il peut etre n'importe ou maintenant ! Oh tiens, salut toi ! Qu'est-ce que tu fiche la ?\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Plutot detaler que de repondre a cette question, vous n'avez aucune envie de savoir ce que ces deux la trafiquaient. \n");
												printf ("\n2) Vous lui retournez la question, il est assez legitime que vous lui demandiez... \n");
												printf ("\n3) Vous lui dites que vous avez ete envoye par Grendel verifier que les toilettes etaient propres. \n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												//FOSSOYEUR
												if(repPlayer==1 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Vous tournez les talons mais vous tombez nez a nez avec Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole...\n");
													printf ("\n Fossoyeur : Ah non non non, je suis désolé mais non. Je ne peux pas te laisser choisir l'option 1 dans un cas pareil, tu gache toute l'histoire !\n");
													printf ("\n On ne s'est pas embette a ecrire tout ca pour que tu passe a cote, ca ne serait pas tres sympa de ta part... Allez, recommence s'il te plais.\n");
												}
												//suite Bouketin
												if(repPlayer==2 && tamponRepPlayer==1){
													printf ("\n Bouketin : C'que j'fais là ? Bah ca s'voit pas ? Comment ca, non ca s'voit pas ? Rohlala. Bon, j't'explique. J'avais confie une manticore en bocal a Magi. Me d'mande pas pourquoi. Ni comment j'ai fait entrer une manticore dans un bocal.\n");
													printf ("\n Enfin bref, en tout cas Magicien l'a fait tomber dans les chiottes. Ouais ca la fout mal. Te vexe pas, Magi.\n");
													printf ("\n Bref, j'arrive pas a recuperer l'bocal. Les canalisations doivent d'ja l'avoir degage dans la riviere qui coule dans les bois, mais va falloir qu'j'aille prev'nir l'Directeur...\n");
													printf ("\n Alors, puisque t'es la, ca m'arrangerait qu't'aille me l'chercher. T'inquiete pas, l'bocal est bien ferme, aucun risque.\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous refermez la porte. \n");
													printf ("\n2) Vous acceptez et vous rendez immediatement dans les bois. \n");
													printf ("\n3) Vous allez immediatement le denoncer au directeur ! \n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Vous refermez la porte et faites demi-tour, quittant rapidement les toilettes pour, soudain, tomber sur Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole.\n");
														printf ("\n Fossoyeur : Quoi, encore ? Pardon, c'est peut-etre la premiere fois pour toi, mais moi je commence a en avoir assez de te corriger constament. Tu gache l'histoire la !\n");
														printf ("\n Allez desole mais tu dois recommencer...et fais un effort, cette fois ! je ne peux pas tout faire moi meme. C'est quand meme pas complique de taper 2. Ahlala...\n");
													}
													//foret
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
														printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
														printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
														printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
														printf ("\n************************************************ \n");
														printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
														printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
														printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
														printf ("\n************************************************ \n");
														//la manticore
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=1;
															printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
															printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
															printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
															printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
															printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==1){
																tamponRepPlayer=4;
																printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==1){
																
																tamponRepPlayer=2;
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
															
															if(repPlayer==3 && tamponRepPlayer==1){
																tamponRepPlayer=4;
																printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
															}
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
															printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
														}
														//la Creature
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=3;
															printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
															printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
															printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
															}
															//dans l'aile Ouest
															if(repPlayer==2 && tamponRepPlayer==3){
																tamponRepPlayer=2;
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
															
															if(repPlayer==3 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
															}
														}
													}
														
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Bouketin vous laisse faire. Puisque vous vous occupez de prevenir le Directeur, ca lui laissera le temps de regler la situation apres tout.\n");
														printf ("\n En recompense, Tapadkoeur vous epargne de finir votre stage. Vous n'avez peut-etre pas vu de manticore mais, au moins, vous avez gagne !\n");
														printf ("\n VICTOIRE ! (mais a vaincre sans peril...)\n");
													}
												
													
												}
												
												if(repPlayer==3 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Bouketin : Hein ? de quoi ? Ah ouais ! Les chiottes. Oui bein... euh... bein elles sont propres, comme tu vois.\n");
													printf ("\n Vous restez quelques secondes a regarder Bouketin, sans trop savoir quoi faire...\n");
													printf ("\n Bouketin : Bein ducoup... casse-toi, pegu. Qu'est-ce que t'attend ?\n");
													printf ("\n Vous obtemperez et retournez voir Grendel qui, satisfait de l'etat des toilettes, vous demande de ne pas poser trop de questions sur Bouketin et vous epargne le reste du stage.\n");
													printf ("\n Vous avez gagne... mais, je ne sais pas vous, mais j'ai l'impression que nous sommes passe a cote de quelque chose, tout de meme... On recommence ?\n");
													printf ("\n VICTOIRE !.... ?\n");
												}
											}
											
											if(repPlayer==2 && tamponRepPlayer==1){
												tamponRepPlayer=2;
												printf ("\n Vous toquez doucement a la porte et entendez la voix de votre professeur de Defense contre les Forces du Mahl, Bouketin le Magicien.\n");
												printf ("\n Bouketin : Entrez ! C'est pour quoi ?\n");
												printf ("\n Vous vous ecartez tandis que, du bout du pied, Bouketin vous ouvre la porte. Vous le trouvez accompagné de Magicien le Bouquetin, son familier, et le bras plongé jusqu'a l'epaule dans la cuvette des toilettes.\n");
												printf ("\n Bouketin : Nom d'un bouc Magi comment t'as pu l'faire tomber la dedans ? Il peut etre n'importe ou maintenant ! Qu'est-c'que j'peux faire pour toi, gamin ?\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous refermez la porte. \n");
												printf ("\n2) Vous lui demandez calmement ce qu'il peut bien être en train de faire. \n");
												printf ("\n3) Vous lui dites que vous avez ete envoye par Grendel verifier que les toilettes etaient propres. \n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n Vous refermez la porte et faites demi-tour, quittant les toilettes pour, soudain, tomber sur Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole.\n");
													printf ("\n Fossoyeur : Oh ! Bonjour. Je vois que tu as choisit autre chose... nous nous sommes croises quelques lignes plus haut dans l'algorythme, tu t'en souviens ?\n");
													printf ("\n Sans doute pas... enfin bref, je suis desole mais tu n'a pas tres judicieusement choisit. Allez desole mais tu dois recommencer...\n");
													
												}
												//suite Bouketin	
												if(repPlayer==2 && tamponRepPlayer==2){
													tamponRepPlayer=2;
													printf ("\n Bouketin : C'que j'fais là ? Bah ca s'voit pas ? Comment ca, non ca s'voit pas ? Rohlala. Bon, j't'explique. J'avais confie une manticore en bocal a Magi. Me d'mande pas pourquoi. Ni comment j'ai fait entrer une manticore dans un bocal.\n");
													printf ("\n Enfin bref, en tout cas Magicien l'a fait tomber dans les chiottes. Ouais ca la fout mal. Te vexe pas, Magi.\n");
													printf ("\n Bref, j'arrive pas a recuperer l'bocal. Les canalisations doivent d'ja l'avoir degage dans la riviere qui coule dans les bois, mais va falloir qu'j'aille prev'nir l'Directeur...\n");
													printf ("\n Alors, puisque t'es la, ca m'arrangerait qu't'aille me l'chercher. T'inquiete pas, l'bocal est bien ferme, aucun risque.\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous refermez la porte. \n");
													printf ("\n2) Vous acceptez et vous rendez immediatement dans les bois. \n");
													printf ("\n3) Vous allez immediatement le denoncer au directeur ! \n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Vous refermez la porte et faites demi-tour, quittant rapidement les toilettes pour, soudain, tomber sur Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole.\n");
														printf ("\n Fossoyeur : Quoi, encore ? Pardon, c'est peut-etre la premiere fois pour toi, mais moi je commence a en avoir assez de te corriger constament. Tu gache l'histoire la !\n");
														printf ("\n Allez desole mais tu dois recommencer...et fais un effort, cette fois ! je ne peux pas tout faire moi meme. C'est quand meme pas complique de taper 2. Ahlala...\n");
													}
													//foret
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
														printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
														printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
														printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
														printf ("\n************************************************ \n");
														printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
														printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
														printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
														printf ("\n************************************************ \n");
														//la manticore
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=1;
															printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
															printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
															printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
															printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
															printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==1){
																tamponRepPlayer=4;
																printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==1){
																tamponRepPlayer=2;
																printf ("\n \n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==1){
																tamponRepPlayer=4;
																printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
															}
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
															printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
														}
														//la Creature
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=3;
															printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
															printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
															printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
															}
															//dans l'aile Ouest
															if(repPlayer==2 && tamponRepPlayer==3){
																tamponRepPlayer=2;
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
															
															if(repPlayer==3 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
															}
														}
													}
														
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Bouketin vous laisse faire. Puisque vous vous occupez de prevenir le Directeur, ca lui laissera le temps de regler la situation apres tout.\n");
														printf ("\n En recompense, Tapadkoeur vous epargne de finir votre stage. Vous n'avez peut-etre pas vu de manticore mais, au moins, vous avez gagne !\n");
														printf ("\n VICTOIRE ! (mais a vaincre sans peril...)\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n Bouketin : Hein ? de quoi ? Ah ouais ! Les chiottes. Oui bein... euh... bein elles sont propres, comme tu vois.\n");
													printf ("\n Vous restez quelques secondes a regarder Bouketin, sans trop savoir quoi faire...\n");
													printf ("\n Bouketin : Bein ducoup... casse-toi, pegu. Qu'est-ce que t'attend ?\n");
													printf ("\n Vous obtemperez et retournez voir Grendel qui, satisfait de l'etat des toilettes, vous demande de ne pas poser trop de questions sur Bouketin et vous epargne le reste du stage.\n");
													printf ("\n Vous avez gagné... mais, je ne sais pas vous, mais j'ai l'impression que nous sommes passe a cote de quelque chose, tout de meme... On recommence ?\n");
													printf ("\n VICTOIRE !.... ?\n");
												}
											}
											
											if(repPlayer==3 && tamponRepPlayer==1){
												tamponRepPlayer=4;
												printf ("\n Alors que vous alliez frapper la porte, le pied de Bouketin le Magicien, votre professeur de Defense contre les Forces du Mahl fait de meme de l'autre cote, vous envoyant le battant en plein menton.\n");
												printf ("\n Vous etes immediatement assome mais, bonne nouvelle, lorsque vous vous reveillerez, Tapadkoeur vous dedomagera en vous epargnant le stage. \n");
												printf ("\n Du moment que vous ne demandez pas ce que Bouketin faisait dans les toilettes, vous avez gagné\n");
												printf ("\n VICTOIRE !\n");
											}
											
										}
										
										if(repPlayer==2 && tamponRepPlayer==2){
											tamponRepPlayer=2;
												printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
												printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
												printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
												printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
												printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
												printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
												printf ("\n************************************************ \n");
												//la manticore
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==2){
													tamponRepPlayer=1;
													printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
													printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
													printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
													printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
													printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
														printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
														printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
														printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														tamponRepPlayer=2;
														printf ("\n \n");
													}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
														printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
														printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
													printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
												}
												//la Creature
												if(repPlayer==3 && tamponRepPlayer==2){
													tamponRepPlayer=3;
													printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
													printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
													printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
														printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
														printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
														printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
													}
													//dans l'aile Ouest
													if(repPlayer==2 && tamponRepPlayer==3){
														tamponRepPlayer=2;
														printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
														printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
														printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
														printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
														printf ("\n************************************************ \n");
														printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
														printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
														printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
															printf ("\n Vous etes donc sauvagement decede. RIP.\n");
															printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
															printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=3;
															printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
															printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
															printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
															printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
															printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
															printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
															printf ("\n Oui mais le bocal est ferme...\n");
															printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
															printf ("\n \n");
															printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
															printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
															printf ("\n3) C'est foutu, vous partez en courant !\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==3){
																tamponRepPlayer=1;
																printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==1){
																	tamponRepPlayer=1;
																	printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																	printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																	printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																	printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																	printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																	printf ("\n Paulo : Evidement qu'il l'a !\n");
																	printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																	printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																	printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																	printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==1){
																		tamponRepPlayer=4;
																		printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																		printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==1){
																		tamponRepPlayer=2;
																		printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																		printf ("\n Rancuniere : paulo ! Attrappe !\n");
																		printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																		printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																		
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																		printf ("\n2) Vous tentez de recuperer le bocal. \n");
																		printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																			printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																			printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==2){
																			tamponRepPlayer=2;
																			printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																			printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																			printf ("\n************************************************ \n");
																			printf ("\n Vous lui jetez le bocal dessus.\n");
																			printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																			printf ("\n Vous changez d'avis et tournez les talons.\n");
																			printf ("\n************************************************ \n");
																			
																			
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																				printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																				printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																				printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																				printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																				printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																				printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																				printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																				printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																				printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																				printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																			printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																		}
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==1){
																		tamponRepPlayer=4;
																		printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																		printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																		printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																		printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																		printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																		printf ("\n VICTOIRE... ?\n");
																	}
																}
																
																if(repPlayer==2 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																	printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																	printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																	printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																	printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																	printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																	printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																	printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																	printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																	printf ("\n VICTOIRE... ?\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																	printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																}
															}
															
															if(repPlayer==2 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==3){
																tamponRepPlayer=3;
																printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																printf ("\n Paulo : Evidement qu'il l'a !\n");
																printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																printf ("\n************************************************ \n");
																	
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																	printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																}
																	
																if(repPlayer==2 && tamponRepPlayer==3){
																	tamponRepPlayer=2;
																	printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																	printf ("\n Rancuniere : paulo ! Attrappe !\n");
																	printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																	printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																		
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																	printf ("\n2) Vous tentez de recuperer le bocal. \n");
																	printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																	printf ("\n************************************************ \n");
																		
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																		printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																		printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																	}
																		
																	if(repPlayer==2 && tamponRepPlayer==2){
																		tamponRepPlayer=2;
																		printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																		printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n Vous lui jetez le bocal dessus.\n");
																		printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																		printf ("\n Vous changez d'avis et tournez les talons.\n");
																		printf ("\n************************************************ \n");
																			
																			
																		if(repPlayer==1 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																			printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																			printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																			printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																			printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																			printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																			printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																			printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																			printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																			printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																			printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																		}
																			
																		if(repPlayer==3 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																			printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																		}
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																		printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																	}
																}
																
																if(repPlayer==3 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																	printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																	printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																	printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																	printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																	printf ("\n VICTOIRE... ?\n");
																}
																
																
															}
															
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
														printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
														printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
													}
												}
											
										}
										
										if(repPlayer==3 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n Vous vous rendez dans l'aile Ouest a la recherche d'Olaf le Cat, le chat du Directeur...\n");
											printf ("\n Mais en lieu et place d'un chat a la masse ponderale abusive, c'est une manticore que vous trouvez errant dans les couloirs.\n");
											printf ("\n Il faut savoir que la manticore fait partie de la categorie des superpredateurs. Il s'agit la d'une creature nee pour tuer et devorer tout ce qui bouge. Elle n'a, naturellement, rien a faire dans cet endroit.\n");
											printf ("\n Alors je pense que nous devrions vite recommencer la partie pour comprendre ce que cet animal fiche la, avant de nous faire devorer, vous en dites quoi ? hein ? oui hein.\n");
										}
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
				if (repPlayer == 2 && tamponRepPlayer == 1){
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
								printf("\n Vous arrivez dans les cuisines. Ou vous tombez nez a nez avec Poulet le Gourmet.\n");
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
									printf ("\nPoulet: NOOOOOOON !! Ne mange pas ca gamin, sinon tu vas mourir du du diabesterol ! C'est pire que du kouignaman ! Mange plutot ca.\n");
									printf ("\nC'est sur cet avertissement que Poulet vous tend une patate douce cuite a la vapeur.\n");
									
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
												printf ("\nPoulet : Meaah! ce gamin n'a aucun gout. Plutot que d'alimenter ton diabesterol va donc me chercher des champignons dans la foret. Et discute pas, tu retournera a ton stage apres ! Au moins tu te rendras utile... \n");
												
												printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
												printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
												printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
												printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
												printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
												printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
												printf ("\n************************************************ \n");
												//la manticore
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==2){
													tamponRepPlayer=1;
													printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
													printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
													printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
													printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
													printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
														printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
														printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
														printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														tamponRepPlayer=2;
														
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
														printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
														printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
													printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
												}
												//la Creature
												if(repPlayer==3 && tamponRepPlayer==2){
													tamponRepPlayer=3;
													printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
													printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
													printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
														printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
														printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
														printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
													}
													//dans l'aile Ouest
													if(repPlayer==2 && tamponRepPlayer==3){
														tamponRepPlayer=2;
														printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
														printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
														printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
														printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
														printf ("\n************************************************ \n");
														printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
														printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
														printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
															printf ("\n Vous etes donc sauvagement decede. RIP.\n");
															printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
															printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=3;
															printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
															printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
															printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
															printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
															printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
															printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
															printf ("\n Oui mais le bocal est ferme...\n");
															printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
															printf ("\n \n");
															printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
															printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
															printf ("\n3) C'est foutu, vous partez en courant !\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==3){
																tamponRepPlayer=1;
																printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==1){
																	tamponRepPlayer=1;
																	printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																	printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																	printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																	printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																	printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																	printf ("\n Paulo : Evidement qu'il l'a !\n");
																	printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																	printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																	printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																	printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==1){
																		tamponRepPlayer=4;
																		printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																		printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==1){
																		tamponRepPlayer=2;
																		printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																		printf ("\n Rancuniere : paulo ! Attrappe !\n");
																		printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																		printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																		
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																		printf ("\n2) Vous tentez de recuperer le bocal. \n");
																		printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																			printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																			printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==2){
																			tamponRepPlayer=2;
																			printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																			printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																			printf ("\n************************************************ \n");
																			printf ("\n Vous lui jetez le bocal dessus.\n");
																			printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																			printf ("\n Vous changez d'avis et tournez les talons.\n");
																			printf ("\n************************************************ \n");
																			
																			
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																				printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																				printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																				printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																				printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																				printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																				printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																				printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																				printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																				printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																				printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																			printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																		}
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==1){
																		tamponRepPlayer=4;
																		printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																		printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																		printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																		printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																		printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																		printf ("\n VICTOIRE... ?\n");
																	}
																}
																
																if(repPlayer==2 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																	printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																	printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																	printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																	printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																	printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																	printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																	printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																	printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																	printf ("\n VICTOIRE... ?\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																	printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																}
															}
															
															if(repPlayer==2 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==3){
																tamponRepPlayer=3;
																printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																printf ("\n Paulo : Evidement qu'il l'a !\n");
																printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																printf ("\n************************************************ \n");
																	
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																	printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																}
																	
																if(repPlayer==2 && tamponRepPlayer==3){
																	tamponRepPlayer=2;
																	printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																	printf ("\n Rancuniere : paulo ! Attrappe !\n");
																	printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																	printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																		
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																	printf ("\n2) Vous tentez de recuperer le bocal. \n");
																	printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																	printf ("\n************************************************ \n");
																		
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																		printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																		printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																	}
																		
																	if(repPlayer==2 && tamponRepPlayer==2){
																		tamponRepPlayer=2;
																		printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																		printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n Vous lui jetez le bocal dessus.\n");
																		printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																		printf ("\n Vous changez d'avis et tournez les talons.\n");
																		printf ("\n************************************************ \n");
																			
																			
																		if(repPlayer==1 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																			printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																			printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																			printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																			printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																			printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																			printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																			printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																			printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																			printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																			printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																		}
																			
																		if(repPlayer==3 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																			printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																		}
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																		printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																	}
																}
																
																if(repPlayer==3 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																	printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																	printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																	printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																	printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																	printf ("\n VICTOIRE... ?\n");
																}
																
																
															}
															
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
														printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
														printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
													}
												}
											
										
												
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
									tamponRepPlayer =4;
									printf ("\n Macareux : Teh mais bien sur que non que je la veux pas, votre mort, Poulet ! Meme si bon, si vous continuez a critiquer sans avoir goutte, ca risque de changer un peu heing.\n");
									printf ("\n Poulet : C'est une menace, Macareux ? C'est une menace ?!\n");
									printf ("\n Macareux : Mais non, cong ! C'est une facon d'parler, roooh. J'vous aime bein, vous l'savez, Poulet !\n");
									printf ("\n Poulet : Pourtant vous voulez me faire manger vos infames frites !!\n");
									printf ("\n Macareux : He ! Ho ! J'vous force a rien ! Teh si ca vous fait plaisir, moi j'les goutte, vos merdouilles...\n");
									printf ("\n MES QUOI ?!\n");
									
									printf ("\nCette dispute durera longtemps. Tres longtemps. trop longtemps.\n");
									printf ("\n Tellement longtemps que vous avez fini par en oublier ce que vous fichiez la. \n");
									printf ("\n Tapadkoeur, en revanche, n'a pas oublie... vous etes renvoye.\n");
									printf ("\n Vous avez perdu... recommencez, peut-etre... enfin c'est comme vous voulez.\n");
									

									
								}
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
											if (repPlayer== 1 && tamponRepPlayer == 1){
												tamponRepPlayer =1;
												printf ("\nMacareux se tourne subitement vers vous avec un regard degageant toute la gentillesse du monde et vous interpelle.\n");
												printf ("\nMacareux : Et benh gamin pourquoi donc que tu tousses comme ca la ? Tiens vas-y goute donc a mes frites sucrees au miel c'bon pour la gorge. Ca va te requinquer peuchere !\n");
												printf ("\nMacareux vous pose un enorme bol de fites sucrees dans les mains et vous regarde avec impatience, un sourire presque aussi large que sa bedaine se dessinant sur son visage.\n");
												printf ("\nPoulet: NOOOOOOON !! Ne mange pas ca gamin, sinon tu vas mourir du du diabesterol ! C'est pire que du kouignaman ! Mange plutot ca.\n");
												printf ("\nC'est sur cet avertissement que Poulet vous tend une patate douce cuite a la vapeur.\n");
												
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
															
															printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
															printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
															printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
															printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
															printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
															printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
															printf ("\n************************************************ \n");
															//la manticore
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==2){
																tamponRepPlayer=1;
																printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
																printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
																printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
																printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
																printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																	printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																	printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																	printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==1){
																	tamponRepPlayer=2;
																	
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
																
																if(repPlayer==3 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																	printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																	printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
																}
															}
															
															if(repPlayer==2 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
																printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
															}
															//la Creature
															if(repPlayer==3 && tamponRepPlayer==2){
																tamponRepPlayer=3;
																printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
																printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
																printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																	printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																	printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																	printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
																}
																//dans l'aile Ouest
																if(repPlayer==2 && tamponRepPlayer==3){
																	tamponRepPlayer=2;
																	printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																	printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																	printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																	printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																	printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																	printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																		printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																		printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																		printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==2){
																		tamponRepPlayer=3;
																		printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																		printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																		printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																		printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																		printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																		printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																		printf ("\n Oui mais le bocal est ferme...\n");
																		printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																		printf ("\n \n");
																		printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																		printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																		printf ("\n3) C'est foutu, vous partez en courant !\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=1;
																			printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																			printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																			printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																			printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																			printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=1;
																				printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																				printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																				printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																				printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																				printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																				printf ("\n Paulo : Evidement qu'il l'a !\n");
																				printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																				printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																				printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																				printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==1){
																					tamponRepPlayer=4;
																					printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																					printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==1){
																					tamponRepPlayer=2;
																					printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																					printf ("\n Rancuniere : paulo ! Attrappe !\n");
																					printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																					printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																					
																					printf ("\n************************************************ \n");
																					printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																					printf ("\n2) Vous tentez de recuperer le bocal. \n");
																					printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																					printf ("\n************************************************ \n");
																					
																					scanf("%d", &repPlayer);
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																						printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																						printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=2;
																						printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																						printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																						printf ("\n************************************************ \n");
																						printf ("\n Vous lui jetez le bocal dessus.\n");
																						printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																						printf ("\n Vous changez d'avis et tournez les talons.\n");
																						printf ("\n************************************************ \n");
																						
																						
																						if(repPlayer==1 && tamponRepPlayer==2){
																							tamponRepPlayer=4;
																							printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																							printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																							printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																							printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																							printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																						}
																						
																						if(repPlayer==2 && tamponRepPlayer==2){
																							tamponRepPlayer=4;
																							printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																							printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																							printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																							printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																							printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																							printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																							printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																						}
																						
																						if(repPlayer==3 && tamponRepPlayer==2){
																							tamponRepPlayer=4;
																							printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																							printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																						}
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==1){
																					tamponRepPlayer=4;
																					printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																					printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																					printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																					printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																					printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																					printf ("\n VICTOIRE... ?\n");
																				}
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																				printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																				printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																				printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																				printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																				printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																				printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																			printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=3;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==3){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==3){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																					
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																					
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																						
																						
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																						
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																						
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==3){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																			
																			
																		}
																		
																	}
																}
																
																if(repPlayer==3 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																	printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																	printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
																}
															}
														
													
															
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
											if (repPlayer== 2 && tamponRepPlayer == 1){
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
											
											if (repPlayer== 3 && tamponRepPlayer == 1){
												tamponRepPlayer =4;
												printf ("\n Macareux : Teh mais bien sur que non que je la veux pas, votre mort, Poulet ! Meme si bon, si vous continuez a critiquer sans avoir goutte, ca risque de changer un peu heing.\n");
												printf ("\n Poulet : C'est une menace, Macareux ? C'est une menace ?!\n");
												printf ("\n Macareux : Mais non, cong ! C'est une facon d'parler, roooh. J'vous aime bein, vous l'savez, Poulet !\n");
												printf ("\n Poulet : Pourtant vous voulez me faire manger vos infames frites !!\n");
												printf ("\n Macareux : He ! Ho ! J'vous force a rien ! Teh si ca vous fait plaisir, moi j'les goutte, vos merdouilles...\n");
												printf ("\n MES QUOI ?!\n");
												
												printf ("\nCette dispute durera longtemps. Tres longtemps. trop longtemps.\n");
												printf ("\n Tellement longtemps que vous avez fini par en oublier ce que vous fichiez la. \n");
												printf ("\n Tapadkoeur, en revanche, n'a pas oublie... vous etes renvoye.\n");
												printf ("\n Vous avez perdu... recommencez, peut-etre... enfin c'est comme vous voulez.\n");
												

												
											}
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
									
									printf ("\n Grendel : Rale pas, on va se marrer, t'en fais pas\n");
									printf ("\n enfin bref, tu tombe bien, ya plein de trucs a faire et j'ai pas envie d'etre partout a la fois. Alors ducoup si tu pouvais faire l'un de ces trucs...\n");
									printf ("\n************************************************ \n");
									printf ("\n1) Aller aux toilettes du deuxieme etage pour verifier qu'elles sont propres. \n");
									printf ("\n2) Aller dans la foret, en dehors de l'ecole, pour enqueter sur un truc qu'aurait vu un eleve. \n");
									printf ("\n3) Aller dans l'aile Ouest, celle ou vivent les professeurs, pour chercher le chat du Directeur qui s'est encore enfui. \n");
									printf ("\n************************************************ \n");
									scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==2){
											tamponRepPlayer=1;
											printf ("\n Vous arrivez dans les toilettes du deuxieme etage. A premiere vue, aucun probleme, tout est propre, mais vous entendez soudain un drole de bruit provenant de la porte du fond...\n");
											printf ("\n Une sorte de hahanement un peu essoufle... \n");
											printf ("\n************************************************ \n");
											printf ("\n1) Quoi qu'il soit en train de se passer la dedans, ca ne vous concerne pas... Vous faites comme si vous n'aviez rien entendu. \n");
											printf ("\n2) Vous toquez doucement a la porte. \n");
											printf ("\n3) Vous enfoncez la porte d'un grand coup de pied. \n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											//BOUKETIN LE MAGICIEN !
											if(repPlayer==1 && tamponRepPlayer==1){
												tamponRepPlayer=1;
												printf ("\n Alors que vous faisiez demi-tour, la porte s'ouvre en grand sur Bouketin le Magicien, votre professeur de Defense contre les Forces du Mahl, et Magicien le Bouquetin, son animal de compagnie.\n");
												printf ("\n Bouketin : Nom d'un bouc Magi comment t'as pu l'faire tomber la dedans ? Il peut etre n'importe ou maintenant ! Oh tiens, salut toi ! Qu'est-ce que tu fiche la ?\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Plutot detaler que de repondre a cette question, vous n'avez aucune envie de savoir ce que ces deux la trafiquaient. \n");
												printf ("\n2) Vous lui retournez la question, il est assez legitime que vous lui demandiez... \n");
												printf ("\n3) Vous lui dites que vous avez ete envoye par Grendel verifier que les toilettes etaient propres. \n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												//FOSSOYEUR
												if(repPlayer==1 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Vous tournez les talons mais vous tombez nez a nez avec Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole...\n");
													printf ("\n Fossoyeur : Ah non non non, je suis désolé mais non. Je ne peux pas te laisser choisir l'option 1 dans un cas pareil, tu gache toute l'histoire !\n");
													printf ("\n On ne s'est pas embette a ecrire tout ca pour que tu passe a cote, ca ne serait pas tres sympa de ta part... Allez, recommence s'il te plais.\n");
												}
												//suite Bouketin
												if(repPlayer==2 && tamponRepPlayer==1){
													tamponRepPlayer=2;
													if(repPlayer==2 && tamponRepPlayer==2){
													tamponRepPlayer=2;
													printf ("\n Bouketin : C'que j'fais là ? Bah ca s'voit pas ? Comment ca, non ca s'voit pas ? Rohlala. Bon, j't'explique. J'avais confie une manticore en bocal a Magi. Me d'mande pas pourquoi. Ni comment j'ai fait entrer une manticore dans un bocal.\n");
													printf ("\n Enfin bref, en tout cas Magicien l'a fait tomber dans les chiottes. Ouais ca la fout mal. Te vexe pas, Magi.\n");
													printf ("\n Bref, j'arrive pas a recuperer l'bocal. Les canalisations doivent d'ja l'avoir degage dans la riviere qui coule dans les bois, mais va falloir qu'j'aille prev'nir l'Directeur...\n");
													printf ("\n Alors, puisque t'es la, ca m'arrangerait qu't'aille me l'chercher. T'inquiete pas, l'bocal est bien ferme, aucun risque.\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous refermez la porte. \n");
													printf ("\n2) Vous acceptez et vous rendez immediatement dans les bois. \n");
													printf ("\n3) Vous allez immediatement le denoncer au directeur ! \n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Vous refermez la porte et faites demi-tour, quittant rapidement les toilettes pour, soudain, tomber sur Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole.\n");
														printf ("\n Fossoyeur : Quoi, encore ? Pardon, c'est peut-etre la premiere fois pour toi, mais moi je commence a en avoir assez de te corriger constament. Tu gache l'histoire la !\n");
														printf ("\n Allez desole mais tu dois recommencer...et fais un effort, cette fois ! je ne peux pas tout faire moi meme. C'est quand meme pas complique de taper 2. Ahlala...\n");
													}
													//foret
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
														printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
														printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
														printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
														printf ("\n************************************************ \n");
														printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
														printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
														printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
														printf ("\n************************************************ \n");
														//la manticore
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=1;
															printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
															printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
															printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
															printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
															printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==1){
																tamponRepPlayer=4;
																printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==1){
																tamponRepPlayer=2;
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
															
															if(repPlayer==3 && tamponRepPlayer==1){
																tamponRepPlayer=4;
																printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
															}
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
															printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
														}
														//la Creature
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=3;
															printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
															printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
															printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
															}
															//dans l'aile Ouest
															if(repPlayer==2 && tamponRepPlayer==3){
																tamponRepPlayer=2;
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
															
															if(repPlayer==3 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
															}
														}
													}
														
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Bouketin vous laisse faire. Puisque vous vous occupez de prevenir le Directeur, ca lui laissera le temps de regler la situation apres tout.\n");
														printf ("\n En recompense, Tapadkoeur vous epargne de finir votre stage. Vous n'avez peut-etre pas vu de manticore mais, au moins, vous avez gagne !\n");
														printf ("\n VICTOIRE ! (mais a vaincre sans peril...)\n");
													}
												
													
												}
												
												if(repPlayer==3 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Bouketin : Hein ? de quoi ? Ah ouais ! Les chiottes. Oui bein... euh... bein elles sont propres, comme tu vois.\n");
													printf ("\n Vous restez quelques secondes a regarder Bouketin, sans trop savoir quoi faire...\n");
													printf ("\n Bouketin : Bein ducoup... casse-toi, pegu. Qu'est-ce que t'attend ?\n");
													printf ("\n Vous obtemperez et retournez voir Grendel qui, satisfait de l'etat des toilettes, vous demande de ne pas poser trop de questions sur Bouketin et vous epargne le reste du stage.\n");
													printf ("\n Vous avez gagne... mais, je ne sais pas vous, mais j'ai l'impression que nous sommes passe a cote de quelque chose, tout de meme... On recommence ?\n");
													printf ("\n VICTOIRE !.... ?\n");
												}
											}
											
											if(repPlayer==2 && tamponRepPlayer==1){
												tamponRepPlayer=2;
												printf ("\n Vous toquez doucement a la porte et entendez la voix de votre professeur de Defense contre les Forces du Mahl, Bouketin le Magicien.\n");
												printf ("\n Bouketin : Entrez ! C'est pour quoi ?\n");
												printf ("\n Vous vous ecartez tandis que, du bout du pied, Bouketin vous ouvre la porte. Vous le trouvez accompagné de Magicien le Bouquetin, son familier, et le bras plongé jusqu'a l'epaule dans la cuvette des toilettes.\n");
												printf ("\n Bouketin : Nom d'un bouc Magi comment t'as pu l'faire tomber la dedans ? Il peut etre n'importe ou maintenant ! Qu'est-c'que j'peux faire pour toi, gamin ?\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous refermez la porte. \n");
												printf ("\n2) Vous lui demandez calmement ce qu'il peut bien être en train de faire. \n");
												printf ("\n3) Vous lui dites que vous avez ete envoye par Grendel verifier que les toilettes etaient propres. \n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n Vous refermez la porte et faites demi-tour, quittant les toilettes pour, soudain, tomber sur Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole.\n");
													printf ("\n Fossoyeur : Oh ! Bonjour. Je vois que tu as choisit autre chose... nous nous sommes croises quelques lignes plus haut dans l'algorythme, tu t'en souviens ?\n");
													printf ("\n Sans doute pas... enfin bref, je suis desole mais tu n'a pas tres judicieusement choisit. Allez desole mais tu dois recommencer...\n");
													
												}
												//suite Bouketin	
												if(repPlayer==2 && tamponRepPlayer==2){
													tamponRepPlayer=2;
													printf ("\n Bouketin : C'que j'fais là ? Bah ca s'voit pas ? Comment ca, non ca s'voit pas ? Rohlala. Bon, j't'explique. J'avais confie une manticore en bocal a Magi. Me d'mande pas pourquoi. Ni comment j'ai fait entrer une manticore dans un bocal.\n");
													printf ("\n Enfin bref, en tout cas Magicien l'a fait tomber dans les chiottes. Ouais ca la fout mal. Te vexe pas, Magi.\n");
													printf ("\n Bref, j'arrive pas a recuperer l'bocal. Les canalisations doivent d'ja l'avoir degage dans la riviere qui coule dans les bois, mais va falloir qu'j'aille prev'nir l'Directeur...\n");
													printf ("\n Alors, puisque t'es la, ca m'arrangerait qu't'aille me l'chercher. T'inquiete pas, l'bocal est bien ferme, aucun risque.\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous refermez la porte. \n");
													printf ("\n2) Vous acceptez et vous rendez immediatement dans les bois. \n");
													printf ("\n3) Vous allez immediatement le denoncer au directeur ! \n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Vous refermez la porte et faites demi-tour, quittant rapidement les toilettes pour, soudain, tomber sur Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole.\n");
														printf ("\n Fossoyeur : Quoi, encore ? Pardon, c'est peut-etre la premiere fois pour toi, mais moi je commence a en avoir assez de te corriger constament. Tu gache l'histoire la !\n");
														printf ("\n Allez desole mais tu dois recommencer...et fais un effort, cette fois ! je ne peux pas tout faire moi meme. C'est quand meme pas complique de taper 2. Ahlala...\n");
													}
													//foret
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
														printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
														printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
														printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
														printf ("\n************************************************ \n");
														printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
														printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
														printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
														printf ("\n************************************************ \n");
														//la manticore
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=1;
															printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
															printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
															printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
															printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
															printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==1){
																tamponRepPlayer=4;
																printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==1){
																tamponRepPlayer=2;
																printf ("\n \n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==1){
																tamponRepPlayer=4;
																printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
															}
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
															printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
														}
														//la Creature
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=3;
															printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
															printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
															printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
																printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
																printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
																printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
															}
															//dans l'aile Ouest
															if(repPlayer==2 && tamponRepPlayer==3){
																tamponRepPlayer=2;
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
															
															if(repPlayer==3 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
																printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
																printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
															}
														}
													}
														
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Bouketin vous laisse faire. Puisque vous vous occupez de prevenir le Directeur, ca lui laissera le temps de regler la situation apres tout.\n");
														printf ("\n En recompense, Tapadkoeur vous epargne de finir votre stage. Vous n'avez peut-etre pas vu de manticore mais, au moins, vous avez gagne !\n");
														printf ("\n VICTOIRE ! (mais a vaincre sans peril...)\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n Bouketin : Hein ? de quoi ? Ah ouais ! Les chiottes. Oui bein... euh... bein elles sont propres, comme tu vois.\n");
													printf ("\n Vous restez quelques secondes a regarder Bouketin, sans trop savoir quoi faire...\n");
													printf ("\n Bouketin : Bein ducoup... casse-toi, pegu. Qu'est-ce que t'attend ?\n");
													printf ("\n Vous obtemperez et retournez voir Grendel qui, satisfait de l'etat des toilettes, vous demande de ne pas poser trop de questions sur Bouketin et vous epargne le reste du stage.\n");
													printf ("\n Vous avez gagné... mais, je ne sais pas vous, mais j'ai l'impression que nous sommes passe a cote de quelque chose, tout de meme... On recommence ?\n");
													printf ("\n VICTOIRE !.... ?\n");
												}
											}
											
											if(repPlayer==3 && tamponRepPlayer==1){
												tamponRepPlayer=4;
												printf ("\n Alors que vous alliez frapper la porte, le pied de Bouketin le Magicien, votre professeur de Defense contre les Forces du Mahl fait de meme de l'autre cote, vous envoyant le battant en plein menton.\n");
												printf ("\n Vous etes immediatement assome mais, bonne nouvelle, lorsque vous vous reveillerez, Tapadkoeur vous dedomagera en vous epargnant le stage. \n");
												printf ("\n Du moment que vous ne demandez pas ce que Bouketin faisait dans les toilettes, vous avez gagné\n");
												printf ("\n VICTOIRE !\n");
											}
											
											}
										}
										
										if(repPlayer==2 && tamponRepPlayer==2){
											tamponRepPlayer=2;
												printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
												printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
												printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
												printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
												printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
												printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
												printf ("\n************************************************ \n");
												//la manticore
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==2){
													tamponRepPlayer=1;
													printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
													printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
													printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
													printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
													printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
														printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
														printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
														printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														tamponRepPlayer=2;
														
																printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
																printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
																printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
																printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
																printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
																	printf ("\n Vous etes donc sauvagement decede. RIP.\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
																	printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=3;
																	printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
																	printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
																	printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
																	printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
																	printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
																	printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
																	printf ("\n Oui mais le bocal est ferme...\n");
																	printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
																	printf ("\n \n");
																	printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
																	printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
																	printf ("\n3) C'est foutu, vous partez en courant !\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==3){
																		tamponRepPlayer=1;
																		printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																		printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																		printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																		printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																		printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==1){
																			tamponRepPlayer=1;
																			printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																			printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																			printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																			printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																			printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																			printf ("\n Paulo : Evidement qu'il l'a !\n");
																			printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																			printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																			printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																			printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																			printf ("\n************************************************ \n");
																			
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																				printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==1){
																				tamponRepPlayer=2;
																				printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																				printf ("\n Rancuniere : paulo ! Attrappe !\n");
																				printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																				printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																				printf ("\n************************************************ \n");
																				printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																				printf ("\n2) Vous tentez de recuperer le bocal. \n");
																				printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																				printf ("\n************************************************ \n");
																				
																				scanf("%d", &repPlayer);
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																					printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																					printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																				}
																				
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=2;
																					printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																					printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																					printf ("\n************************************************ \n");
																					printf ("\n Vous lui jetez le bocal dessus.\n");
																					printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																					printf ("\n Vous changez d'avis et tournez les talons.\n");
																					printf ("\n************************************************ \n");
																					
																					
																					if(repPlayer==1 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																						printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																						printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																						printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																						printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																					}
																					
																					if(repPlayer==2 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																						printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																						printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																						printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																						printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																						printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																						printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																					}
																					
																					if(repPlayer==3 && tamponRepPlayer==2){
																						tamponRepPlayer=4;
																						printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																						printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																					}
																				}
																				
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==1){
																				tamponRepPlayer=4;
																				printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																				printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																				printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																				printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																				printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																				printf ("\n VICTOIRE... ?\n");
																			}
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																			printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																			printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																			printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																			printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																			printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==1){
																			tamponRepPlayer=4;
																			printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																			printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																		}
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==3){
																		tamponRepPlayer=4;
																		printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																		printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==3){
																		tamponRepPlayer=3;
																		printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																		printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																		printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																		printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																		printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																		printf ("\n Paulo : Evidement qu'il l'a !\n");
																		printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																		printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																		printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																		printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																		printf ("\n************************************************ \n");
																			
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																			printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==3){
																			tamponRepPlayer=2;
																			printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																			printf ("\n Rancuniere : paulo ! Attrappe !\n");
																			printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																			printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																				
																			printf ("\n************************************************ \n");
																			printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																			printf ("\n2) Vous tentez de recuperer le bocal. \n");
																			printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																			printf ("\n************************************************ \n");
																				
																			scanf("%d", &repPlayer);
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																				printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																				printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																			}
																				
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=2;
																				printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																				printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																				printf ("\n************************************************ \n");
																				printf ("\n Vous lui jetez le bocal dessus.\n");
																				printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																				printf ("\n Vous changez d'avis et tournez les talons.\n");
																				printf ("\n************************************************ \n");
																					
																					
																				if(repPlayer==1 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																					printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																					printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																					printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																					printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																				}
																					
																				if(repPlayer==2 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																					printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																					printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																					printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																					printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																					printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																					printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																				}
																					
																				if(repPlayer==3 && tamponRepPlayer==2){
																					tamponRepPlayer=4;
																					printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																					printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																				}
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==3){
																			tamponRepPlayer=4;
																			printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																			printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																			printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																			printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																			printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																			printf ("\n VICTOIRE... ?\n");
																		}
																		
																		
																	}
																	
																}
															}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
														printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
														printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
													printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
												}
												//la Creature
												if(repPlayer==3 && tamponRepPlayer==2){
													tamponRepPlayer=3;
													printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
													printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
													printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
														printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
														printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
														printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
													}
													//dans l'aile Ouest
													if(repPlayer==2 && tamponRepPlayer==3){
														tamponRepPlayer=2;
														printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
														printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
														printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
														printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
														printf ("\n************************************************ \n");
														printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
														printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
														printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
															printf ("\n Vous etes donc sauvagement decede. RIP.\n");
															printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
															printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=3;
															printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
															printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
															printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
															printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
															printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
															printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
															printf ("\n Oui mais le bocal est ferme...\n");
															printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
															printf ("\n \n");
															printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
															printf ("\n************************************************ \n");
															printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
															printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
															printf ("\n3) C'est foutu, vous partez en courant !\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==3){
																tamponRepPlayer=1;
																printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
																printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
																printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
																printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
																printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
																printf ("\n************************************************ \n");
																
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==1){
																	tamponRepPlayer=1;
																	printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																	printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																	printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																	printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																	printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																	printf ("\n Paulo : Evidement qu'il l'a !\n");
																	printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																	printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																	printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																	printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																	printf ("\n************************************************ \n");
																	
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==1){
																		tamponRepPlayer=4;
																		printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																		printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																	}
																	
																	if(repPlayer==2 && tamponRepPlayer==1){
																		tamponRepPlayer=2;
																		printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																		printf ("\n Rancuniere : paulo ! Attrappe !\n");
																		printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																		printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																		
																		printf ("\n************************************************ \n");
																		printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																		printf ("\n2) Vous tentez de recuperer le bocal. \n");
																		printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																		printf ("\n************************************************ \n");
																		
																		scanf("%d", &repPlayer);
																		if(repPlayer==1 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																			printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																			printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																		}
																		
																		if(repPlayer==2 && tamponRepPlayer==2){
																			tamponRepPlayer=2;
																			printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																			printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																			printf ("\n************************************************ \n");
																			printf ("\n Vous lui jetez le bocal dessus.\n");
																			printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																			printf ("\n Vous changez d'avis et tournez les talons.\n");
																			printf ("\n************************************************ \n");
																			
																			
																			if(repPlayer==1 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																				printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																				printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																				printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																				printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																			}
																			
																			if(repPlayer==2 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																				printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																				printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																				printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																				printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																				printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																				printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																			}
																			
																			if(repPlayer==3 && tamponRepPlayer==2){
																				tamponRepPlayer=4;
																				printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																				printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																			}
																		}
																		
																		if(repPlayer==3 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																			printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																		}
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==1){
																		tamponRepPlayer=4;
																		printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																		printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																		printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																		printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																		printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																		printf ("\n VICTOIRE... ?\n");
																	}
																}
																
																if(repPlayer==2 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
																	printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
																	printf ("\n Rancuniere Paulo ! Le bocal ! \n");
																	printf ("\n Paulo : Le... oh nom d'un bouc !\n");
																	printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
																	printf ("\n Paulo : Rancuniere ! L'incantation !\n");
																	printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																	printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																	printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																	printf ("\n VICTOIRE... ?\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==1){
																	tamponRepPlayer=4;
																	printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
																	printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
																}
															}
															
															if(repPlayer==2 && tamponRepPlayer==3){
																tamponRepPlayer=4;
																printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
																printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==3){
																tamponRepPlayer=3;
																printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
																printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
																printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
																printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
																printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
																printf ("\n Paulo : Evidement qu'il l'a !\n");
																printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
																printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
																printf ("\n************************************************ \n");
																printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
																printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
																printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
																printf ("\n************************************************ \n");
																	
																scanf("%d", &repPlayer);
																if(repPlayer==1 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
																	printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
																}
																	
																if(repPlayer==2 && tamponRepPlayer==3){
																	tamponRepPlayer=2;
																	printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
																	printf ("\n Rancuniere : paulo ! Attrappe !\n");
																	printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
																	printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
																		
																	printf ("\n************************************************ \n");
																	printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
																	printf ("\n2) Vous tentez de recuperer le bocal. \n");
																	printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
																	printf ("\n************************************************ \n");
																		
																	scanf("%d", &repPlayer);
																	if(repPlayer==1 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																		printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																		printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
																	}
																		
																	if(repPlayer==2 && tamponRepPlayer==2){
																		tamponRepPlayer=2;
																		printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																		printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																		printf ("\n************************************************ \n");
																		printf ("\n Vous lui jetez le bocal dessus.\n");
																		printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																		printf ("\n Vous changez d'avis et tournez les talons.\n");
																		printf ("\n************************************************ \n");
																			
																			
																		if(repPlayer==1 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																			printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																			printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																			printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																			printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																		}
																			
																		if(repPlayer==2 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																			printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																			printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																			printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																			printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																			printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																			printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																		}
																			
																		if(repPlayer==3 && tamponRepPlayer==2){
																			tamponRepPlayer=4;
																			printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																			printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																		}
																	}
																	
																	if(repPlayer==3 && tamponRepPlayer==2){
																		tamponRepPlayer=4;
																		printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																		printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																	}
																}
																
																if(repPlayer==3 && tamponRepPlayer==3){
																	tamponRepPlayer=4;
																	printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
																	printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
																	printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
																	printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
																	printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
																	printf ("\n VICTOIRE... ?\n");
																}
																
																
															}
															
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
														printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
														printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
													}
												}
											
										}
										
										if(repPlayer==3 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n Vous vous rendez dans l'aile Ouest a la recherche d'Olaf le Cat, le chat du Directeur...\n");
											printf ("\n Mais en lieu et place d'un chat a la masse ponderale abusive, c'est une manticore que vous trouvez errant dans les couloirs.\n");
											printf ("\n Il faut savoir que la manticore fait partie de la categorie des superpredateurs. Il s'agit la d'une creature nee pour tuer et devorer tout ce qui bouge. Elle n'a, naturellement, rien a faire dans cet endroit.\n");
											printf ("\n Alors je pense que nous devrions vite recommencer la partie pour comprendre ce que cet animal fiche la, avant de nous faire devorer, vous en dites quoi ? hein ? oui hein.\n");
										}
								
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
				printf ("\nPoulet: NOOOOOOON !! Ne mange pas ca gamin, sinon tu vas mourir du du diabesterol ! C'est pire que du kouignaman ! Mange plutot ca.\n");
				printf ("\nC'est sur cet avertissement que Poulet vous tend une patate douce cuite a la vapeur.\n");
				
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
							
							printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
							printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
							printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
							printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
							printf ("\n************************************************ \n");
							printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
							printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
							printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
							printf ("\n************************************************ \n");
							//la manticore
							scanf("%d", &repPlayer);
							if(repPlayer==1 && tamponRepPlayer==2){
								tamponRepPlayer=1;
								printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
								printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
								printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
								printf ("\n************************************************ \n");
								printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
								printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
								printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
								printf ("\n************************************************ \n");
								
								scanf("%d", &repPlayer);
								if(repPlayer==1 && tamponRepPlayer==1){
									tamponRepPlayer=4;
									printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
									printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
									printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
									printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
								}
								
								if(repPlayer==2 && tamponRepPlayer==1){
									tamponRepPlayer=2;
										printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
										printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
										printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
										printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
										printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
										printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
											printf ("\n Vous etes donc sauvagement decede. RIP.\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==2 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==3 && tamponRepPlayer==2){
											tamponRepPlayer=3;
											printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
											printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
											printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
											printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
											printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
											printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
											printf ("\n Oui mais le bocal est ferme...\n");
											printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
											printf ("\n \n");
											printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
											printf ("\n************************************************ \n");
											printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
											printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
											printf ("\n3) C'est foutu, vous partez en courant !\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==3){
												tamponRepPlayer=1;
												printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
												printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
												printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
												printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
												printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==1){
													tamponRepPlayer=1;
													printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
													printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
													printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
													printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
													printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
													printf ("\n Paulo : Evidement qu'il l'a !\n");
													printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
													printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
													printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
													printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
														printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														tamponRepPlayer=2;
														printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
														printf ("\n Rancuniere : paulo ! Attrappe !\n");
														printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
														printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
														printf ("\n************************************************ \n");
														printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
														printf ("\n2) Vous tentez de recuperer le bocal. \n");
														printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
															printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
															printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=2;
															printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
															printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
															printf ("\n************************************************ \n");
															printf ("\n Vous lui jetez le bocal dessus.\n");
															printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
															printf ("\n Vous changez d'avis et tournez les talons.\n");
															printf ("\n************************************************ \n");
															
															
															if(repPlayer==1 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																printf ("\n VICTOIRE DU SCHNAPS !!!\n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
															}
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
														printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
														printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
														printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
														printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
														printf ("\n VICTOIRE... ?\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
													printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
													printf ("\n Rancuniere Paulo ! Le bocal ! \n");
													printf ("\n Paulo : Le... oh nom d'un bouc !\n");
													printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
													printf ("\n Paulo : Rancuniere ! L'incantation !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												if(repPlayer==3 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
													printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
												}
											}
											
											if(repPlayer==2 && tamponRepPlayer==3){
												tamponRepPlayer=4;
												printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
												printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
											}
											
											if(repPlayer==3 && tamponRepPlayer==3){
												tamponRepPlayer=3;
												printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
												printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
												printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
												printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
												printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
												printf ("\n Paulo : Evidement qu'il l'a !\n");
												printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
												printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
												printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
												printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
												printf ("\n************************************************ \n");
													
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
													printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
												}
													
												if(repPlayer==2 && tamponRepPlayer==3){
													tamponRepPlayer=2;
													printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
													printf ("\n Rancuniere : paulo ! Attrappe !\n");
													printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
													printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
													printf ("\n************************************************ \n");
													printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
													printf ("\n2) Vous tentez de recuperer le bocal. \n");
													printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
													printf ("\n************************************************ \n");
														
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
														printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
														printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
													}
														
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
														printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
														printf ("\n************************************************ \n");
														printf ("\n Vous lui jetez le bocal dessus.\n");
														printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
														printf ("\n Vous changez d'avis et tournez les talons.\n");
														printf ("\n************************************************ \n");
															
															
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
															printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
															printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
															printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
															printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
														}
															
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
															printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
															printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
															printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
															printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
															printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
															printf ("\n VICTOIRE DU SCHNAPS !!!\n");
														}
															
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
														printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
													printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												
											}
											
										}
									}
								
								if(repPlayer==3 && tamponRepPlayer==1){
									tamponRepPlayer=4;
									printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
									printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
									printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
								}
							}
							
							if(repPlayer==2 && tamponRepPlayer==2){
								tamponRepPlayer=4;
								printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
								printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
							}
							//la Creature
							if(repPlayer==3 && tamponRepPlayer==2){
								tamponRepPlayer=3;
								printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
								printf ("\n************************************************ \n");
								printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
								printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
								printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
								printf ("\n************************************************ \n");
								
								scanf("%d", &repPlayer);
								if(repPlayer==1 && tamponRepPlayer==3){
									tamponRepPlayer=4;
									printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
									printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
									printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
									printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
								}
								//dans l'aile Ouest
								if(repPlayer==2 && tamponRepPlayer==3){
									tamponRepPlayer=2;
									printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
									printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
									printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
									printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
									printf ("\n************************************************ \n");
									printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
									printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
									printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
									printf ("\n************************************************ \n");
									
									scanf("%d", &repPlayer);
									if(repPlayer==1 && tamponRepPlayer==2){
										tamponRepPlayer=4;
										printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
										printf ("\n Vous etes donc sauvagement decede. RIP.\n");
										printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
									}
									
									if(repPlayer==2 && tamponRepPlayer==2){
										tamponRepPlayer=4;
										printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
										printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
									}
									
									if(repPlayer==3 && tamponRepPlayer==2){
										tamponRepPlayer=3;
										printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
										printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
										printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
										printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
										printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
										printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
										printf ("\n Oui mais le bocal est ferme...\n");
										printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
										printf ("\n \n");
										printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
										printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
										printf ("\n3) C'est foutu, vous partez en courant !\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==3){
											tamponRepPlayer=1;
											printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
											printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
											printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
											printf ("\n************************************************ \n");
											printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
											printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
											printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==1){
												tamponRepPlayer=1;
												printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
												printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
												printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
												printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
												printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
												printf ("\n Paulo : Evidement qu'il l'a !\n");
												printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
												printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
												printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
												printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
													printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
												}
												
												if(repPlayer==2 && tamponRepPlayer==1){
													tamponRepPlayer=2;
													printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
													printf ("\n Rancuniere : paulo ! Attrappe !\n");
													printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
													printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
													
													printf ("\n************************************************ \n");
													printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
													printf ("\n2) Vous tentez de recuperer le bocal. \n");
													printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
														printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
														printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
														printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
														printf ("\n************************************************ \n");
														printf ("\n Vous lui jetez le bocal dessus.\n");
														printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
														printf ("\n Vous changez d'avis et tournez les talons.\n");
														printf ("\n************************************************ \n");
														
														
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
															printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
															printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
															printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
															printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
															printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
															printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
															printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
															printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
															printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
															printf ("\n VICTOIRE DU SCHNAPS !!!\n");
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
														printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
													printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
											}
											
											if(repPlayer==2 && tamponRepPlayer==1){
												tamponRepPlayer=4;
												printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
												printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
												printf ("\n Rancuniere Paulo ! Le bocal ! \n");
												printf ("\n Paulo : Le... oh nom d'un bouc !\n");
												printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
												printf ("\n Paulo : Rancuniere ! L'incantation !\n");
												printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
												printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
												printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
												printf ("\n VICTOIRE... ?\n");
											}
											
											if(repPlayer==3 && tamponRepPlayer==1){
												tamponRepPlayer=4;
												printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
												printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
											}
										}
										
										if(repPlayer==2 && tamponRepPlayer==3){
											tamponRepPlayer=4;
											printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
											printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
										}
										
										if(repPlayer==3 && tamponRepPlayer==3){
											tamponRepPlayer=3;
											printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
											printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
											printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
											printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
											printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
											printf ("\n Paulo : Evidement qu'il l'a !\n");
											printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
											printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
											printf ("\n************************************************ \n");
											printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
											printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
											printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
											printf ("\n************************************************ \n");
												
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==3){
												tamponRepPlayer=4;
												printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
												printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
											}
												
											if(repPlayer==2 && tamponRepPlayer==3){
												tamponRepPlayer=2;
												printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
												printf ("\n Rancuniere : paulo ! Attrappe !\n");
												printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
												printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
													
												printf ("\n************************************************ \n");
												printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
												printf ("\n2) Vous tentez de recuperer le bocal. \n");
												printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
												printf ("\n************************************************ \n");
													
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
													printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
													printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
												}
													
												if(repPlayer==2 && tamponRepPlayer==2){
													tamponRepPlayer=2;
													printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
													printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
													printf ("\n************************************************ \n");
													printf ("\n Vous lui jetez le bocal dessus.\n");
													printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
													printf ("\n Vous changez d'avis et tournez les talons.\n");
													printf ("\n************************************************ \n");
														
														
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
														printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
														printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
														printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
														printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
													}
														
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
														printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
														printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
														printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
														printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
														printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
														printf ("\n VICTOIRE DU SCHNAPS !!!\n");
													}
														
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
														printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
													printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
												}
											}
											
											if(repPlayer==3 && tamponRepPlayer==3){
												tamponRepPlayer=4;
												printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
												printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
												printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
												printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
												printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
												printf ("\n VICTOIRE... ?\n");
											}
											
											
										}
										
									}
								}
								
								if(repPlayer==3 && tamponRepPlayer==3){
									tamponRepPlayer=4;
									printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
									printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
									printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
								}
							}
						
					
							
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
				tamponRepPlayer =4;
				printf ("\n Macareux : Teh mais bien sur que non que je la veux pas, votre mort, Poulet ! Meme si bon, si vous continuez a critiquer sans avoir goutte, ca risque de changer un peu heing.\n");
				printf ("\n Poulet : C'est une menace, Macareux ? C'est une menace ?!\n");
				printf ("\n Macareux : Mais non, cong ! C'est une facon d'parler, roooh. J'vous aime bein, vous l'savez, Poulet !\n");
				printf ("\n Poulet : Pourtant vous voulez me faire manger vos infames frites !!\n");
				printf ("\n Macareux : He ! Ho ! J'vous force a rien ! Teh si ca vous fait plaisir, moi j'les goutte, vos merdouilles...\n");
				printf ("\n MES QUOI ?!\n");
				
				printf ("\nCette dispute durera longtemps. Tres longtemps. trop longtemps.\n");
				printf ("\n Tellement longtemps que vous avez fini par en oublier ce que vous fichiez la. \n");
				printf ("\n Tapadkoeur, en revanche, n'a pas oublie... vous etes renvoye.\n");
				printf ("\n Vous avez perdu... recommencez, peut-etre... enfin c'est comme vous voulez.\n");
				

				
			}
		}
		
		
		//SCENAR GRENDEL
		if (repPlayer== 3 && tamponRepPlayer == 0){
			tamponRepPlayer =3;
			printf ("\n Vous arrivez devant la vie scolaire. Grendel Larimenel, ecouteurs sur les oreilles, est en train de passer tranquilement le balais a cote de la porte.\n");
			printf ("\n Grendel : Salut ! Alors c'est toi que je dois prendre en stage ? Rale pas, on va se marrer, t'en fais pas. Et puis t'avais qu'a réviser, aussi...\n");
			printf ("\n enfin bref, tu tombe bien, ya plein de trucs a faire et j'ai pas envie d'etre partout a la fois. Alors ducoup si tu pouvais faire l'un de ces trucs...\n");
			printf ("\n************************************************ \n");
			printf ("\n1) Aller aux toilettes du deuxieme etage pour verifier qu'elles sont propres. \n");
			printf ("\n2) Aller dans la foret, en dehors de l'ecole, pour enqueter sur un truc qu'aurait vu un eleve. \n");
			printf ("\n3) Aller dans l'aile Ouest, celle ou vivent les professeurs, pour chercher le chat du Directeur qui s'est encore enfui. \n");
			printf ("\n************************************************ \n");
			scanf("%d", &repPlayer);
				if(repPlayer==1 && tamponRepPlayer==3){
					tamponRepPlayer=1;
					printf ("\n Vous arrivez dans les toilettes du deuxieme etage. A premiere vue, aucun probleme, tout est propre, mais vous entendez soudain un drole de bruit provenant de la porte du fond...\n");
					printf ("\n Une sorte de hahanement un peu essoufle... \n");
					printf ("\n************************************************ \n");
					printf ("\n1) Quoi qu'il soit en train de se passer la dedans, ca ne vous concerne pas... Vous faites comme si vous n'aviez rien entendu. \n");
					printf ("\n2) Vous toquez doucement a la porte. \n");
					printf ("\n3) Vous enfoncez la porte d'un grand coup de pied. \n");
					printf ("\n************************************************ \n");
					
					scanf("%d", &repPlayer);
					//BOUKETIN LE MAGICIEN !
					if(repPlayer==1 && tamponRepPlayer==1){
						tamponRepPlayer=1;
						printf ("\n Alors que vous faisiez demi-tour, la porte s'ouvre en grand sur Bouketin le Magicien, votre professeur de Defense contre les Forces du Mahl, et Magicien le Bouquetin, son animal de compagnie.\n");
						printf ("\n Bouketin : Nom d'un bouc Magi comment t'as pu l'faire tomber la dedans ? Il peut etre n'importe ou maintenant ! Oh tiens, salut toi ! Qu'est-ce que tu fiche la ?\n");
						printf ("\n************************************************ \n");
						printf ("\n1) Plutot detaler que de repondre a cette question, vous n'avez aucune envie de savoir ce que ces deux la trafiquaient. \n");
						printf ("\n2) Vous lui retournez la question, il est assez legitime que vous lui demandiez... \n");
						printf ("\n3) Vous lui dites que vous avez ete envoye par Grendel verifier que les toilettes etaient propres. \n");
						printf ("\n************************************************ \n");
						
						scanf("%d", &repPlayer);
						//FOSSOYEUR
						if(repPlayer==1 && tamponRepPlayer==1){
							tamponRepPlayer=4;
							printf ("\n Vous tournez les talons mais vous tombez nez a nez avec Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole...\n");
							printf ("\n Fossoyeur : Ah non non non, je suis désolé mais non. Je ne peux pas te laisser choisir l'option 1 dans un cas pareil, tu gache toute l'histoire !\n");
							printf ("\n On ne s'est pas embette a ecrire tout ca pour que tu passe a cote, ca ne serait pas tres sympa de ta part... Allez, recommence s'il te plais.\n");
						}
						//suite Bouketin
						if(repPlayer==2 && tamponRepPlayer==1){
							tamponRepPlayer=2;
								printf ("\n Bouketin : C'que j'fais là ? Bah ca s'voit pas ? Comment ca, non ca s'voit pas ? Rohlala. Bon, j't'explique. J'avais confie une manticore en bocal a Magi. Me d'mande pas pourquoi. Ni comment j'ai fait entrer une manticore dans un bocal.\n");
								printf ("\n Enfin bref, en tout cas Magicien l'a fait tomber dans les chiottes. Ouais ca la fout mal. Te vexe pas, Magi.\n");
								printf ("\n Bref, j'arrive pas a recuperer l'bocal. Les canalisations doivent d'ja l'avoir degage dans la riviere qui coule dans les bois, mais va falloir qu'j'aille prev'nir l'Directeur...\n");
								printf ("\n Alors, puisque t'es la, ca m'arrangerait qu't'aille me l'chercher. T'inquiete pas, l'bocal est bien ferme, aucun risque.\n");
								printf ("\n************************************************ \n");
								printf ("\n1) Vous refermez la porte. \n");
								printf ("\n2) Vous acceptez et vous rendez immediatement dans les bois. \n");
								printf ("\n3) Vous allez immediatement le denoncer au directeur ! \n");
								printf ("\n************************************************ \n");
								
								scanf("%d", &repPlayer);
								if(repPlayer==1 && tamponRepPlayer==2){
									tamponRepPlayer=4;
									printf ("\n Vous refermez la porte et faites demi-tour, quittant rapidement les toilettes pour, soudain, tomber sur Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole.\n");
									printf ("\n Fossoyeur : Quoi, encore ? Pardon, c'est peut-etre la premiere fois pour toi, mais moi je commence a en avoir assez de te corriger constament. Tu gache l'histoire la !\n");
									printf ("\n Allez desole mais tu dois recommencer...et fais un effort, cette fois ! je ne peux pas tout faire moi meme. C'est quand meme pas complique de taper 2. Ahlala...\n");
								}
								//foret
								if(repPlayer==2 && tamponRepPlayer==2){
									tamponRepPlayer=2;
									printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
									printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
									printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
									printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
									printf ("\n************************************************ \n");
									printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
									printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
									printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
									printf ("\n************************************************ \n");
									//la manticore
									scanf("%d", &repPlayer);
									if(repPlayer==1 && tamponRepPlayer==2){
										tamponRepPlayer=1;
										printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
										printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
										printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
										printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
										printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==1){
											tamponRepPlayer=4;
											printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
											printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
											printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
											printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
										}
										
										
										//dans l'aile Ouest
										if(repPlayer==2 && tamponRepPlayer==1){
											tamponRepPlayer=2;
											printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
											printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
											printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
											printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
											printf ("\n************************************************ \n");
											printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
											printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
											printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==2){
												tamponRepPlayer=4;
												printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
												printf ("\n Vous etes donc sauvagement decede. RIP.\n");
												printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
											}
											
											if(repPlayer==2 && tamponRepPlayer==2){
												tamponRepPlayer=4;
												printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
												printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
											}
											
											if(repPlayer==3 && tamponRepPlayer==2){
												tamponRepPlayer=3;
												printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
												printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
												printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
												printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
												printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
												printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
												printf ("\n Oui mais le bocal est ferme...\n");
												printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
												printf ("\n \n");
												printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
												printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
												printf ("\n3) C'est foutu, vous partez en courant !\n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==3){
													tamponRepPlayer=1;
													printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
													printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
													printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
													printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
													printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=1;
														printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
														printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
														printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
														printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
														printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
														printf ("\n Paulo : Evidement qu'il l'a !\n");
														printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
														printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
														printf ("\n************************************************ \n");
														printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
														printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
														printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==1){
															tamponRepPlayer=4;
															printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
															printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==1){
															tamponRepPlayer=2;
															printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
															printf ("\n Rancuniere : paulo ! Attrappe !\n");
															printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
															printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
															
															printf ("\n************************************************ \n");
															printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
															printf ("\n2) Vous tentez de recuperer le bocal. \n");
															printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
															printf ("\n************************************************ \n");
															
															scanf("%d", &repPlayer);
															if(repPlayer==1 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
																printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
																printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==2){
																tamponRepPlayer=2;
																printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
																printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
																printf ("\n************************************************ \n");
																printf ("\n Vous lui jetez le bocal dessus.\n");
																printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
																printf ("\n Vous changez d'avis et tournez les talons.\n");
																printf ("\n************************************************ \n");
																
																
																if(repPlayer==1 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																	printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																	printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																	printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																	printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
																}
																
																if(repPlayer==2 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																	printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																	printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																	printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																	printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																	printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																	printf ("\n VICTOIRE DU SCHNAPS !!!\n");
																}
																
																if(repPlayer==3 && tamponRepPlayer==2){
																	tamponRepPlayer=4;
																	printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																	printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
																}
															}
															
															if(repPlayer==3 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
															}
														}
														
														if(repPlayer==3 && tamponRepPlayer==1){
															tamponRepPlayer=4;
															printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
															printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
															printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
															printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
															printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
															printf ("\n VICTOIRE... ?\n");
														}
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
														printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
														printf ("\n Rancuniere Paulo ! Le bocal ! \n");
														printf ("\n Paulo : Le... oh nom d'un bouc !\n");
														printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
														printf ("\n Paulo : Rancuniere ! L'incantation !\n");
														printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
														printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
														printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
														printf ("\n VICTOIRE... ?\n");
													}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
														printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
													printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
												}
												
												if(repPlayer==3 && tamponRepPlayer==3){
													tamponRepPlayer=3;
													printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
													printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
													printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
													printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
													printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
													printf ("\n Paulo : Evidement qu'il l'a !\n");
													printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
													printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
													printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
													printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
													printf ("\n************************************************ \n");
														
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
														printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
													}
														
													if(repPlayer==2 && tamponRepPlayer==3){
														tamponRepPlayer=2;
														printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
														printf ("\n Rancuniere : paulo ! Attrappe !\n");
														printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
														printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
															
														printf ("\n************************************************ \n");
														printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
														printf ("\n2) Vous tentez de recuperer le bocal. \n");
														printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
														printf ("\n************************************************ \n");
															
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
															printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
															printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
														}
															
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=2;
															printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
															printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
															printf ("\n************************************************ \n");
															printf ("\n Vous lui jetez le bocal dessus.\n");
															printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
															printf ("\n Vous changez d'avis et tournez les talons.\n");
															printf ("\n************************************************ \n");
																
																
															if(repPlayer==1 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
															}
																
															if(repPlayer==2 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																printf ("\n VICTOIRE DU SCHNAPS !!!\n");
															}
																
															if(repPlayer==3 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
															}
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==3){
														tamponRepPlayer=4;
														printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
														printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
														printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
														printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
														printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
														printf ("\n VICTOIRE... ?\n");
													}
													
													
												}
												
											}
										}
										
										if(repPlayer==3 && tamponRepPlayer==3){
											tamponRepPlayer=4;
											printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
											printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
											printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
										}
									}
										//la Creature
									if(repPlayer==3 && tamponRepPlayer==2){
									tamponRepPlayer=3;
									printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
									printf ("\n************************************************ \n");
									printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
									printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
									printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
									printf ("\n************************************************ \n");
									
									scanf("%d", &repPlayer);
									if(repPlayer==1 && tamponRepPlayer==3){
										tamponRepPlayer=4;
										printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
										printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
										printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
										printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
									}
									//dans l'aile Ouest
									if(repPlayer==2 && tamponRepPlayer==3){
										tamponRepPlayer=2;
										printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
										printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
										printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
										printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
										printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
										printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
											printf ("\n Vous etes donc sauvagement decede. RIP.\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==2 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==3 && tamponRepPlayer==2){
											tamponRepPlayer=3;
											printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
											printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
											printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
											printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
											printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
											printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
											printf ("\n Oui mais le bocal est ferme...\n");
											printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
											printf ("\n \n");
											printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
											printf ("\n************************************************ \n");
											printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
											printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
											printf ("\n3) C'est foutu, vous partez en courant !\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==3){
												tamponRepPlayer=1;
												printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
												printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
												printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
												printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
												printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==1){
													tamponRepPlayer=1;
													printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
													printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
													printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
													printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
													printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
													printf ("\n Paulo : Evidement qu'il l'a !\n");
													printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
													printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
													printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
													printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
														printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														tamponRepPlayer=2;
														printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
														printf ("\n Rancuniere : paulo ! Attrappe !\n");
														printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
														printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
														printf ("\n************************************************ \n");
														printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
														printf ("\n2) Vous tentez de recuperer le bocal. \n");
														printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
															printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
															printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=2;
															printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
															printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
															printf ("\n************************************************ \n");
															printf ("\n Vous lui jetez le bocal dessus.\n");
															printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
															printf ("\n Vous changez d'avis et tournez les talons.\n");
															printf ("\n************************************************ \n");
															
															
															if(repPlayer==1 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																printf ("\n VICTOIRE DU SCHNAPS !!!\n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
															}
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
														printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
														printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
														printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
														printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
														printf ("\n VICTOIRE... ?\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
													printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
													printf ("\n Rancuniere Paulo ! Le bocal ! \n");
													printf ("\n Paulo : Le... oh nom d'un bouc !\n");
													printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
													printf ("\n Paulo : Rancuniere ! L'incantation !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												if(repPlayer==3 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
													printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
												}
											}
											
											if(repPlayer==2 && tamponRepPlayer==3){
												tamponRepPlayer=4;
												printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
												printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
											}
											
											if(repPlayer==3 && tamponRepPlayer==3){
												tamponRepPlayer=3;
												printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
												printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
												printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
												printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
												printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
												printf ("\n Paulo : Evidement qu'il l'a !\n");
												printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
												printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
												printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
												printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
												printf ("\n************************************************ \n");
													
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
													printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
												}
													
												if(repPlayer==2 && tamponRepPlayer==3){
													tamponRepPlayer=2;
													printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
													printf ("\n Rancuniere : paulo ! Attrappe !\n");
													printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
													printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
													printf ("\n************************************************ \n");
													printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
													printf ("\n2) Vous tentez de recuperer le bocal. \n");
													printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
													printf ("\n************************************************ \n");
														
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
														printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
														printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
													}
														
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
														printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
														printf ("\n************************************************ \n");
														printf ("\n Vous lui jetez le bocal dessus.\n");
														printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
														printf ("\n Vous changez d'avis et tournez les talons.\n");
														printf ("\n************************************************ \n");
															
															
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
															printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
															printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
															printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
															printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
														}
															
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
															printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
															printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
															printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
															printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
															printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
															printf ("\n VICTOIRE DU SCHNAPS !!!\n");
														}
															
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
														printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
													printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												
											}
											
										}
									}
									
									if(repPlayer==3 && tamponRepPlayer==3){
										tamponRepPlayer=4;
										printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
										printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
										printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
									}
								}
									
									if(repPlayer==3 && tamponRepPlayer==1){
										tamponRepPlayer=4;
										printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
										printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
										printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
									}
								}
								
								if(repPlayer==2 && tamponRepPlayer==2){
									tamponRepPlayer=4;
									printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
									printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
								}
							
						
								
							if(repPlayer==3 && tamponRepPlayer==2){
								tamponRepPlayer=4;
								printf ("\n Bouketin vous laisse faire. Puisque vous vous occupez de prevenir le Directeur, ca lui laissera le temps de regler la situation apres tout.\n");
								printf ("\n En recompense, Tapadkoeur vous epargne de finir votre stage. Vous n'avez peut-etre pas vu de manticore mais, au moins, vous avez gagne !\n");
								printf ("\n VICTOIRE ! (mais a vaincre sans peril...)\n");
							}
						
							
						}
					
						
						if(repPlayer==3 && tamponRepPlayer==1){
							tamponRepPlayer=4;
							printf ("\n Bouketin : Hein ? de quoi ? Ah ouais ! Les chiottes. Oui bein... euh... bein elles sont propres, comme tu vois.\n");
							printf ("\n Vous restez quelques secondes a regarder Bouketin, sans trop savoir quoi faire...\n");
							printf ("\n Bouketin : Bein ducoup... casse-toi, pegu. Qu'est-ce que t'attend ?\n");
							printf ("\n Vous obtemperez et retournez voir Grendel qui, satisfait de l'etat des toilettes, vous demande de ne pas poser trop de questions sur Bouketin et vous epargne le reste du stage.\n");
							printf ("\n Vous avez gagne... mais, je ne sais pas vous, mais j'ai l'impression que nous sommes passe a cote de quelque chose, tout de meme... On recommence ?\n");
							printf ("\n VICTOIRE !.... ?\n");
						}
					}
					
					if(repPlayer==2 && tamponRepPlayer==1){
						tamponRepPlayer=2;
						printf ("\n Vous toquez doucement a la porte et entendez la voix de votre professeur de Defense contre les Forces du Mahl, Bouketin le Magicien.\n");
						printf ("\n Bouketin : Entrez ! C'est pour quoi ?\n");
						printf ("\n Vous vous ecartez tandis que, du bout du pied, Bouketin vous ouvre la porte. Vous le trouvez accompagné de Magicien le Bouquetin, son familier, et le bras plongé jusqu'a l'epaule dans la cuvette des toilettes.\n");
						printf ("\n Bouketin : Nom d'un bouc Magi comment t'as pu l'faire tomber la dedans ? Il peut etre n'importe ou maintenant ! Qu'est-c'que j'peux faire pour toi, gamin ?\n");
						printf ("\n************************************************ \n");
						printf ("\n1) Vous refermez la porte. \n");
						printf ("\n2) Vous lui demandez calmement ce qu'il peut bien être en train de faire. \n");
						printf ("\n3) Vous lui dites que vous avez ete envoye par Grendel verifier que les toilettes etaient propres. \n");
						printf ("\n************************************************ \n");
						
						scanf("%d", &repPlayer);
						if(repPlayer==1 && tamponRepPlayer==2){
							tamponRepPlayer=4;
							printf ("\n Vous refermez la porte et faites demi-tour, quittant les toilettes pour, soudain, tomber sur Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole.\n");
							printf ("\n Fossoyeur : Oh ! Bonjour. Je vois que tu as choisit autre chose... nous nous sommes croises quelques lignes plus haut dans l'algorythme, tu t'en souviens ?\n");
							printf ("\n Sans doute pas... enfin bref, je suis desole mais tu n'a pas tres judicieusement choisit. Allez desole mais tu dois recommencer...\n");
							
						}
						//suite Bouketin	
						if(repPlayer==2 && tamponRepPlayer==2){
							tamponRepPlayer=2;
							printf ("\n Bouketin : C'que j'fais là ? Bah ca s'voit pas ? Comment ca, non ca s'voit pas ? Rohlala. Bon, j't'explique. J'avais confie une manticore en bocal a Magi. Me d'mande pas pourquoi. Ni comment j'ai fait entrer une manticore dans un bocal.\n");
							printf ("\n Enfin bref, en tout cas Magicien l'a fait tomber dans les chiottes. Ouais ca la fout mal. Te vexe pas, Magi.\n");
							printf ("\n Bref, j'arrive pas a recuperer l'bocal. Les canalisations doivent d'ja l'avoir degage dans la riviere qui coule dans les bois, mais va falloir qu'j'aille prev'nir l'Directeur...\n");
							printf ("\n Alors, puisque t'es la, ca m'arrangerait qu't'aille me l'chercher. T'inquiete pas, l'bocal est bien ferme, aucun risque.\n");
							printf ("\n************************************************ \n");
							printf ("\n1) Vous refermez la porte. \n");
							printf ("\n2) Vous acceptez et vous rendez immediatement dans les bois. \n");
							printf ("\n3) Vous allez immediatement le denoncer au directeur ! \n");
							printf ("\n************************************************ \n");
							
							scanf("%d", &repPlayer);
							if(repPlayer==1 && tamponRepPlayer==2){
								tamponRepPlayer=4;
								printf ("\n Vous refermez la porte et faites demi-tour, quittant rapidement les toilettes pour, soudain, tomber sur Fossoyeur le Conteur, ce drole de type qui erre souvent dans les couloirs de l'ecole.\n");
								printf ("\n Fossoyeur : Quoi, encore ? Pardon, c'est peut-etre la premiere fois pour toi, mais moi je commence a en avoir assez de te corriger constament. Tu gache l'histoire la !\n");
								printf ("\n Allez desole mais tu dois recommencer...et fais un effort, cette fois ! je ne peux pas tout faire moi meme. C'est quand meme pas complique de taper 2. Ahlala...\n");
							}
							//foret
							if(repPlayer==2 && tamponRepPlayer==2){
								tamponRepPlayer=2;
								printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
								printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
								printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
								printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
								printf ("\n************************************************ \n");
								printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
								printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
								printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
								printf ("\n************************************************ \n");
								//la manticore
								scanf("%d", &repPlayer);
								if(repPlayer==1 && tamponRepPlayer==2){
									tamponRepPlayer=1;
									printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
									printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
									printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
									printf ("\n************************************************ \n");
									printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
									printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
									printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
									printf ("\n************************************************ \n");
									
									scanf("%d", &repPlayer);
									if(repPlayer==1 && tamponRepPlayer==1){
										tamponRepPlayer=4;
										printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
										printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
										printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
										printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
									}
									
									if(repPlayer==2 && tamponRepPlayer==1){
										tamponRepPlayer=2;
										printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
										printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
										printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
										printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
										printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
										printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
											printf ("\n Vous etes donc sauvagement decede. RIP.\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==2 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==3 && tamponRepPlayer==2){
											tamponRepPlayer=3;
											printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
											printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
											printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
											printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
											printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
											printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
											printf ("\n Oui mais le bocal est ferme...\n");
											printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
											printf ("\n \n");
											printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
											printf ("\n************************************************ \n");
											printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
											printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
											printf ("\n3) C'est foutu, vous partez en courant !\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==3){
												tamponRepPlayer=1;
												printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
												printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
												printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
												printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
												printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==1){
													tamponRepPlayer=1;
													printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
													printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
													printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
													printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
													printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
													printf ("\n Paulo : Evidement qu'il l'a !\n");
													printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
													printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
													printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
													printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
														printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														tamponRepPlayer=2;
														printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
														printf ("\n Rancuniere : paulo ! Attrappe !\n");
														printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
														printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
														printf ("\n************************************************ \n");
														printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
														printf ("\n2) Vous tentez de recuperer le bocal. \n");
														printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
															printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
															printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=2;
															printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
															printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
															printf ("\n************************************************ \n");
															printf ("\n Vous lui jetez le bocal dessus.\n");
															printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
															printf ("\n Vous changez d'avis et tournez les talons.\n");
															printf ("\n************************************************ \n");
															
															
															if(repPlayer==1 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																printf ("\n VICTOIRE DU SCHNAPS !!!\n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
															}
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
														printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
														printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
														printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
														printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
														printf ("\n VICTOIRE... ?\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
													printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
													printf ("\n Rancuniere Paulo ! Le bocal ! \n");
													printf ("\n Paulo : Le... oh nom d'un bouc !\n");
													printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
													printf ("\n Paulo : Rancuniere ! L'incantation !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												if(repPlayer==3 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
													printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
												}
											}
											
											if(repPlayer==2 && tamponRepPlayer==3){
												tamponRepPlayer=4;
												printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
												printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
											}
											
											if(repPlayer==3 && tamponRepPlayer==3){
												tamponRepPlayer=3;
												printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
												printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
												printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
												printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
												printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
												printf ("\n Paulo : Evidement qu'il l'a !\n");
												printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
												printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
												printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
												printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
												printf ("\n************************************************ \n");
													
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
													printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
												}
													
												if(repPlayer==2 && tamponRepPlayer==3){
													tamponRepPlayer=2;
													printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
													printf ("\n Rancuniere : paulo ! Attrappe !\n");
													printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
													printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
													printf ("\n************************************************ \n");
													printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
													printf ("\n2) Vous tentez de recuperer le bocal. \n");
													printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
													printf ("\n************************************************ \n");
														
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
														printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
														printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
													}
														
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
														printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
														printf ("\n************************************************ \n");
														printf ("\n Vous lui jetez le bocal dessus.\n");
														printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
														printf ("\n Vous changez d'avis et tournez les talons.\n");
														printf ("\n************************************************ \n");
															
															
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
															printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
															printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
															printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
															printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
														}
															
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
															printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
															printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
															printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
															printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
															printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
															printf ("\n VICTOIRE DU SCHNAPS !!!\n");
														}
															
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
														printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
													printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												
											}
											
										}
									}
									
									if(repPlayer==3 && tamponRepPlayer==1){
										tamponRepPlayer=4;
										printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
										printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
										printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
									}
								}
								
								if(repPlayer==2 && tamponRepPlayer==2){
									tamponRepPlayer=4;
									printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
									printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
								}
								//la Creature
								if(repPlayer==3 && tamponRepPlayer==2){
									tamponRepPlayer=3;
									printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
									printf ("\n************************************************ \n");
									printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
									printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
									printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
									printf ("\n************************************************ \n");
									
									scanf("%d", &repPlayer);
									if(repPlayer==1 && tamponRepPlayer==3){
										tamponRepPlayer=4;
										printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
										printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
										printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
										printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
									}
									//dans l'aile Ouest
									if(repPlayer==2 && tamponRepPlayer==3){
										tamponRepPlayer=2;
										printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
										printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
										printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
										printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
										printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
										printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
											printf ("\n Vous etes donc sauvagement decede. RIP.\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==2 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==3 && tamponRepPlayer==2){
											tamponRepPlayer=3;
											printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
											printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
											printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
											printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
											printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
											printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
											printf ("\n Oui mais le bocal est ferme...\n");
											printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
											printf ("\n \n");
											printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
											printf ("\n************************************************ \n");
											printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
											printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
											printf ("\n3) C'est foutu, vous partez en courant !\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==3){
												tamponRepPlayer=1;
												printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
												printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
												printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
												printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
												printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==1){
													tamponRepPlayer=1;
													printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
													printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
													printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
													printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
													printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
													printf ("\n Paulo : Evidement qu'il l'a !\n");
													printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
													printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
													printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
													printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
														printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														tamponRepPlayer=2;
														printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
														printf ("\n Rancuniere : paulo ! Attrappe !\n");
														printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
														printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
														printf ("\n************************************************ \n");
														printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
														printf ("\n2) Vous tentez de recuperer le bocal. \n");
														printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
															printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
															printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=2;
															printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
															printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
															printf ("\n************************************************ \n");
															printf ("\n Vous lui jetez le bocal dessus.\n");
															printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
															printf ("\n Vous changez d'avis et tournez les talons.\n");
															printf ("\n************************************************ \n");
															
															
															if(repPlayer==1 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																printf ("\n VICTOIRE DU SCHNAPS !!!\n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
															}
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
														printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
														printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
														printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
														printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
														printf ("\n VICTOIRE... ?\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
													printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
													printf ("\n Rancuniere Paulo ! Le bocal ! \n");
													printf ("\n Paulo : Le... oh nom d'un bouc !\n");
													printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
													printf ("\n Paulo : Rancuniere ! L'incantation !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												if(repPlayer==3 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
													printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
												}
											}
											
											if(repPlayer==2 && tamponRepPlayer==3){
												tamponRepPlayer=4;
												printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
												printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
											}
											
											if(repPlayer==3 && tamponRepPlayer==3){
												tamponRepPlayer=3;
												printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
												printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
												printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
												printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
												printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
												printf ("\n Paulo : Evidement qu'il l'a !\n");
												printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
												printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
												printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
												printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
												printf ("\n************************************************ \n");
													
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
													printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
												}
													
												if(repPlayer==2 && tamponRepPlayer==3){
													tamponRepPlayer=2;
													printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
													printf ("\n Rancuniere : paulo ! Attrappe !\n");
													printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
													printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
													printf ("\n************************************************ \n");
													printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
													printf ("\n2) Vous tentez de recuperer le bocal. \n");
													printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
													printf ("\n************************************************ \n");
														
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
														printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
														printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
													}
														
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
														printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
														printf ("\n************************************************ \n");
														printf ("\n Vous lui jetez le bocal dessus.\n");
														printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
														printf ("\n Vous changez d'avis et tournez les talons.\n");
														printf ("\n************************************************ \n");
															
															
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
															printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
															printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
															printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
															printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
														}
															
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
															printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
															printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
															printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
															printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
															printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
															printf ("\n VICTOIRE DU SCHNAPS !!!\n");
														}
															
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
														printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
													printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												
											}
											
										}
									}
									
									if(repPlayer==3 && tamponRepPlayer==3){
										tamponRepPlayer=4;
										printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
										printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
										printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
									}
								}
							}
								
							if(repPlayer==3 && tamponRepPlayer==2){
								tamponRepPlayer=4;
								printf ("\n Bouketin vous laisse faire. Puisque vous vous occupez de prevenir le Directeur, ca lui laissera le temps de regler la situation apres tout.\n");
								printf ("\n En recompense, Tapadkoeur vous epargne de finir votre stage. Vous n'avez peut-etre pas vu de manticore mais, au moins, vous avez gagne !\n");
								printf ("\n VICTOIRE ! (mais a vaincre sans peril...)\n");
							}
						}
						
						if(repPlayer==3 && tamponRepPlayer==2){
							tamponRepPlayer=4;
							printf ("\n Bouketin : Hein ? de quoi ? Ah ouais ! Les chiottes. Oui bein... euh... bein elles sont propres, comme tu vois.\n");
							printf ("\n Vous restez quelques secondes a regarder Bouketin, sans trop savoir quoi faire...\n");
							printf ("\n Bouketin : Bein ducoup... casse-toi, pegu. Qu'est-ce que t'attend ?\n");
							printf ("\n Vous obtemperez et retournez voir Grendel qui, satisfait de l'etat des toilettes, vous demande de ne pas poser trop de questions sur Bouketin et vous epargne le reste du stage.\n");
							printf ("\n Vous avez gagné... mais, je ne sais pas vous, mais j'ai l'impression que nous sommes passe a cote de quelque chose, tout de meme... On recommence ?\n");
							printf ("\n VICTOIRE !.... ?\n");
						}
					}
					
					if(repPlayer==3 && tamponRepPlayer==1){
						tamponRepPlayer=4;
						printf ("\n Alors que vous alliez frapper la porte, le pied de Bouketin le Magicien, votre professeur de Defense contre les Forces du Mahl fait de meme de l'autre cote, vous envoyant le battant en plein menton.\n");
						printf ("\n Vous etes immediatement assome mais, bonne nouvelle, lorsque vous vous reveillerez, Tapadkoeur vous dedomagera en vous epargnant le stage. \n");
						printf ("\n Du moment que vous ne demandez pas ce que Bouketin faisait dans les toilettes, vous avez gagné\n");
						printf ("\n VICTOIRE !\n");
					}
					
					
				}
				
				if(repPlayer==2 && tamponRepPlayer==3){
					tamponRepPlayer=2;
						printf ("\n Vous rendez dans la foret qui entoure l'ecole. Apres avoir marche plusieurs minuttes, vous approchez du bosquet de bouleaux dores qu'a fait planter le Directeur pres de la riviere.\n");
						printf ("\n L'eau de la riviere est calme et claire, mais le bruit de son ruisselement est soudain interrompu par un rale douloureux provenant des arbres proches.\n");
						printf ("\n Vous approchez et trouvez, adosse contre un bouleau, l'immense Mc krame le Jardinier, dont l'epee de deux metres, allongee a cote de lui, peine a egaler la taille.\n");
						printf ("\n Il semble blesse et, a ses pieds, repose un petit bocal ouvert.\n");
						printf ("\n************************************************ \n");
						printf ("\n1) Vous lui demandez ce qu'il s'est passe. \n");
						printf ("\n2) Vous detalez directement. Ce qui lui a fait ca est peut-etre encore dans les parages ! \n");
						printf ("\n3) Vous tendez l'oreille et observez attentivement, pour vous assurer que tout est sur avant de vous avancer.\n");
						printf ("\n************************************************ \n");
						//la manticore
						scanf("%d", &repPlayer);
						if(repPlayer==1 && tamponRepPlayer==2){
							tamponRepPlayer=1;
							printf ("\n Mc krame tourne la tête vers vous, vous frolant presque le visage de son enorme moustache\n");
							printf ("\n Mc Krame : J'ai trouve un bocal dans la riviere... j'aurais pas du l'ouvrir... il y avait... une manticore... fais gaffe, gamin, elle est toujours dans le coin...\n");
							printf ("\n Effectivement, vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir l'enorme silhouette de la manticore s'eloigner en direction de l'ecole...\n");
							printf ("\n************************************************ \n");
							printf ("\n1) Vous prenez l'epee et partez aux trousses de la manticore.\n");
							printf ("\n2) Vous prenez le bocal et partez aux trousses de la manticore.\n");
							printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
							printf ("\n************************************************ \n");
							
							scanf("%d", &repPlayer);
							if(repPlayer==1 && tamponRepPlayer==1){
								tamponRepPlayer=4;
								printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
								printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
								printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
								printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
							}
							
							if(repPlayer==2 && tamponRepPlayer==1){
								tamponRepPlayer=2;
								
										printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
										printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
										printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
										printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
										printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
										printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
											printf ("\n Vous etes donc sauvagement decede. RIP.\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==2 && tamponRepPlayer==2){
											tamponRepPlayer=4;
											printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
											printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
										}
										
										if(repPlayer==3 && tamponRepPlayer==2){
											tamponRepPlayer=3;
											printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
											printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
											printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
											printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
											printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
											printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
											printf ("\n Oui mais le bocal est ferme...\n");
											printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
											printf ("\n \n");
											printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
											printf ("\n************************************************ \n");
											printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
											printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
											printf ("\n3) C'est foutu, vous partez en courant !\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==3){
												tamponRepPlayer=1;
												printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
												printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
												printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
												printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
												printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==1){
													tamponRepPlayer=1;
													printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
													printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
													printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
													printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
													printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
													printf ("\n Paulo : Evidement qu'il l'a !\n");
													printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
													printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
													printf ("\n************************************************ \n");
													printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
													printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
													printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
													printf ("\n************************************************ \n");
													
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
														printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==1){
														tamponRepPlayer=2;
														printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
														printf ("\n Rancuniere : paulo ! Attrappe !\n");
														printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
														printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
														printf ("\n************************************************ \n");
														printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
														printf ("\n2) Vous tentez de recuperer le bocal. \n");
														printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
														printf ("\n************************************************ \n");
														
														scanf("%d", &repPlayer);
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
															printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
															printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
														}
														
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=2;
															printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
															printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
															printf ("\n************************************************ \n");
															printf ("\n Vous lui jetez le bocal dessus.\n");
															printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
															printf ("\n Vous changez d'avis et tournez les talons.\n");
															printf ("\n************************************************ \n");
															
															
															if(repPlayer==1 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
																printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
																printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
																printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
																printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
															}
															
															if(repPlayer==2 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
																printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
																printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
																printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
																printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
																printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
																printf ("\n VICTOIRE DU SCHNAPS !!!\n");
															}
															
															if(repPlayer==3 && tamponRepPlayer==2){
																tamponRepPlayer=4;
																printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
																printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
															}
														}
														
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==1){
														tamponRepPlayer=4;
														printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
														printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
														printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
														printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
														printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
														printf ("\n VICTOIRE... ?\n");
													}
												}
												
												if(repPlayer==2 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
													printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
													printf ("\n Rancuniere Paulo ! Le bocal ! \n");
													printf ("\n Paulo : Le... oh nom d'un bouc !\n");
													printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
													printf ("\n Paulo : Rancuniere ! L'incantation !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												if(repPlayer==3 && tamponRepPlayer==1){
													tamponRepPlayer=4;
													printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
													printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
												}
											}
											
											if(repPlayer==2 && tamponRepPlayer==3){
												tamponRepPlayer=4;
												printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
												printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
											}
											
											if(repPlayer==3 && tamponRepPlayer==3){
												tamponRepPlayer=3;
												printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
												printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
												printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
												printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
												printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
												printf ("\n Paulo : Evidement qu'il l'a !\n");
												printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
												printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
												printf ("\n************************************************ \n");
												printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
												printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
												printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
												printf ("\n************************************************ \n");
													
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
													printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
												}
													
												if(repPlayer==2 && tamponRepPlayer==3){
													tamponRepPlayer=2;
													printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
													printf ("\n Rancuniere : paulo ! Attrappe !\n");
													printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
													printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
														
													printf ("\n************************************************ \n");
													printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
													printf ("\n2) Vous tentez de recuperer le bocal. \n");
													printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
													printf ("\n************************************************ \n");
														
													scanf("%d", &repPlayer);
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
														printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
														printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
													}
														
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=2;
														printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
														printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
														printf ("\n************************************************ \n");
														printf ("\n Vous lui jetez le bocal dessus.\n");
														printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
														printf ("\n Vous changez d'avis et tournez les talons.\n");
														printf ("\n************************************************ \n");
															
															
														if(repPlayer==1 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
															printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
															printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
															printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
															printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
														}
															
														if(repPlayer==2 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
															printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
															printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
															printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
															printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
															printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
															printf ("\n VICTOIRE DU SCHNAPS !!!\n");
														}
															
														if(repPlayer==3 && tamponRepPlayer==2){
															tamponRepPlayer=4;
															printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
															printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
														}
													}
													
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
														printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==3){
													tamponRepPlayer=4;
													printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
													printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
													printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
													printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
													printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
													printf ("\n VICTOIRE... ?\n");
												}
												
												
											}
											
										}
									}
							
							if(repPlayer==3 && tamponRepPlayer==1){
								tamponRepPlayer=4;
								printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
								printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
								printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
							}
						}
						
						if(repPlayer==2 && tamponRepPlayer==2){
							tamponRepPlayer=4;
							printf ("\nEffectivement, c'etait toujours dans les parrages. Et, effectivement, ca vous a mange. Et Effectivement, vous etes mort. \n");
							printf ("\nDu fait, c'est une defaite brutale. On evite de prendre le meme et on recommence ?\n");
						}
						//la Creature
						if(repPlayer==3 && tamponRepPlayer==2){
							tamponRepPlayer=3;
							printf ("\n Vous entendez soudain un craquement bruyant derriere vous. Entre les arbres, vous pouvez voir la silhouette d'une enorme creature s'eloigner en direction de l'ecole...\n");
							printf ("\n************************************************ \n");
							printf ("\n1) Vous prenez l'epee et partez aux trousses de la creature. \n");
							printf ("\n2) Vous prenez le bocal et partez aux trousses de la creature. \n");
							printf ("\n3) Vous restez aupres de Mc Krame en priant pour que la creature ne revienne pas.\n");
							printf ("\n************************************************ \n");
							
							scanf("%d", &repPlayer);
							if(repPlayer==1 && tamponRepPlayer==3){
								tamponRepPlayer=4;
								printf ("\n Vous vous etes peut-etre un peu surrestime... cette epee fait deux metres, vous croyiez vraiment que vous alliez pouvoir la soulever ? C'est chose faite. La porter, en revanche....\n");
								printf ("\n Elle vous est retombe sur le pied et vient de vous sectionner trois orteils... il ne vous reste plus qu'a attendre avec Mc Krame et... en fait non, le bruit qu'a fait l'epee a attire l'attention du monstre.\n");
								printf ("\n Naturelement, un diner pareil servit sur un plateau, ca ne se refuse pas... Vous avez bon gout, si ca vous rassure.\n");
								printf ("\n Perdu. Allez, on reessaye sans mourir...\n");
							}
							//dans l'aile Ouest
							if(repPlayer==2 && tamponRepPlayer==3){
								tamponRepPlayer=2;
								printf ("\n Vous partez au trousses de la bete, bocal en main en prenant garde a ne pas vous faire reperer. Vous n'avez pas encore trouve comment regler ce probleme de taille, apres tout.\n");
								printf ("\n En arrivant aux murs de l'ecole, vous la voyez penetrer dans l'aile Ouest, l'aile des professeurs, en brisant negligement une fenetre comme s'il n'y avait rien.\n");
								printf ("\n Vous la suivez discretement en esperant qu'elle ne vous entendra pas. L'aile Ouest, a cette heure-ci, est vide de ses occupants, heureusement.\n");
								printf ("\n Alors que la creature tourne a l'angle d'un couloir, elle se retourne brusquement dans votre direction !\n");
								printf ("\n************************************************ \n");
								printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
								printf ("\n2) Vous lui jetez le bocal dessus dans un reflexe digne d'un belliciste ninja \n");
								printf ("\n3) Vous vous cachez a l'angle du mur en priant pour qu'une creature aux sens aiguises ne vous remarque pas.\n");
								printf ("\n************************************************ \n");
								
								scanf("%d", &repPlayer);
								if(repPlayer==1 && tamponRepPlayer==2){
									tamponRepPlayer=4;
									printf ("\n J'ai un scoop pour vous. Vous courez moins vite qu'une manticore.\n");
									printf ("\n Vous etes donc sauvagement decede. RIP.\n");
									printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
								}
								
								if(repPlayer==2 && tamponRepPlayer==2){
									tamponRepPlayer=4;
									printf ("\n Voila qui est embarassant... le bocal rebondit negligement sur la creature qui, vexee, vous devore sur le champ\n");
									printf ("\n Vous avez perdu... quand elle aura fini de vous digerer, vous pourrez toujours recommencer...\n");
								}
								
								if(repPlayer==3 && tamponRepPlayer==2){
									tamponRepPlayer=3;
									printf ("\n Vous vous cachez immediatement a l'angle du mur, en vous faisant le plus petit possible.\n");
									printf ("\n La creature fait quelques pas dans votre direction en reniflant bruyament... puis fait demi-tour. Vous avez eu de la chance.\n");
									printf ("\n Ou peut-etre pas tant de chance que ca puisque les voix lointaines de deux eleves, arrivant de votre cote du couloir, s'elevent soudain !\n");
									printf ("\n Un jeune garçon marchant en chaussettes, le front orne d'un bandeau a cornes de bouc, et une jeune fille portant un manteau noir brode d'or arrivent dans votre direction !\n");
									printf ("\n Rancuniere l'Apprentie-Sorciere : Je ne comprend toujours pas pourquoi on cherche ici et pas dans la foret...Bouketin nous a pourtant dit que le bocal serait dans la foret, quand on l'a croise.\n");
									printf ("\n Paulo le Nouveau : Parce que, si j'etais une manticore, le premier endroit ou j'irais, c'est ici. Des couloirs vides avec de la bouffe pas loin, c'est pile ce qu'il lui faut.\n");
									printf ("\n Oui mais le bocal est ferme...\n");
									printf ("\n D'experience, je sais qu'un bocal qui doit rester ferme finit toujours par etre ouvert...\n");
									printf ("\n \n");
									printf ("\n La manticore ne les a pas encore entendu, mais ca ne saurait tarder...elle se fige et tend ce qui lui sert d'oreille...\n");
									printf ("\n************************************************ \n");
									printf ("\n1) Vous leur faites signe de se taire en faisant le moins de bruit possible.\n");
									printf ("\n2) Vous leur intimmez de se taire immediatement !\n");
									printf ("\n3) C'est foutu, vous partez en courant !\n");
									printf ("\n************************************************ \n");
									
									scanf("%d", &repPlayer);
									if(repPlayer==1 && tamponRepPlayer==3){
										tamponRepPlayer=1;
										printf ("\n En approchant, Paulo et Rancuniere vous remarquent, de loin. Rancuniere fronce les sourcils avec agacement devant vos gesticulations silencieuse.\n");
										printf ("\n Rancuniere : Qu'est-ce que tu veux, a gesticuler comme un guignol, toi ?\n");
										printf ("\n L'injonction de Rancuniere aletre la manticore, qui se retourne brusquement et approche de vous. trop tard, ses yeux se dardent vers vous !\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous tournez les talons en courant comme un derate. \n");
										printf ("\n2) Vous lui jetez le bocal dessus avec l'energie du desespoir \n");
										printf ("\n3) Vous ne bougez plus ! Sa vision est basee sur le mouvement...\n");
										printf ("\n************************************************ \n");
										
										scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==1){
											tamponRepPlayer=1;
											printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
											printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
											printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
											printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
											printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
											printf ("\n Paulo : Evidement qu'il l'a !\n");
											printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
											printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
											printf ("\n************************************************ \n");
											printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
											printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
											printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
											printf ("\n************************************************ \n");
											
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==1){
												tamponRepPlayer=4;
												printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
												printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
											}
											
											if(repPlayer==2 && tamponRepPlayer==1){
												tamponRepPlayer=2;
												printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
												printf ("\n Rancuniere : paulo ! Attrappe !\n");
												printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
												printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
												
												printf ("\n************************************************ \n");
												printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
												printf ("\n2) Vous tentez de recuperer le bocal. \n");
												printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
												printf ("\n************************************************ \n");
												
												scanf("%d", &repPlayer);
												if(repPlayer==1 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
													printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
													printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
												}
												
												if(repPlayer==2 && tamponRepPlayer==2){
													tamponRepPlayer=2;
													printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
													printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
													printf ("\n************************************************ \n");
													printf ("\n Vous lui jetez le bocal dessus.\n");
													printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
													printf ("\n Vous changez d'avis et tournez les talons.\n");
													printf ("\n************************************************ \n");
													
													
													if(repPlayer==1 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
														printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
														printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
														printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
														printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
													}
													
													if(repPlayer==2 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
														printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
														printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
														printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
														printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
														printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
														printf ("\n VICTOIRE DU SCHNAPS !!!\n");
													}
													
													if(repPlayer==3 && tamponRepPlayer==2){
														tamponRepPlayer=4;
														printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
														printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
													}
												}
												
												if(repPlayer==3 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
													printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
												}
											}
											
											if(repPlayer==3 && tamponRepPlayer==1){
												tamponRepPlayer=4;
												printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
												printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
												printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
												printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
												printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
												printf ("\n VICTOIRE... ?\n");
											}
										}
										
										if(repPlayer==2 && tamponRepPlayer==1){
											tamponRepPlayer=4;
											printf ("\n Vous jetez le bocal sur la creature, a bout portant, droit dans son oeil. La bete se redresse en hurlant tandis que le petit recipient roule au sol et que vous vous figez de terreur.\n");
											printf ("\n Alors que la maticore tourne vers elle un regard charge de haine et leve une patte griffue pour vous arracher la tete, vous etes soudain repousse sur le mur par une vague d'energie doree.\n");
											printf ("\n Rancuniere Paulo ! Le bocal ! \n");
											printf ("\n Paulo : Le... oh nom d'un bouc !\n");
											printf ("\n En quelques secondes, Paulo le Nouveau s'elance vers le bocal et se jette au sol, glissant sur ses chaussettes pour slider au sol afin d'attrapper le bocal au vol en evitant la patte de la manticore.\n");
											printf ("\n Paulo : Rancuniere ! L'incantation !\n");
											printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
											printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
											printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
											printf ("\n VICTOIRE... ?\n");
										}
										
										if(repPlayer==3 && tamponRepPlayer==1){
											tamponRepPlayer=4;
											printf ("\n Ah tiens non. L'evoloution n'a pas permis a un predateur de ne pas voir ses proies. Surprenant. Du fait, les lois de la nature s'appliquent avec violence a votre cas...\n");
											printf ("\n Allez, recommencez. Et n'oubliez pas qu'on est pas chez Spielberg, ici...\n");
										}
									}
									
									if(repPlayer==2 && tamponRepPlayer==3){
										tamponRepPlayer=4;
										printf ("\n Crier n'est probablement pas la meilleure idee du monde quand on veut se faire discret.\n");
										printf ("\n Je me retiendrais de parler de selection naturelle et vous conseillerais simplement de reessayer... une fois que vous aurez fini d'etre digere.\n");
									}
									
									if(repPlayer==3 && tamponRepPlayer==3){
										tamponRepPlayer=3;
										printf ("\n Vous tournez les talons, attirant immediatement l'attention de la manticore, qui se precipite en beuglant a vos trousses !\n");
										printf ("\n Vous foncez vers Paulo et Rancuniere, en esperant qu'ils vous sauveront du monstre, mais ces derniers s'esquivent d'un pas sur le cote, vous cedant le passage autant qu'a la creature...\n");
										printf ("\n Que Paulo attrappe immediatement par la queue et entreprend d'escalader ! Rancuniere, quand a elle, insuffle une vive lueur doree dans ses chaussures et se precipite a vos trousses.\n");
										printf ("\n Frappant la manticore dans l'oeil gauche, Paulo la fait deriver sur la droite, la poussant a se cogner contre un mur en permettant a Rancuniere de vous rejoindre.\n");
										printf ("\n Rancuniere : Le bocal ! C'est toi qui l'a ?\n");
										printf ("\n Paulo : Evidement qu'il l'a !\n");
										printf ("\n Rancuniere : Est-ce que tu l'a !?\n");
										printf ("\n Vos jambes commencent a faiblir. Paulo n'a pas l'air de parvenir a ralentir suffisament la manticore pour que vous y echappiez encore longtemps...\n");
										printf ("\n************************************************ \n");
										printf ("\n1) Vous vous plaquez au sol, en esperant que la manticore vous evitera. \n");
										printf ("\n2) Vous donnez le bocal a Rancuniere. \n");
										printf ("\n3) Vous suppliez Rancuniere de vous porter.\n");
										printf ("\n************************************************ \n");
											
										scanf("%d", &repPlayer);
										if(repPlayer==1 && tamponRepPlayer==3){
											tamponRepPlayer=4;
											printf ("\n Ah. Non. Elle ne vous a pas evite. C'est lourd une manticore. Tres lourd. Et c'est fragile, une tete.\n");
											printf ("\n Vous avez perdu, je crois que c'est assez evident. Vous devriez peut-etre reessayer... non ?\n");
										}
											
										if(repPlayer==2 && tamponRepPlayer==3){
											tamponRepPlayer=2;
											printf ("\n Vous tendez le bocal a Rancuniere, qui s'en empare immediatement en recitant une incantation magique qui fait s'illuminer le recipent d'une petite lueur bleue.\n");
											printf ("\n Rancuniere : paulo ! Attrappe !\n");
											printf ("\n Rancuniere jette le bocal a Paulo, mais la manticore decide soudain de freiner pour le faire descendre. Paulo s'aggrippe comme il peut mais bascule juste devant la gueule de la manticore !\n");
											printf ("\n En freinant pour faire demi-tour, Rancuniere derape et s'etale par terre, laissant echapper le bocal qui s'en va rouler derriere la manticore !\n");
												
											printf ("\n************************************************ \n");
											printf ("\n1) Vous foncez a la rescousse de Paulo ! \n");
											printf ("\n2) Vous tentez de recuperer le bocal. \n");
											printf ("\n3) Vous n'allez pas risquer votre peau a les aider, non mais pas fou non !\n");
											printf ("\n************************************************ \n");
												
											scanf("%d", &repPlayer);
											if(repPlayer==1 && tamponRepPlayer==2){
												tamponRepPlayer=4;
												printf ("\n Dans un elan de courage incroyable vous foncez vers la manticore et poussez Paulo au moment ou le monstre allait refermer ses machoires sur le jeune garcon. Vous etes un heros !\n");
												printf ("\n Bon. Un heros mort, puisque lesdites machoires se referment sur vous a la place. Mais un heros !\n");
												printf ("\n Alors est-ce que c'est VRAIMENT une defaite ? (oui. completement.)\n");
											}
												
											if(repPlayer==2 && tamponRepPlayer==2){
												tamponRepPlayer=2;
												printf ("\n Vous foncez vers le bocal en esquivant la manticore comme vous pouvez. Alors que le monstre allait refermer ses machoires sur Paulo, Rancuniere tire violement son ami par les jambes, le mettant hors de portee de la creature.\n");
												printf ("\n Vous profitez de la diversion pour vous emparer du bocal mais la manticore a compris ce que vous aviez en tete et se retourne vers vous en bavant de rage !\n");
												printf ("\n************************************************ \n");
												printf ("\n Vous lui jetez le bocal dessus.\n");
												printf ("\n Vous reposez le bocal en esperant qu'elle vous pardonnera\n");
												printf ("\n Vous changez d'avis et tournez les talons.\n");
												printf ("\n************************************************ \n");
													
													
												if(repPlayer==1 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n Vous jetez le bocal ensorcele sur la manticore. Dans un petit 'bump' assez embarassant, le recipient rebondit sur la creature et vous revient dessus, goulot en avant...\n");
													printf ("\n Par le sortilege, vous etes aspire dans le bocal in-extremis. Au moins vous etes en securite...\n");
													printf ("\n Mais on peut dire que vous avez bien tout gache. Oh bien sur, Paulo et Rancuniere vont s'en sortir. Et la manticore ira dans un autre bocal. Mais vous etes vire. Vire a vie.\n");
													printf ("\n Tapadkoeur : VOUS AVEZ PERDU ! ET C'EST BIEN MERITE, BOUGRE DE RESIDUT PROLETAIRE ! RESTEZ DANS VOTRE BOCAL, TANT QUE VOUS Y ETES !\n");
													printf ("\n Peut-etre devrions nous reprendre a zero, je crois que quelque chose ne s'est pas passe comme prevu...\n");
												}
													
												if(repPlayer==2 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n Vous reposez doucement le bocal et adressant un petit sourire desole a la creature. Pas de chance, elle s'en contremoque et se jette sur vous, toutes griffes dehors !\n");
													printf ("\n En hurlant, vous reculez d'un pas. Et, alors que les griffes du monstre ne sont plus qu'a quelques millimetres de votre visage, la manticore se fige...\n");
													printf ("\n En se jetant sur vous, elle a atterrit sur le bocal ! Et c'est dans un hurlement de tous les diables que la creature se fait aspirer dans le recipient.\n");
													printf ("\n Le couloir plonge dans le silence, tandis que vous observer la petite creature s'agiter innutilement dans son bocal et que Paulo et Rancuniere se relevent.\n");
													printf ("\n Paulo : He be... toi... toi t'es au Schnaps.\n");
													printf ("\n Pour avoir sauve deux eleves, epargne a l'ecole d'avoir une creature antropophage rodant dans ses couloirs, fait bien plus que ce que votre stage requerrait, Tapadkoeur vous remercie et vous permet sans probleme de passer l'annee prochaine.\n");
													printf ("\n VICTOIRE DU SCHNAPS !!!\n");
												}
													
												if(repPlayer==3 && tamponRepPlayer==2){
													tamponRepPlayer=4;
													printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
													printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
												}
											}
											
											if(repPlayer==3 && tamponRepPlayer==2){
												tamponRepPlayer=4;
												printf ("\n La manticore vous a visiblement pris en grippe puisqu'elle neglige Paulo et Rancuniere et se jette a vos trousses. Sans Paulo pour la ralentir, il va sans dire que vous ne faites pas le poids a la course.\n");
												printf ("\n Quand bien meme ne vous aurait-elle pas devore, vous l'auriez bien merite. Ca va pas de les abandonner comme ca, non ? J'y tiens, moi, a ces personnages. Allez on recommence. Tss...\n");
											}
										}
										
										if(repPlayer==3 && tamponRepPlayer==3){
											tamponRepPlayer=4;
											printf ("\n En levant les yeux au ciel avec un agacement certain, Rancuniere vous arrache le bocal des mains et l'envoie a Paulo le Nouveau, toujours perche sur la manticore.\n");
											printf ("\n Rancuniere : Paulo ! Attrappe ca !\n");
											printf ("\n Rancuniere recite immediatement une incantation, tandis que Paulo plaque le bout du bocal contre la manticore, la reaspirant dans le petit artefact;\n");
											printf ("\n Dans la bouteille, la creature s'agite avec impuissance tandis que vous vous decolez du mur...\n");
											printf ("\n Vous n'aurez pas servi a grand chose mais c'etait... intense. En tout cas, Paulo le Nouveau, tres aimable, a intercede en votre faveur aupres de Bouketin, qui a lui meme intercede aupres de Tapadkoeur... enfin bref vous avez gagne.\n");
											printf ("\n VICTOIRE... ?\n");
										}
										
										
									}
									
								}
							}
							
							if(repPlayer==3 && tamponRepPlayer==3){
								tamponRepPlayer=4;
								printf ("\n Vous avez bient fait. la creature s'eloigne sans vous avoir vu. Vous vous assurez que Mc Krame souffre le moins possible de ses blessures et, au bout de plusieurs heures, on vient vous chercher.\n");
								printf ("\n La situation a ete maitrise par d'autres eleves, tout va mieux. Pour vous remercier, Mc Krame intercede en votre faveur aupres de Tapadkoeur. le Directeur accepte de vous laisser passer l'annee suivante.\n");
								printf ("\n Vous avez gagne en restant en securite. Bravo. Clap clap. Vous avez reussi a esquiver tout le fun... VICTOIRE...\n");
							}
						}
					
				}
				
				if(repPlayer==3 && tamponRepPlayer==3){
					tamponRepPlayer=4;
					printf ("\n Vous vous rendez dans l'aile Ouest a la recherche d'Olaf le Cat, le chat du Directeur...\n");
					printf ("\n Mais en lieu et place d'un chat a la masse ponderale abusive, c'est une manticore que vous trouvez errant dans les couloirs.\n");
					printf ("\n Il faut savoir que la manticore fait partie de la categorie des superpredateurs. Il s'agit la d'une creature nee pour tuer et devorer tout ce qui bouge. Elle n'a, naturellement, rien a faire dans cet endroit.\n");
					printf ("\n Alors je pense que nous devrions vite recommencer la partie pour comprendre ce que cet animal fiche la, avant de nous faire devorer, vous en dites quoi ? hein ? oui hein.\n");
				}
			
		
	
	
	
	
	
		}
	return 0;
}