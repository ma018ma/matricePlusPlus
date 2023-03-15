/*L'esercizio consiste nell'utilizzare le matrici per 
memorizzare i voti di un gruppo di studenti in un esame. 
Per ogni studente si vogliono memorizzare i voti delle 
diverse prove (ad esempio, scritto, orale, ecc.). Si 
supponga inoltre che il numero di studenti e il numero di 
prove sia noto a priori.*/

#include <iostream>
 
using namespace std;
 
int main()
{
    int studenti = 4;// righe
    int prove = 2;// colonne
    char empty = '-';
    int voto[studenti][prove];
 
    // fill matrix with ' '
    for (int i = 0; i < studenti; i++)
    {
        for (int j = 0; j < prove; j++)
        {
            cout << " inserisci il voto dello studente " << i + 1 << " nella prova " << j+1 << endl;
            cin >> voto[i][j];
        }
    }
    cout << " i voti degli studenti sono : " << endl;

    for (int i = 0; i < studenti; i++)
    {
        cout << "studente: " << i +1 << endl;
            for (int j = 0; j< prove; j++)
            {
                cout << voto[i][j] << endl;
            }
    }
 
}