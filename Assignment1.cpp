#include<iostream>
using namespace std;

class books
{
public:
   int price;
   int numberofpages;
   string authorname;
   string titlename;

   void librarybooks()
   {
      cout << "Price: " << price << endl;
      cout << "NumberOfPages: " << numberofpages << endl;
      cout << "AuthorName: " << authorname << endl;
      cout << "Titlename: " << titlename << endl;
   }
};

int main()
{
   books b1;

   b1.price = 250;
   b1.numberofpages = 567;
   b1.authorname = "JK rowlling";
   b1.titlename = "Python";

   b1.librarybooks();

   return 0;
}
