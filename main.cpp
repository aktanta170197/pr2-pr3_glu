#include "bib.h"
#include <iostream>
#include <vector>
#include <fstream>
#include "utili.h"

using namespace std;
const char *filename = "mybase.txt";

int main()
{

    ofstream ostr;
    unsigned int n=0;
    string namep,tip,dostups;
    bool dostup;
    unsigned int i,nrz;
    string k,b;
    planop a;
    vector<planop> baza;
    vector<planop>::iterator pos;


    zapnd(&baza);
    n = baza.size();//  проверить (0 - -1)

    k=1;
    while(k!="0")
    {
        cout<<endl<<"Привет!\n"<<"0 - Выход\n"<<"1 - Распечатать базу\n"<<"2 - Изменить запись\n"<<"3 - Удалить запись\n";
        cout<<"4 - Добавить запись\n"<<"5 - Записать в файл\n"<<"6 - Читать из файла\n"<<endl;
        cin>>k;
        if(k=="6"){
            ifstream istr(filename);
            if (istr) {
                try {
                baza.erase(baza.begin(),baza.end());
                istr>>n;
                for(i=0;i<n;i++){
                    planop tmp ;
                    istr>>tmp.namep;
                    istr>>tmp.tip;
                    istr>>tmp.dostup;
                    baza.push_back(tmp);
                    cout<<"Запись №"<<i<<"удачно прочитана"<<endl;
                     //delete tmp ;
                }
                istr.close();}
                catch(exception)
                {
                    cout   << "ошибка" << endl;
                ostr.close();
                }
            }
            else {
                cerr<<"Ошибка при открытии файла\""<<filename<<"\""<<endl;
            }
        }
        if(k=="5"){
            ostr.open(filename);
            if (ostr) {
                try {
                    ostr<<baza.size()<<endl;
                    for (i=0; i<baza.size(); i++)
                    {
                        ostr<<baza[i].namep<<endl;
                        ostr<<baza[i].tip<<endl;
                        ostr<<baza[i].dostup<<endl;
                        if (ostr.bad())
                        {
                            cerr<<"Невозможно записать записи в файл"<<endl;
                        }else
                        {
                            cout<<"Запись №"<<i<<"удачно записалась"<<endl;
                        }
                    }
                    ostr.close();
                }
                catch(exception)
                {
                    cout   << "ошибка" << endl;
                    ostr.close();
                }


            }
            else {
                cerr<<"Выходная ошибка открытия файла\""<<filename<<"\""<<endl;
            }
        }
        if(k=="4")
        {
            //добавление
            cout<<"Введите название: ";
            cin>>namep;
            cout<<"Введите тип: ";
            cin>>tip;
            cout<<"Общедоступен? (Д/н) ";
            cin>>dostups;
            dostup=(dostups=="д"||dostups=="Д"||dostups=="y"||dostups=="Y");
            a.dostup=dostup;
            a.namep=namep;
            a.tip=tip;
            baza.push_back(a);
            n++;
            k="1";
        }

        if(k=="3"){//удаление
            cout<<"Какую запись удаляем?"<<endl;
            cin>>b;
            if(cstoi(b,&nrz)){
                if(nrz<n){
                    pos = baza.begin() + nrz;
                    baza.erase(pos);
                    n--;
                    k="1";
                }else{
                    cout<<"Нет такого номера"<<endl;
                }
            }else{
                cout<<"Ошибка! Введите номер записи!"<<endl;
            }
        }   //редактирование
        if(k=="2"){
            cout<<"Какую запись меняем?"<<endl;
            cin>>b;
            if(cstoi(b,&nrz)){
                if(nrz<n){
                    cout<<"Введите название: ";
                    cin>>namep;
                    cout<<"Введите тип: ";
                    cin>>tip;
                    cout<<"Общедоступен? (Д/н) ";
                    cin>>dostups;
                    dostup=(dostups=="д"||dostups=="Д"||dostups=="y"||dostups=="Y");
                    baza[nrz].dostup=dostup;
                    baza[nrz].namep=namep;
                    baza[nrz].tip=tip;
                    k="1";
                }else{
                    cout<<"Нет такого номера"<<endl;
                }
            }else{
                cout<<"Ошибка! Введите номер записи!"<<endl;
            }
        }
        if(k=="1"){printbase(&baza);}
    }
}
