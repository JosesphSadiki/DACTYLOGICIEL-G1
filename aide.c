#include "aide.h"

//###############################  FONCTION POUR AFFICHER LE MENU AIDE  ###########################################
void afficherAide()
{

    int option;
    bool continuer = true;
    while (continuer)
    {
        while (continuer)
        {
            system("cls");
            {
                printf("\n\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t\t\t\t\*#############==============Aide===============#############*\n");
                printf("\n\t\t\t\t\t\t\t\t\#              1. Description de l'application              #\n");
                printf("\n\t\t\t\t\t\t\t\t\#              2. la version du jeu                         #\n");
                printf("\n\t\t\t\t\t\t\t\t\#              3. Les concepteurs                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#              4. La date de conception                     #\n");
                printf("\n\t\t\t\t\t\t\t\t\#              5. Autres informations                       #\n");
                printf("\n\t\t\t\t\t\t\t\t\#              0. Retour                                    #\n");
                printf("\n\t\t\t\t\t\t\t\t\#              Choisisez une option :                       #\n");
                printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                int choix = 0;
                scanf("%d", &choix);
                switch(choix)
                {
                case 1:
                    system("cls");
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\*#############==============Aide===============#############*\n");
                        printf("\n\t\t\t\t\t\t\t\t\#    UDBL-DACTYLOGICIEL est un jeu conçu pour vous aider    #\n");
                        printf("\n\t\t\t\t\t\t\t\t\# a ameliorer vos competences de frappe au clavier.         #\n");
                        printf("\n\t\t\t\t\t\t\t\t\# Il vous propose des series des mots aleatoires            #\n");
                        printf("\n\t\t\t\t\t\t\t\t\# pour vous entrainer à taper rapidement et precisement.    #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#   ============================================            #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                    }
                    break;
                case 2:
                    system("cls");
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\*#############============Version:=============#############*\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                         1.0.0                             #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#       ============================================        #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                    }
                    break;
                case 3:
                    system("cls");
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\*#############==========Concepteurs:===========#############*\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                 Mr.SADIKI SUKARI Joseph                   #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                 Mr.NDAY KABAMBA Eldad                     #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                 Mlle.SAKULA KAJ Given                     #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                 Mlle.MUKALAY MWAMBA Jordine               #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#       =============================================       #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");

                    }
                    break;
                case 4:
                    system("cls");
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\*#############======La date de conception:======############*\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                        09.06.2024                         #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#       =============================================       #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                    }
                    break;
                case 5:
                    system("cls");

                    {
                        printf("\n\n\n\n\n\n\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\========Autres informations=========\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\*#################============Comment jouer:============################*\n");
                        printf("\n\t\t\t\t\t\t\t\t\# 1. Selectionnez \"Demarrer\" dans le menu principal.      #\n");
                        printf("\n\t\t\t\t\t\t\t\t\# 2. Entrez le nombre de mots par partie et les pseudonymes des joueurs.#\n");
                        printf("\n\t\t\t\t\t\t\t\t\# 3. Tapez les mots affiches à l'ecran le plus rapidement possible.     #\n");
                        printf("\n\t\t\t\t\t\t\t\t\# 4. Le joueur avec le temps de frappe le plus court gagne la partie !  #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                                       #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#             ================================================          #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                                       #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#########################################################################\n");
                        printf("\n\n\n\n\n\n\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\*#################=========Nos conseils:=========################*\n");
                        printf("\n\t\t\t\t\t\t\t\t\#        Pour s'ameliorer il devez :                             #\n");
                        printf("\n\t\t\t\t\t\t\t\t\# - Utilisez tous vos doigts pour taper .                        #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#   et evitez de taper avec un seul doigt                        #\n");
                        printf("\n\t\t\t\t\t\t\t\t\# - Regardez le clavier uniquement lorsque cela est necessaire,  #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#   essayez de taper en regardant l'ec                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\# - Pratiquez régulierement pour ameliorer votre vitesse         #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#   et votre precision.                                          #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#   ===================================================          #\n");
                        printf("\n\t\t\t\t\t\t\t\t\##################################################################\n");
                        printf("\n\n\n\n\n\n\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\*###############=========Nos attentes=========##############*\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#  Nous esperons que vous apprecierez UDBL-DACTYLOGICIEL!   #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#             Bonne chance et amusez-vous bien !            #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#       =============================================       #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                    }
                    break;
                case 0:
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n");
                    printf("\n\t\t\t\t\t\t\t\t\*#################=========Quitter=========#################*\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                        Retour menu...                     #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#       =============================================       #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                    sleep(3);
                    return;
                default:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n");
                    printf("\n\t\t\t\t\t\t\t\t\*#############=========Option invalide=========#############*\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#         Choisisez une option disponible a l'ecran         #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                          De 0 a 5                         #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#       =============================================       #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                    scanf("%d",&option);
                    break;
                }
                break;
                }
            }
            printf("\n");
            printf("\n");
            printf("Retour au menu principal [0]\n");
            printf("============================================\n");
            scanf("%d",&option);
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*#################=========Quitter=========#################*\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                        Retour menu...                     #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#       =============================================       #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
            sleep(3);
            system("cls");
            return 0;
        }
        return 0;
    }
}
