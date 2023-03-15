/*Crea una matrice quadrata piena di numeri random 0-9
- Stampa la matrice invertendo le righe
- Stampa la matrice invertendo le colonne
- Stampa la matrice trasposta*/
#include <iostream>
using namespace std;
int main()
{
    int righe = 4;
    int colonne = 4;
    int matrice[righe][colonne];
    
    for (int i = 0; i < righe; i++)
    {
        for(int j = 0; j< colonne; j++)
        {
            matrice[i][j] = rand() % 10;
            cout<< matrice[i][j] << " ";
        }
        cout<< endl;
    }
    cout<< "-----------------------------------" << endl;
    cout << "righe invertite" << endl;
    for (int i = righe -1;i >= 0; i--)
    {
        for (int j = 0; j< colonne; j++)
        {
            cout << matrice[i][j] << " "; 
        }
        cout << endl;
    }
        cout<< "-----------------------------------" << endl;
        cout<<"colonne invertite"<< endl;
    for (int i = 0;i < righe; i++)
    {
        for (int j = colonne -1; j >=0; j--)
        {
            cout << matrice[i][j] << " "; 
        }
        cout << endl;
    }
        cout<< "-----------------------------------" << endl;
        cout<<"traspostare"<< endl;
    for (int i = 0;i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            cout << matrice[j][i] << " "; 
        }
        cout << endl;
    }


}