#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include "clients.h"

void displayCmdsClient(Commande* head, std::string client)
{
    Commande* current = head;
    std::string commandesByClient;
    while (current != NULL)
    {
        if (current->expediteur == client)
            commandesByClient = commandesByClient + "\n" + current->expediteur;
        else
            current = current->suivant;
    }
    cout << commandesByClient;
};

void biscuitPopularite(Commande* head, Biscuit* head2) {
    Commande* pos = head;
    Biscuit* pos2 = head2;
    while (pos != NULL)
    {
        pos->biscuits.nomBiscuit
    }

};

int main()
{

    LinkedListClt Liste;
    //Liste.pushend();  // Call the method
    ifstream ClientsFile("PRESIDENTS_CLIENTS.txt");
    if (!ClientsFile) {
        cout << "Error in opening the file.";
        exit(-1);
    }
    std::string line;
    int nblines = 0;
    while(ClientsFile >> line)
        std::getline(ClientsFile, line);


    // Check if string contains the character or not

    /*while (std::getline(ClientsFile, line))
        if (line.find('_')) { string name = line }
        else if (std::isdigit(line)) { string name = line }
        else (x == 1) { string name = line }*/



    string temptxt;
    string name = line;
    int numciv = 0;
    string adresse = line;
    //while (ClientsFile >> txtlist) Liste.pushend(txtlist);


    LinkedListClt a;
    while (ClientsFile >> line) a.pushend(name, numciv, adresse);
    LinkedListClt::displayClt(a.gethead());
    return 0;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
