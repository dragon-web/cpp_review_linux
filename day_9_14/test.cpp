//it is good  转为 good is it 

#include<iostream>
#include<string.h>
#include<string>
using namespace std;


string Reverse(string & s)
{
  string tmp1;
  string tmp2;
  string tmp3;
  int count1 = 0;
  int count2 = 0;
  auto it = s.begin();
  while(*it !=' ')
  {
      count2++;
  }
  tmp1 = s.substr(count1,count2-1); 
  count1 = count2;
  it++;
  while(*it != ' ')
  {
    count2++;
    it++;
  }
  tmp2 = s.substr(count1,count2);
  count1 = count2;
  while(it != s.end())
  {
    count2++;
    it++;
  }
  tmp3 = s.substr(count1,count2);

  tmp3 += tmp1;
  tmp3 += tmp2;
}
int main()
{
  string test("it is good");
  cout<<test<<endl;
  cout<<"转换后："<<endl; 
  string res = Reverse(test);
  cout<<res<<endl;

  return 0;
}

