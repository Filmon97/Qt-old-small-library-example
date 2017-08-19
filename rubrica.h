#ifndef RUBRICA_H
#define RUBRICA_H
#include <iostream>

using namespace std;

struct Contatto
{
    /// @var char nome
    /// @brief Vettore di caratteri per il nome.
    ///
    /// @var char cognome
    /// @brief Vettore di caratteri per il cognome.
    ///
    /// @var int data_di_nascita
    /// @brief Variabile intera per la data_di_nascita.
    ///
    ///@variabile puntatore Contatto
    Contatto *next;
    char cognome[50];
    char nome[50];
    char data_di_nascita[10];
    char provincia[3];
    char residenza[3];
};

class Rubrica
{
private:
   Contatto *head;
   int n;

public:
   Rubrica();
   void inserimento(char cognome[] , char nome[], char data_di_nascita[], char provincia[], char residenza[]);

};

#endif // RUBRICA_H

