#include <iostream>
#include <array>
using namespace std;

bool presente(int arrey[],int x, int dim)
{
    for(int i =0;i<dim;i++)
    {
        if(arrey[i]== x){
            return true;
        }
    }
}
int main()
{
    int n=0;
    int m=0;
    int q=0;
    cout<< "dammi un numero di righe" << endl;
    cin >> n;
    cout << "dammi un numero di colonne" << endl;
    cin >> m;
    cout << "dammi un numero Q per la lista di interi" << endl;
    cin >> q;
    int matrice[n][m];
    int arrey[q];
    int contatore = 0;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            matrice[i][j] = rand() %10;
            std::cout<< matrice [i][j] << endl;
        }
        std::cout<< endl;
    }
    for (int i=0;i<q;i++)
    {
        arrey[i] = rand() %10;
        std::cout << arrey[i];
    }
    for(int i= 0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            if(!presente(arrey,matrice[i][j],q))
            {
                    contatore++;
            }
                
        }
    }
    std::cout<< contatore << endl;
}