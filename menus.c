#include "menus.h"


//###############################  FONCTION POUR AFFICHER L'ECRAN DE BIENVENUE  ###########################################
void afficherBienvenue()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\#################****UDBL - DACTYLOGICIEL****###############\n");
    printf("\n\t\t\t\t\t\t\t\t\#                 ***Membres du projet***                  #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SADIKI SUKARI Joseph                   #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   NDAY KABAMBA Eldad                     #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SAKULA KAJ Given                       #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   MUKALAY MWAMBA Jordine                 #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                         Demarrage                        #\n");
    printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
    sleep(2);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\#################****UDBL - DACTYLOGICIEL****###############\n");
    printf("\n\t\t\t\t\t\t\t\t\#                 ***Membres du projet***                  #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SADIKI SUKARI Joseph                   #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   NDAY KABAMBA Eldad                     #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SAKULA KAJ Given                       #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   MUKALAY MWAMBA Jordine                 #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                        Demarrage.                          #\n");
    printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
    sleep(2);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\#################****UDBL - DACTYLOGICIEL****###############\n");
    printf("\n\t\t\t\t\t\t\t\t\#                 ***Membres du projet***                  #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SADIKI SUKARI Joseph                   #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   NDAY KABAMBA Eldad                     #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SAKULA KAJ Given                       #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   MUKALAY MWAMBA Jordine                 #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                        Demarrage..                       #\n");
    printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
    sleep(2);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\#################****UDBL - DACTYLOGICIEL****###############\n");
    printf("\n\t\t\t\t\t\t\t\t\#                 ***Membres du projet***                  #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SADIKI SUKARI Joseph                   #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   NDAY KABAMBA Eldad                     #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SAKULA KAJ Given                       #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   MUKALAY MWAMBA Jordine                 #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                        Demarrage...                      #\n");
    printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
    sleep(2);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\#################****UDBL - DACTYLOGICIEL****###############\n");
    printf("\n\t\t\t\t\t\t\t\t\#                 ***Membres du projet***                  #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SADIKI SUKARI Joseph                   #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   NDAY KABAMBA Eldad                     #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   SAKULA KAJ Given                       #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                   MUKALAY MWAMBA Jordine                 #\n");
    printf("\n\t\t\t\t\t\t\t\t\#                        Demarrage                         #\n");
    printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
    sleep(2);


}
//###############################  FONCTION POUR AFFICHER LE MENU  ###########################################
void afficherMenu()
{
    system("cls");
    bool continuer = true;
    int option;

    while (continuer)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\#################*******Menu Principal*******###############\n");
        printf("\n\t\t\t\t\t\t\t\t\#                   1. Demarrer                            #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                   2. Configurer                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                   3. Aide                                #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                   0. Quitter le jeu                      #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                    Amusez-vous bien!!                    #\n");
        printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            demarrer();// la fonction pour démarrer une partie
            break;
        case 2:
            // la fonction pour configuerer le jeu
            configurer();
            break;
        case 3:
            // la fonction pour afficher l'aide
            afficherAide();
            break;
        case 0:
            // Possibilité de quitter le jeu
            continuer = false;
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\#################***********Quitter***********###############\n");
            printf("\n\t\t\t\t\t\t\t\t\#                          Au revoir!!                      #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                              et                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                        A La Prochaine!!                   #\n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
            sleep(3);
            return 0;
        default:
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\#################***********Quitter***********###############\n");
            printf("\n\t\t\t\t\t\t\t\t\#                      Option invalide!!                    #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#     Veuillez choisir une option disponible a l'ecran.     #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                           #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                          Ressayez...                      #\n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
            scanf("%d",&option);
            break;
        }
    }

}
