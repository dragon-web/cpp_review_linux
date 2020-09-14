#include<iostream>
#include<string.h>
using namespace std;


void reverse_word(char*p,char*q){
  char temp;
  while(q>p){
    temp=*p;
    *p=*q;
    *q=temp;
    q--;
    p++;

  }

}

char* indexofnoletter(char*p){
  char*t=p;
  while(*t!=' '&&*t!='\0')
    t++;
  return --t;

}

int main(){
  char a[]="this is good";
  puts(a);
  reverse_word(a,a+strlen(a)-1);
  char*p,*q;
  p=a;
  do{
    q=indexofnoletter(p);
    reverse_word(p,q);
    p=q+2;

  }while(p<=a+strlen(a)-1);

  puts(a);
return 0;
}
