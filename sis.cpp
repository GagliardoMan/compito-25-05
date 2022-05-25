#include<iostream>
using namespace std;
int n,i;
float s,m,a[21];
char risposta='s';
void titolo()
{
 system("cls"); //pulisce lo schermo
 cout<<"Esercitazione Classe IVB Informatica Proff. Mauro De Berardis - Sonia Bruni";
 cout<<"\nITIS TERAMO Anno Scolastico 2009-2010 Data: ";
 system("date/t"); // scrive la data corrente e non chiede di aggiornarla
 cout<<endl; // in alternativa cout<<"\n"
}
int main()
{
 while(risposta!='n' || risposta!='N')// Fin tanto che la risposta non è ='n' e non è='N'
 {
 titolo(); // richiama la funzione che stampa l'intestazione
 for(;;) //loop infinito che serve a controllare che n sia >=10 e<=20
 {
 cout<<"\n\tQuanti sono gli elementi del vettore? ";
 cin>>n;
 if (n>=10 && n<=20)
 {break;} // solo se n>=10 e <=20 si esce dal loop infinito
 }
 s=0;
 cout<<"\n\n";
 for(i=1;i<=n;) //tecnica del loop 'monco'
 {
 cout<<"\tInserire a["<<i<<"]: ";
 cin>>a[i];
 if (a[i]>0)
 { s=s+a[i];
 i++;
 } // la var di controllo i si incrementa solo se a[i]>0
 } //chiude il for
 m=s/n;
 cout<<"\n\n\tSomma=\t"<<s;
 cout<<"\n\n\tMedia=\t"<<m;
 cout<<"\n\n\tAltri calcoli? ";
 cin>>risposta;
 } //chiude loop while(risposta......)
 return 0;
} // chiude sequenza di main() 

