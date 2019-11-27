#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
    ifstream in("duom.txt");
    ofstream out("rez.txt");

    struct grybai{
        string diena;
        int TikriGrybai[3];
        int viso;
    };
 void skaito(grybai Struktura[], int kiekis);
 void raso(grybai Struktura[], int kiekis, string tekstas);
 void suma(grybai Struktura[], int kiekis);
 void rasoSuma(grybai Struktura[], int kiekis, string tekstas);

int main(){

    int kiek;
    in>>kiek;
    cout<<kiek;

    grybai Savaite[kiek];

    skaito(Savaite, kiek);
    raso(Savaite, kiek, "Musu grybai  ");
    suma(Savaite, kiek);
    rasoSuma(Savaite, kiek, "Suma ");

    in.close();
    out.close();
    return 0;
}
void skaito(grybai Struktura[], int kiekis){
    for(int i=0; i<kiekis; i++){

        in>>Struktura[i].diena;
        for(int j=0; j<3; j++){   //skaiciuosim grybus
            in>>Struktura[i].TikriGrybai[j];
        }
    }
}
void raso(grybai Struktura[], int kiekis, string tekstas){
    out<<tekstas<<endl;
    for(int i=0; i<kiekis; i++){
        out<<setw(20)<<left<<Struktura[i].diena;
        for(int j=0; j<3; j++){
             out<<Struktura[i].TikriGrybai[j]<<"  ";

        }out<<endl;}
}
void suma(grybai Struktura[], int kiekis){
    for(int i=0; i<kiekis; i++){
        Struktura[i].viso=0;
        for(int j=0; j<3; j++){
            Struktura[i].viso = Struktura[i].viso + Struktura[i].TikriGrybai[j];
        }}
}
void rasoSuma(grybai Struktura[], int kiekis, string tekstas){
    out<<tekstas<<endl;
    for(int i=0; i<kiekis; i++){
        out<<setw(20)<<left<<Struktura[i].viso;
       out<<endl;}
}
