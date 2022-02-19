using namespace std;
#include <string>
#include <fstream>
#include <iostream>


typedef struct Client Client;
struct Client
{
    std::string name;
    int numciv;
    std::string adresse;
    Client* suivant;
};

class LinkedListClt
{
private:
    Client* head, * tail;
public:
    LinkedListClt()
    {
        head = NULL;
        tail = NULL;
    }
    //~LinkedList();
    Client* gethead()
    {
        return head;
    }

    static void displayClt(Client* head)
    {
        if (head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->name << endl;
            cout << head->numciv << endl;
            cout << head->adresse << endl;
            displayClt(head->suivant);
        }
    }
    
    void pushend(string nam, int num, string adr)
    {
        Client* tmp = new Client;
        tmp->name = nam;
        tmp->numciv = num;
        tmp->adresse = adr;

        tmp->suivant = NULL;

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->suivant = tmp;
            tail = tail->suivant;
        }
    }

    void pushfront(string nam, int num, string adr)
    {
        Client* tmp = new Client;
        tmp->name = nam;
        tmp->numciv = num;
        tmp->adresse = adr;
        tmp->suivant = head;
        head = tmp;
    }

    void pushin(Client* a, string nam, int num, string adr)
    {
        Client* x = new Client;
        x->name = nam;
        x->numciv = num;
        x->adresse = adr;
        x->suivant = a->suivant;
        a->suivant = x;
    }
    void del(Client* refdel)
    {
        Client* temp;
        temp = refdel->suivant;
        refdel->suivant = temp->suivant;
        delete temp;
    }
};


struct Biscuit
{

    string nomBiscuit;
    int quantite;
    int prix;
    Biscuit* suivant;

};

typedef struct Commande Commande;
struct Commande
{
    std::string expediteur;
    std::string receveur;
    struct Biscuit biscuits;
    Commande* suivant;
};
class LinkedListCmd
{
private:
    Commande* head, * tail;
public:
    LinkedListCmd()
    {
        head = NULL;
        tail = NULL;
    }
    //~LinkedList();
    Commande* gethead()
    {
        return head;
    }

    static void displayCmd(Commande* head)
    {
        if (head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->expediteur << endl;
            cout << head->receveur << endl;
            cout << head->biscuits << endl;
            cout << head->nombre << endl;

            displayCmd(head->suivant);
        }
    }

    void pushendCmd(string exp, string rec, char items, int nbr)
    {
        Commande* tmp = new Commande;
        tmp->expediteur = exp;
        tmp->receveur = rec;
        tmp->biscuits = items;
        tmp->nombre = nbr;

        tmp->suivant = NULL;

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->suivant = tmp;
            tail = tail->suivant;
        }
    }

    void pushfrontCmd(string exp, string rec, char items, int nbr)
    {
        Commande* tmp = new Commande;
        tmp->expediteur = exp;
        tmp->receveur = rec;
        tmp->biscuits = items;
        tmp->nombre = nbr;
        tmp->suivant = head;
        head = tmp;
    }

    void pushinCmd(Commande* a, string exp, string rec, char items, int nbr)
    {
        Commande* x = new Commande;
        x->expediteur = exp;
        x->receveur = rec;
        x->biscuits = items;
        x->nombre = nbr;
        x->suivant = a->suivant;
        a->suivant = x;
    }
    void delCmd(Commande* refdel)
    {
        Commande* temp;
        temp = refdel->suivant;
        refdel->suivant = temp->suivant;
        delete temp;
    }
};