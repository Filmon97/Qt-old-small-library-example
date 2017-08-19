#include "rubrica.h"
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
/**
 * @brief Rubrica::Rubrica
 * Costruttore
 */
Rubrica::Rubrica()
{
    head=NULL;// inizializzo la testa a null
    n=0;// inizializzo la variabile n a 0
}
/**
 * @brief Rubrica::inserimento
 * @param cognome
 * @param nome
 * @param data_di_nascita
 * funzione di inserimento
 */
void Rubrica::inserimento(char cognome[] , char nome[], char data_di_nascita[], char provincia[], char residenza[])
{
    cout<<endl;
    Contatto* nuovo = new Contatto;
    strcpy(nuovo->nome,nome);
    strcpy(nuovo->cognome,cognome);
    strcpy(nuovo->data_di_nascita,data_di_nascita);
    strcpy(nuovo->provincia,provincia);
    strcpy(nuovo->residenza,residenza);
    nuovo->next = NULL;

    if (this->head == NULL){
        this->head = nuovo;
    }
    else
    {   //la testa c'è
        Contatto* p = this->head;
        while(p->next!=NULL && p->cognome < cognome){
            p = p->next;
        }
        while(p->next!=NULL && p->cognome == cognome && p->next->nome < nome){
            p = p->next;
           }

        //inserisco
        nuovo->next = p->next;
        p->next = nuovo;
    }
}



