#include <bits/stdc++.h>
#include<conio.h>


#include <string>
using namespace std;


class Box
{
   public:
      Box() { 
         cout << "Constructor is called!" <<endl; 
      }
      ~Box() { 
         cout << "Destructor is called!" <<endl; 
      }
};

int main( )
{
   Box *ptr=new Box[6];
   delete[] ptr;
   getch();

   return 0;
   
}
