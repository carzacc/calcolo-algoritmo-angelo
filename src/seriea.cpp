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
  cout << "Inter\t\t" << Inter.punti << "\t\tTrad\t" << Inter.puntiTrad << "\tSomma\t" << Inter.punti+Inter.puntiTrad <<  endl;
  cout << "Napoli\t\t" << Napoli.punti << "\t\tTrad\t" << Napoli.puntiTrad << "\tSomma\t" << Napoli.punti+Napoli.puntiTrad <<  endl;
  cout << "juventus\t" << juventus.punti << "\t\tTrad\t" << juventus.puntiTrad << "\tSomma\t" << juventus.punti+juventus.puntiTrad <<  endl; 
  cout << "Lazio\t\t" << Lazio.punti << "\t\tTrad\t" << Lazio.puntiTrad << "\tSomma\t" << Lazio.punti+Lazio.puntiTrad <<  endl;
  cout << "Milan\t\t" << Milan.punti << "\t\tTrad\t" << Milan.puntiTrad << "\tSomma\t" << Milan.punti+Milan.puntiTrad <<  endl;
  cout << "Torino\t\t" << Torino.punti << "\t\tTrad\t" << Torino.puntiTrad << "\tSomma\t" << Torino.punti+Torino.puntiTrad <<  endl;
  cout << "Sampdoria\t" << Sampdoria.punti << "\t\tTrad\t" << Sampdoria.puntiTrad << "\tSomma\t" << Sampdoria.punti+Sampdoria.puntiTrad <<  endl;
  cout << "Roma\t\t" << Roma.punti << "\t\tTrad\t" << Roma.puntiTrad << "\tSomma\t" << Roma.punti+Roma.puntiTrad <<  endl;
  cout << "Fiorentina\t" << Fiorentina.punti << "\t\tTrad\t" << Fiorentina.puntiTrad << "\tSomma\t" << Fiorentina.punti+Fiorentina.puntiTrad <<  endl; 
  cout << "Cagliari\t" << Cagliari.punti << "\t\tTrad\t" << Cagliari.puntiTrad << "\tSomma\t" << Cagliari.punti+Cagliari.puntiTrad <<  endl;  
  cout << "Atalanta\t" << Atalanta.punti << "\t\tTrad\t" << Atalanta.puntiTrad << "\tSomma\t" << Atalanta.punti+Atalanta.puntiTrad <<  endl; 
  cout << "Chievo\t\t" << ChievoVerona.punti << "\t\tTrad\t" << ChievoVerona.puntiTrad << "\tSomma\t" << ChievoVerona.punti+ChievoVerona.puntiTrad <<  endl;
  cout << "Bologna\t\t" << Bologna.punti << "\t\tTrad\t" << Bologna.puntiTrad << "\tSomma\t" << Bologna.punti+Bologna.puntiTrad <<  endl;
  cout << "Spal\t\t" << Spal.punti << "\t\tTrad\t" << Spal.puntiTrad << "\tSomma\t" << Spal.punti+Spal.puntiTrad <<  endl;
  cout << "Udinese\t\t" << Udinese.punti << "\t\tTrad\t" << Udinese.puntiTrad << "\tSomma\t" << Udinese.punti+Udinese.puntiTrad <<  endl;
  cout << "Genoa\t\t" << Genoa.punti << "\t\tTrad\t" << Genoa.puntiTrad << "\tSomma\t" << Genoa.punti+Genoa.puntiTrad <<  endl;
  cout << "Sassuolo\t" << Sassuolo.punti << "\t\tTrad\t" << Sassuolo.puntiTrad << "\tSomma\t" << Sassuolo.punti+Sassuolo.puntiTrad <<  endl;
  cout << "Crotone\t\t" << Crotone.punti << "\t\tTrad\t" << Crotone.puntiTrad << "\tSomma\t" << Crotone.punti+Crotone.puntiTrad <<  endl;  
  cout << "Hellas Verona\t" << HellasVerona.punti << "\t\tTrad\t" << HellasVerona.puntiTrad << "\tSomma\t" << HellasVerona.punti+HellasVerona.puntiTrad <<  endl;
  cout << "Benevento\t" << Benevento.punti << "\t\tTrad\t" << Benevento.puntiTrad << "\tSomma\t" << Benevento.punti+Benevento.puntiTrad <<  endl;
  return 0;
}
