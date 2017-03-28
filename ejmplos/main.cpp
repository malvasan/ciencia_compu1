#include <iostream>
#include "j1.h"
using namespace std;
/*
int main()
{
    while (1)
    {
        int N;
        int c;
        cin>>N;
        cout<<((N%5==0 && N>=0)? N/5: -1)<<"\n";
    }
    return 0;
}
*/
/*
void sd(int *qt)
{
    cout<<*qt;
}
int main()
{
    int fr=8;
    sd(&fr);
}
*/

int main()
{
char *pt;
char arr[]="hola";
pt=arr;
cout<<*pt;
cout<<*(++pt);
}

/*
int main()
{
    const char li[]="2456";
    const int yea=18;
    const char st[]="crazy";
    Car d(li,yea,st);
}
*/
