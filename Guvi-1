#include<iostream>
#include <stdio.h>
#include<string>
using namespace std;
int main()
{
    string sen;
    getline(cin,sen);
    int s=sen.size(),i=0,max=0,w=0,lc=0,tr[s],sc=0;
    while(i<s)
     {
      if(sen[i]==' '||i==(s-1))
       { 
           tr[w]=i-lc;
           if(w>0)
           tr[w]=i-lc+1;
           w++;
           lc=0;
           sc++;
       }
      i++;
      lc++;
     }
     int ss[w];
     for(i=1;i<w;i++)
     {
         ss[i-1]=tr[i]-tr[i-1]-1;
     }
     ss[w-1]=sen.size()-tr[w-1];
     int p,p1;
     cout<<"\n";
     for(i=0;i<w;i++)
      {
          for(int j=0;j<w;j++)
           {
               if(ss[j]>max)
               { 
                   max=ss[j];
                   p=tr[j];
                   p1=j;
               }
           } 
          cout<<sen.substr(p,max)<<" "; 
          ss[p1]=0;
          max=0;
      }
    return 0;
}
