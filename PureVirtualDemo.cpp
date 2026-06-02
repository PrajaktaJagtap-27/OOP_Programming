#include<iostream>

using namespace std;

#pragma pack(1)
class Base
{

    public:


    int i,j;
    int Addition(int A,int B)  //Concrete
    {
        return A+B;

    }
    int Substraction(int A,int B) = 0; //abstract



};


class Derived : public Base
{
      public:
        int x;
        

};


  int main()

{


   Base *bp = new Derived();   //upcasting


   

return 0;

}