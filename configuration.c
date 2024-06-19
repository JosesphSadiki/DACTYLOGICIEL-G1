#include "configuration.h"


//###############################  FONCTION POUR CONFIGURER  ###########################################
void configurer()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\*################========Patientez...======== ##############*\n");
    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   Configuration du jeu...                 #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
    printf("\n\t\t\t\t\t\t\t\t\*###########################################################*\n");
    sleep(3);
    int pin;
    bool continuer = true;
    int essaie = 1;
    int option;
    while (continuer)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\*###############=========Avertissement=========#############*\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                         Attention!!                       #\n");
        printf("\n\t\t\t\t\t\t\t\t\#              Cette option necessite uniquement            #\n");
        printf("\n\t\t\t\t\t\t\t\t\#           la presence des administrateurs du jeu          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
        printf("\n\t\t\t\t\t\t\t\t\#    Etes-vous administrateur ?  [ 1 pour oui/0 pour non ]  #\n");
        printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*###############======Systeme de securite======#############*\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#   Cher(e) administrateur, veuillez taper votre code pin   #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                             Svp                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
            scanf("%d",&pin);
            while (pin != 1234 )
            {
                if (essaie == 3)
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n");
                    printf("\n\t\t\t\t\t\t\t\t\*##############=========Systeme bloque=========#############*\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#         Trop de tentatives, retour au Menu accueil        #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                       dans 10 secondes                    #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                    printf("");
                    sleep(10);
                    return 0;
                }
                system("cls");
                essaie += 1;
                printf("\n\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t\t\t\t\*##############========code pine errone========#############*\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#         Oups!!! Code pin incorrect. (essaie %d/3)          #\n",essaie);
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                          Reessayez                        #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                scanf("%d",&pin);

            }
            char mot[50];
            FILE *fichier;
            fichier = fopen("mots.txt","a");

            if (fichier == NULL)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t\t\t\t\*############=========Erreur du systeme========#############*\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#            Erreur lors de l'ouverture du fichier.         #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                return;
            }
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*##############=========Configuration==========#############*\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#   Entrez un mot (ou 'q' pour quitter la configuration) :  #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
            scanf("%s", mot);

            while (strcmp(mot, "q") != 0)
            {
                fprintf(fichier, "%s\n", mot);
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t\t\t\t\*###############==========Validation==========##############*\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                 Mot enregistre avec succès.               #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
                printf("\n\t\t\t\t\t\t\t\t\#                     Entrez un autre mot                   #\n");
                printf("\n\t\t\t\t\t\t\t\t\#            (ou 'q' pour quitter la configuration)         #\n");
                printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
                scanf("%s", mot);
                break;
            }

            fclose(fichier);

            return 0;
        case 0:
            continuer = false;
            return continuer;
        default:
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*############=========Erreur de saisis=========#############*\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                 Option invalide. Ressayez...              #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#############################################################\n");
            scanf("%d",&option);
            return 0;
        }
    }

}
