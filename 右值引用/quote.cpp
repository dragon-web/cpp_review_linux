#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class String
{
  public:
    char* str;
    String ():str(new char[1])
  {
    str[0] = 0;
  }
    String(const char* s)
    {
      str = new char[strlen(s)+1];
      strcpy(str,s);
    }
    String (const String& s)
    {
      cout<<"copy costructor called"<<endl;
      str = new char[strlen(s.str)+1];
      strcpy(str,s.str);
    }
    String &operator = (const String & s)
    {
      cout<<"copy operator = called"<<endl;
      if(str != s.str)
      {
        delete []str; 
        this->str = new char[strlen(s.str) + 1];
        strcpy(this->str,s.str);
      }
      return *this; 
    }
};


template<class T>

void moveSwap(T &a,T &b)
{
  T tmp(move(a));
  a = move(b);
  b = move(tmp);
}


int main()
{
  String s;
  s = String("this");
  cout<<"********"<<endl;
  cout<<s.str<<endl;
  String s1 = "hello",s2 = "world";
  moveSwap(s1,s2);
  cout<<s2.str<<endl; 
  return 0;

}
