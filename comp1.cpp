#include<iostream>
#include<string.h>
using namespace std;
int i=0;
int c=0;
char ss[40]="";
void state0();
void state1();
void state0()

{
    if(ss[i]=='_')
    {
        c++;
        i++;
        state1();
    }
    else if(ss[i]>='A' && ss[i]<='Z')
    {
        c++;
        i++;
        state1();
    }
    else if(ss[i]>='a' && ss[i]<='z')
    {
        c++;
        i++;
        state1();
    }
    else
    {
        c--;
    }
    state1;
}
void state1()
{
    if(ss[i]>='0' && ss[i]<='9')
    {
        c++;
        i++;
        state1();
    }
    else if(ss[i]>='A' && ss[i]<='Z')
    {
        c++;
        i++;
        state1();
    }
    else if(ss[i]>='a' && ss[i]<='z')
    {
        c++;
        i++;
        state1();
    }
}
int main()
{
    cout<<"Input Identifier: ";
    cin>>ss;
    state0();
    if(c==strlen(ss))
    {
        cout<<"Valid";
    }
    else
    {
        cout<<"Invalid";
    }
    return 0;
}
