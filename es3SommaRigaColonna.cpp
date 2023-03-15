/*Crea una matrice quadrata piena di numeri random 0-9
Crea poi il vettore risultato somma di colonne e di righe
dalla matrice iniziale.*/

#include <iostream>
using namespace std;
int main()
{
    int righe = 4;
    int colonne = 4;
    int matrice[righe][colonne];
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = rand() % 5;
        }
    }
        //   somma
    int sommaRiga = 0;
    for (int i = 0; i < colonne; i++)
    {
        sommaRiga = 0;
        for (int j = 0; j < righe; j++)
        {
            sommaRiga += matrice[i][j];
            cout<< matrice[i][j] << "  " ;
        }

        cout << " |"<< sommaRiga << endl;
    }
    int sommaColonna = 0;
    cout << "--------------------------------------------------------" << endl; 
    for (int i = 0; i < righe; i++)
    {
        sommaColonna = 0;
        for (int j = 0; j < colonne; j++)
        {
            sommaColonna += matrice[j][i];
        }
        cout << sommaColonna << "  ";
    }

    // fino qui
    // da qua
}