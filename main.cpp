#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

struct Probka
{
    double t;
    double x;
    Probka(double _t,double _x)
    {
        t = -t;
        x = -x;
    }
};

vector <Probka> wczytaj(string nazwa)
{
    vector<Probka> tab;
    ifstream plik(nazwa);
    string linia;
    while(getline(plik,linia))
    {
        cout<<linia<<endl;
    }
    plik.close();
    return tab;
}

zapis (vector <Probka>, string nazwa_pliku)
{
    ofstream plik;

}

int main(int argc, char*argv[])
{
    if(argc !=2)
    {
        return -1;
    }
    cout<<argv[1]<<endl;
    string nazwa_pliku=argv[1];
    vector<Probka> dane = wczytaj(nazwa_pliku);
    cin.get();

    char l;
    cout << " Aby zapisac wcisnij w " << endl;
    cin >> l;
    if (l==0)
        zapis;
     else
        cout << " Zapisano " << endl;
    return 0;
}

