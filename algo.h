#include <iostream>
#include <string>
using namespace std;
class squadra
{
public:
  int CS;
  int GS;
  int GF;
  float quotaCS;
  float quotaGS;
  float quotaGF;
  float punti;
  void aggiungipartita(int GFa,int GSa)
  {
    if(GSa==0)
    {
      punti=punti+quotaCS;
    }
    else
    {
    	if(GSa==1)
    	{
      	punti=punti+1.5;
    	}
    }
    if(GFa>0)
    {
      punti=punti+1.3;
    }
    GF=GF+GFa;
    GS=GS+GSa;
};
  squadra()
  {
    CS=0;
    GS=0;
    GF=0;
    quotaCS=2.5;
    quotaGS=1.5;
    quotaGF=1.3;
    punti=0;
  }
};
squadra Inter;
squadra Napoli;
squadra juventus;
squadra Lazio;
squadra Milan;
squadra Sampdoria;
squadra Roma;
squadra Fiorentina;
squadra Cagliari;
squadra Atalanta;
squadra ChievoVerona;
squadra Bologna;
squadra Spal;
squadra Torino;
squadra Udinese;
squadra Genoa;
squadra Sassuolo;
squadra Crotone;
squadra HellasVerona;
squadra Benevento;

void partita(string squadra1, string squadra2, int goal1, int goal2)
{
  if(squadra1==string("Inter"))
  {
    Inter.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Napoli"))
  {
    Napoli.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("juventus") ||
    squadra1==string("juve"))
  {
    juventus.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Lazio"))
  {
    Lazio.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Milan"))
  {
    Milan.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Torino"))
  {
    Torino.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Sampdoria"))
  {
    Sampdoria.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Roma"))
  {
    Roma.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Fiorentina"))
  {
    Fiorentina.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Cagliari"))
  {
    Cagliari.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Atalanta"))
  {
    Atalanta.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("ChievoVerona") ||
    squadra1==string("Chievo") ||
    squadra1==string("Chievoverona"))
  {
    ChievoVerona.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Bologna"))
  {
    Bologna.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Spal"))
  {
    Spal.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Udinese"))
  {
    Udinese.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Genoa"))
  {
    Genoa.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Sassuolo"))
  {
    Sassuolo.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Crotone"))
  {
    Crotone.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Hellas Verona") || squadra1==string("Hellas")
  || squadra1==string("Verona"))
  {
    HellasVerona.aggiungipartita(goal1,goal2);
  }
  if(squadra1==string("Benevento"))
  {
    Benevento.aggiungipartita(goal1,goal2);
  }
  if(squadra2==string("Inter"))
  {
    Inter.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Napoli"))
  {
    Napoli.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("juventus") ||
    squadra2==string("juve"))
  {
    juventus.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Lazio"))
  {
    Lazio.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Milan"))
  {
    Milan.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Torino"))
  {
    Torino.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Sampdoria"))
  {
    Sampdoria.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Roma"))
  {
    Roma.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Fiorentina"))
  {
    Fiorentina.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Cagliari"))
  {
    Cagliari.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Atalanta"))
  {
    Atalanta.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("ChievoVerona") ||
    squadra2==string("Chievo") ||
    squadra2==string("Chievoverona"))
  {
    ChievoVerona.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Bologna"))
  {
    Bologna.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Spal"))
  {
    Spal.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Udinese"))
  {
    Udinese.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Genoa"))
  {
    Genoa.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Sassuolo"))
  {
    Sassuolo.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Crotone"))
  {
    Crotone.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Hellas Verona") || squadra2==string("Hellas")
  || squadra2==string("Verona"))
  {
    HellasVerona.aggiungipartita(goal2,goal1);
  }
  if(squadra2==string("Benevento"))
  {
    Benevento.aggiungipartita(goal2,goal1);
  }
}
void partite()
{
  partita("a","b",3,0);
  partita("Verona","Napoli",1,3);
  partita("Atalanta","Roma",0,1);
  partita("Bologna","Torino",1,1);
  partita("Crotone","Milan",0,3);
  partita("Inter","Fiorentina",3,0);
  partita("Lazio","Spal",0,0);
  partita("Sampdoria","Benevento",2,1);
  partita("Sassuolo","Genoa",0,0);
  partita("Udinese","Chievo",1,2);
  partita("Benevento","Bologna",1,0);
  partita("Genoa","juventus",2,4);
  partita("Roma","Inter",1,3);
  partita("Torino","Sassuolo",3,0);
  partita("Milan","Cagliari",2,1);
  partita("Napoli","Atalanta",3,1);
  partita("Crotone","Verona",0,0);
  partita("Spal","Udinese",3,2);
  partita("Chievo","Lazio",1,2);
  partita("Fiorentina", "Sampdoria",1,2);
  partita("juventus","Chievo",3,0);
  partita("Inter","Spal",2,0);
  partita("Verona","Fiorentina",0,5);
  partita("Udinese","Genoa",1,0);
  partita("Atalanta","Sassuolo",2,1);
  partita("Cagliari","Crotone",1,0);
  partita("Lazio","Milan",4,1);
  partita("Benevento","Torino",0,1);
  partita("Bologna","Napoli",0,3);
  partita("Crotone","Inter",0,2);
  partita("Fiorentina","Bologna",2,1);
  partita("Roma","Verona",3,0);
  partita("Sassuolo","juventus",1,3);
  partita("Milan","Udinese",2,1);
  partita("Napoli","Benevento",6,0);
  partita("Spal","Cagliari",0,2);
  partita("Torino","Sampdoria",2,2);
  partita("Chievo","Atalanta",1,1);
  partita("Genoa","Lazio",2,3);
  partita("Bologna","Inter",1,1);
  partita("Benevento","Roma",0,4);
  partita("Atalanta","Crotone",5,1);
  partita("Cagliari","Sassuolo",0,1);
  partita("Genoa","Chievo",1,1);
  partita("juventus", "Fiorentina",1,0);
  partita("Lazio","Napoli",1,4);
  partita("Milan","Spal",2,0);
  partita("Udinese","Torino",2,3);
  partita("Verona", "Sampdoria",0,0);
}
/*void classifica()
{
  for(float i=10000; i>=0; i=i-0.1)
  {
    if(Inter.punti=i)
    {
      cout << "Inter\t" << Inter.punti << endl;
    }
    if(Napoli.punti=i)
    {
      cout << "Napoli\t" << Napoli.punti << endl;
    }
    if(juventus.punti=i)
    {
      cout << "juventus\t" << juventus.punti << endl;
    }
    if(Lazio.punti=i)
    {
      cout << "Lazio\t" << Lazio.punti << endl;
    }
    if(Milan.punti=i)
    {
      cout << "Milan\t" << Milan.punti << endl;
    }
    if(Torino.punti=i)
    {
      cout << "Torino\t" << Torino.punti << endl;
    }
    if(Sampdoria.punti=i)
    {
      cout << "Sampdoria\t" << Sampdoria.punti << endl;
    }
    if(Roma.punti=i)
    {
      cout << "Roma\t" << Roma.punti << endl;
    }
    if(Fiorentina.punti=i)
    {
      cout << "Fiorentina\t" << Fiorentina.punti << endl;
    }
    if(Cagliari.punti=i)
    {
      cout << "Cagliari\t" << Cagliari.punti << endl;
    }
    if(Atalanta.punti=i)
    {
      cout << "Atalanta\t" << Atalanta.punti << endl;
    }
    if(ChievoVerona.punti=i)
    {
      cout << "ChievoVerona\t" << ChievoVerona.punti << endl;
    }
    if(Bologna.punti=i)
    {
      cout << "Bologna\t" << Bologna.punti << endl;
    }
    if(Spal.punti=i)
    {
      cout << "Spal\t" << Cagliari.punti << endl;
    }
    if(Udinese.punti=i)
    {
      cout << "Udinese\t" << Udinese.punti << endl;
    }
    if(Genoa.punti=i)
    {
      cout << "Genoa\t" << Genoa.punti << endl;
    }
    if(Sassuolo.punti=i)
    {
      cout << "Sassuolo\t" << Sassuolo.punti << endl;
    }
    if(Crotone.punti=i)
    {
      cout << "Crotone\t" << Crotone.punti << endl;
    }
    if(HellasVerona.punti=i)
    {
      cout << "Hellas Verona\t" << HellasVerona.punti << endl;
    }
    if(Benevento.punti=i)
    {
      cout << "Benevento\t" << Benevento.punti << endl;
    }
  }
}*/
