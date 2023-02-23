#include <iostream>
using namespace std;
int fakt(int x)
{
  int f=1;
  for(int i=1; i<=x; i++)
  {
     f=f*i;
  }
  int b=1;
  for(int i=1; i<=x-1; i++)
  {
     b=b*i;
  }
  int c=1;
  for(int i=1; i<=x-2; i++)
  {
     c=c*i;
  }
  int d=1;
  for(int i=1; i<=x-3; i++)
  {
     d=d*i;
  }

  int g=(f/4)*(6/b) + (c/2)*(7/d);


    return g;
}

int main()
{
    int z=4;
    cout << fakt(z) << endl;
    return 0;
}
