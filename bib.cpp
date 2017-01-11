#include "bib.h"
void zapnd(vector<planop>* baza)
{
    planop a;
    a.namep="Простой";
    a.tip="HD";
    a.dostup=false;
    baza->push_back(a);
    a.namep="Сложный";
    a.tip="SD";
    a.dostup=true;
    baza->push_back(a);
    a.namep="МегаГига";
    a.tip="FullHD";
    a.dostup=false;
    baza->push_back(a);
}

