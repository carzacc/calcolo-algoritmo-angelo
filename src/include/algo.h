//Questo file dichiara classi e funzioni usate nel programma
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
#ifndef ALGO_H
#define ALGO_H
#include <iostream>
#include <string>
using namespace std;
class squadra
{
public:
  int CS; //"Clean Sheet"
  int GS;//"Goal Segnati"
  int GF;//"Goal Fatti"
  float quotaCS;//"quota Clean Sheet", ovvero il valore
  float quotaGS;
  float quotaGF;
  float punti;
  int puntiTrad;
public:
  void aggiungipartita(int GFa,int GSa); //forward declaration, function defined in seriea.cpp
  squadra(); //forward declaration of constructor, defined in seriea.cpp
  float getPunti();
  float getPuntiTrad();
};


void partita(string squadra1, string squadra2, int goal1, int goal2); //forward declaration, function defined in seriea.cpp
void partite(int numeropartite); //forward declaration, function defined in parite.cpp

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
#endif
