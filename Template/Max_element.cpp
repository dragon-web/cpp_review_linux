#include<iostream>

using namespace std;

/*
template<typename T>

T MaxElement(T a[],int size)
{
  T tmpMax = a[0];
  for(int i = 1 ; i < size;++i)
  {
     if(tmpMax < a[i])
     {
       tmpMax = a[i];
     }
  }
return tmpMax; 
}

class CFraction
{
  int numerator;
  int denominator;
  public:
  CFraction(int n,int d):numerator(n),denominator(d)
  { };
  bool operator < (const CFraction &f)const 
  {
      if(denominator* f.denominator > 0)
      {
          return 
      }
  }
};
*/

template <typename T>

class CArray
{
  private:
    int size;
    T* ptr;
  public:
    CArray(int s = 0);
    CArray(CArray &a);
    ~CArray();
    void push_bank(const T& v);
    CArray &operator = (const CArray& a);
    T length()
    {
      return size;
    }
    T & operator[](int i)
    {
      return ptr[i];
    }
};

template <class T>
CArray <T>::CArray(int s):size(s)
{
  if(s == 0)
    ptr = NULL;
  else 
    ptr = new T[s];
}

template<typename T>

CArray<T>::CArray(CArray &a)
{
  if(!a.ptr)
  {
    ptr = NULL;
    size = 0;
    return;
  }
ptr = new T[a.size];
memcpy(ptr,a.ptr,sizeof(T)*a.size);
size = a.size;
}

template <typename T>

CArray<T>::~CArray()
{
  if(ptr)
  {
    delete[] ptr;
    size = 0;
  }
}

templete<class T>

CArray<T> &CArray<T>::operator = (const CArray & a)

int main()
{



  return 0;
}
