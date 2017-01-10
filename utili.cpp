#include "utili.h"

int mypow(int x, int y)
{
    int p=1;
    for(int i=1;i<=y;i++){
        p=p*x;
    }
    return p;
}

bool cstoi(string s,unsigned int *r)
{
    unsigned int i,a;
    a=0;
    for(i=0;i<s.length();i++){
        if(s[i]>='0'&& s[i]<='9'){
            a=a+(int(s[i])-int('0'))*mypow(10,s.length()-i-1);
        }else{
            return false;
        }
    }
    *r=a;
    return true;
}
