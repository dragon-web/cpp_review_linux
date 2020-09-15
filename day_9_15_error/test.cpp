#include<iostream>
#include<unistd.h>

using namespace std;

int main(){
  int pid;
  int num=1;
  pid=fork();
  if(pid>0){
    num++;
    printf("in parent:num:%d addr:%x\n",num,&num);

  }
  else if(pid==0){
    printf("in child:num:%d addr:%x\n",num,&num);

  }

}
