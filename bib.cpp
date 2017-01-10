#include "bib.h"
/*
bool cstoi(string s,unsigned int *r)
{
    unsigned int i,a,d,j;
    a=0;
    for(i=0;i<s.length();i++){
        if(s[i]>='0'&& s[i]<='9'){
            d=1;
            for(j=1;j<=s.length()-i-1;j++){d=d*10;}
            a=a+(int(s[i])-int('0'))*d;
        }else{
            return false;
        }
    }
    *r=a;
    return true;
}
*/
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

