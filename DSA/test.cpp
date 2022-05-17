#include <typeinfo>

   #include <iostream>

   using namespace std;

   class Myshape

   {

       public:

       virtual void myvirtualfunc() const {}

   };

   class mytriangle: public Myshape

   {

       public:

       virtual void myvirtualfunc() const

       {  

       };

   };

   int main()

   {

       Myshape Myshape_instance;

       Myshape &ref_Myshape = Myshape_instance;

       try

       {

           mytriangle &ref_mytriangle = dynamic_cast<mytriangle&>(ref_Myshape);

       }

       catch (bad_cast)

       {

           cout << "Can't do the dynamic_cast lor!!!" << endl;

           cout << "Caught: bad_cast exception. Myshape is not mytriangle.\n";

       }

       return 0;

   }