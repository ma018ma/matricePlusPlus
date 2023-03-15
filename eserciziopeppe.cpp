#include <iostream>
#include <array>
using namespace std;
int main()
{
    int n;
    cout<< " dammi un numero per creare matrice." << endl;
    cin>> n;
    while(n>10){
        cin>>n;
    }
    int matrice[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrice[i][j] = rand() % 9;
        }
    }
    int sommaRiga[n];
    for (int i = 0; i < n; i++)
    {
        sommaRiga[i] = 0;
        for (int j = 0; j < n; j++)
        {
            sommaRiga[i] += matrice[i][j];
            cout << matrice[i][j] << " ";
        }
        cout << "|" << sommaRiga[i] << endl;
    }
    int k = 4;
    cout<< " dammi un numero di colonna;" << endl;
     cin>> k;
     while (k>n)
     {
         cin>> k;
     }
    int sommaColonna = 0;
    for (int i = 0; i < n; i++)
    {
        sommaColonna += matrice[i][k];
    }
    cout << sommaColonna << endl;
    bool uguale = false;
    for (int i = 0; i < n; i++)
    {
        if (sommaRiga[i] == sommaColonna)
        {
            uguale = true;
            break;
        }
    }
    if (uguale == true)
    {
        cout << "la somma della colonna e' uguale alla somma di una riga" << endl;
    }
    else
    {
        cout << "la somma della colonna e' diversa dalla somma di una riga " << endl;
    }
}
