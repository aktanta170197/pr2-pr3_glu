#include "bib.h"
void printbase(vector<planop>* baza)
{
    vector<planop> b;
    b = *baza;
    for(unsigned int i=0;i<b.size();i++){
        cout<<i<<"\t|"<<b[i].namep<<"\t|"<<b[i].tip<<"\t|";
        if(b[i].dostup){
            cout<<"Общий\t\t\t|"<<endl;
        }
        else {
            cout<<"Не общедоступен\t|"<<endl;
        }
    }
}
