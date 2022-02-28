/*Create a class called ‘triangle’ with the three sides a, b, c as its member data. Include
member functions to do the following:
a) To accept the sides of a triangle
b) To display the sides of the triangle*/
#include<iostream>
using namespace std;
class triangle
{
    int a,b,c;

public :
    void accept()
    {
     cout << "Enter number A : ";
     cin >> a;
     cout << "Enter Number B : ";
     cin >> b;
     cout << "Enter number C : ";
     cin >> c;
    }
    void display ()
    {
      cout << "The side of a triangle " << endl;
      cout << "A : " <<a <<" B : " <<b <<" C : " <<c;
    }
};

int main ()

{
    triangle hi;

    hi.accept();
    hi.display();
}
