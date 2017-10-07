//Questo è il file principale del programma
/*
    Copyright (C) 2017 carzacc
    This file is part of lanostraseriea.

    lanostraseriea is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    lanostraseriea is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with lanostraseriea.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "include/algo.h"

//Squadre della Serie A
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

// Definizione costruttorte

float squadra::getPunti()
{
	return punti;
}
float squadra::getPuntiTrad()
{
	return puntiTrad;
}

squadra::squadra()
{
  CS=0;
  GS=0;
  GF=0;
  quotaCS=2.5;
  quotaGS=1.5;
  quotaGF=1.3;
  punti=0;
  puntiTrad=0;
}
/* 
Questa gigantesca funzione analizza il risultato e invia goal fatti e subiti per ogni partita alla funzione
aggiungipartita()
*/
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
/*
Questa funzione, a partire dai goal fatti e subiti da ogni squadra
in ogni partita, calcola i punti da assegnare ad ogni squadra per ogni
partita
*/
void squadra::aggiungipartita(int GFa, int GSa)
{
  if(GFa>GSa)
  {
    puntiTrad=puntiTrad+3;
  }
    if(GFa==GSa)
  {
    puntiTrad=puntiTrad+1;  
  }

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
}
int main(int argc, char** argv)
{
  int ultimagiornata=6;  
  if(argc!=1){
  int giornate = stoi(argv[1]);
  partite(giornate);
  }
  else
  partite(ultimagiornata);
  //classifica();
  cout << "Inter\t\t" << Inter.getPunti() << "\t\tTrad\t" << Inter.getPuntiTrad() << "\tSomma\t" << Inter.getPunti()+Inter.getPuntiTrad() <<  endl;
  cout << "Napoli\t\t" << Napoli.getPunti() << "\t\tTrad\t" << Napoli.getPuntiTrad() << "\tSomma\t" << Napoli.getPunti()+Napoli.getPuntiTrad() <<  endl;
  cout << "juventus\t" << juventus.getPunti() << "\t\tTrad\t" << juventus.getPuntiTrad() << "\tSomma\t" << juventus.getPunti()+juventus.getPuntiTrad() <<  endl; 
  cout << "Lazio\t\t" << Lazio.getPunti() << "\t\tTrad\t" << Lazio.getPuntiTrad() << "\tSomma\t" << Lazio.getPunti()+Lazio.getPuntiTrad() <<  endl;
  cout << "Milan\t\t" << Milan.getPunti() << "\t\tTrad\t" << Milan.getPuntiTrad() << "\tSomma\t" << Milan.getPunti()+Milan.getPuntiTrad() <<  endl;
  cout << "Torino\t\t" << Torino.getPunti() << "\t\tTrad\t" << Torino.getPuntiTrad() << "\tSomma\t" << Torino.getPunti()+Torino.getPuntiTrad() <<  endl;
  cout << "Sampdoria\t" << Sampdoria.getPunti() << "\t\tTrad\t" << Sampdoria.getPuntiTrad() << "\tSomma\t" << Sampdoria.getPunti()+Sampdoria.getPuntiTrad() <<  endl;
  cout << "Roma\t\t" << Roma.getPunti() << "\t\tTrad\t" << Roma.getPuntiTrad() << "\tSomma\t" << Roma.getPunti()+Roma.getPuntiTrad() <<  endl;
  cout << "Fiorentina\t" << Fiorentina.getPunti() << "\t\tTrad\t" << Fiorentina.getPuntiTrad() << "\tSomma\t" << Fiorentina.getPunti()+Fiorentina.getPuntiTrad() <<  endl; 
  cout << "Cagliari\t" << Cagliari.getPunti() << "\t\tTrad\t" << Cagliari.getPuntiTrad() << "\tSomma\t" << Cagliari.getPunti()+Cagliari.getPuntiTrad() <<  endl;  
  cout << "Atalanta\t" << Atalanta.getPunti() << "\t\tTrad\t" << Atalanta.getPuntiTrad() << "\tSomma\t" << Atalanta.getPunti()+Atalanta.getPuntiTrad() <<  endl; 
  cout << "Chievo\t\t" << ChievoVerona.getPunti() << "\t\tTrad\t" << ChievoVerona.getPuntiTrad() << "\tSomma\t" << ChievoVerona.getPunti()+ChievoVerona.getPuntiTrad() <<  endl;
  cout << "Bologna\t\t" << Bologna.getPunti() << "\t\tTrad\t" << Bologna.getPuntiTrad() << "\tSomma\t" << Bologna.getPunti()+Bologna.getPuntiTrad() <<  endl;
  cout << "Spal\t\t" << Spal.getPunti() << "\t\tTrad\t" << Spal.getPuntiTrad() << "\tSomma\t" << Spal.getPunti()+Spal.getPuntiTrad() <<  endl;
  cout << "Udinese\t\t" << Udinese.getPunti() << "\t\tTrad\t" << Udinese.getPuntiTrad() << "\tSomma\t" << Udinese.getPunti()+Udinese.getPuntiTrad() <<  endl;
  cout << "Genoa\t\t" << Genoa.getPunti() << "\t\tTrad\t" << Genoa.getPuntiTrad() << "\tSomma\t" << Genoa.getPunti()+Genoa.getPuntiTrad() <<  endl;
  cout << "Sassuolo\t" << Sassuolo.getPunti() << "\t\tTrad\t" << Sassuolo.getPuntiTrad() << "\tSomma\t" << Sassuolo.getPunti()+Sassuolo.getPuntiTrad() <<  endl;
  cout << "Crotone\t\t" << Crotone.getPunti() << "\t\tTrad\t" << Crotone.getPuntiTrad() << "\tSomma\t" << Crotone.getPunti()+Crotone.getPuntiTrad() <<  endl;  
  cout << "Hellas Verona\t" << HellasVerona.getPunti() << "\t\tTrad\t" << HellasVerona.getPuntiTrad() << "\tSomma\t" << HellasVerona.getPunti()+HellasVerona.getPuntiTrad() <<  endl;
  cout << "Benevento\t" << Benevento.getPunti() << "\t\tTrad\t" << Benevento.getPuntiTrad() << "\tSomma\t" << Benevento.getPunti()+Benevento.getPuntiTrad() <<  endl;
  return 0;
}
