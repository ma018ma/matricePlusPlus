/*Crea una matrice quadrata piena di numeri random 0-9
Crea poi il vettore risultato prendendo i soli numeri
divisibili per 3 dalla matrice iniziale.*/
#include <iostream>
using namespace std;
int main()
{
    int righe = 10;
    int colonne = 10;
    int matrice[righe][colonne];
    
    for (int i = 0; i < righe; i++)
    {
        for(int j = 0; j< colonne; j++)
        {
            matrice[i][j] = rand() % 10;
        }
    }
        cout << "    ";
    for (int i = 0; i < colonne; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int trattini = colonne * 2 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < righe; i++)
    {

        cout << i << "|  ";

        for (int j = 0; j < colonne; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    int quanti = 0;
    for (int i =0;i <righe; i++)
    {       
        for (int j = 0; j < colonne; j++)
        {
            if (matrice[i][j] % 3 == 0 & matrice[i][j] != 0) 
            {
                quanti ++;   
            }
        }
    }
    cout << quanti << endl;       
    int arreyN[quanti];
    int primoNumero = 0;
    for (int i =0;i <righe; i++)
    {       
        for (int j = 0; j < colonne; j++)
        {
            if (matrice[i][j] % 3 == 0 & matrice[i][j] != 0) 
            {
                arreyN[primoNumero] = matrice[i][j];
                primoNumero++;
            }
        }
    }
for(int i= 0; i< quanti; i++)
{
    cout << arreyN[i] << ", "; 
}
}
       