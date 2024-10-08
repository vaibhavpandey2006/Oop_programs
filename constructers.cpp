#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length ;
    int breadth;

public:

    void setLength ( int l)
    {
        if ( l >0)
        {
            length = l;

        }

    }

    void setBreadth ( int b)
    {
        if ( b>0)
        {
            breadth =b;
        }

    }

    // constructors
    Rectangle ( int l =1 , int b =1 )
    {
        setLength(l);
        setBreadth(b);
    }


    Rectangle ( Rectangle ( &  r2 ))
    {
        length = r2.length;
        breadth =r2.breadth;
    }


    int area ( )
    {
        return length * breadth;
    }
    int perimeter ()
    {
        return  2 *( length + breadth);
    }

};


int main ()
{
    Rectangle r;
    Rectangle r1 (4);
    Rectangle r2 ( 10, -5);

    //copy constructers

    Rectangle r22 (r2);

    cout<< " The area of object r is : "<< r.area()<<endl;
    cout<< " The perimeter of object r1 is :"<< r1.perimeter()<<endl;
    cout << " The area of object r2 is : "<< r2.area ()<<endl;
    cout << " The perimeter of object r2 is : "<< r2.perimeter()<<endl;

    cout<< " The copy constructor of r2 is r22 and its area is : "<< r22.area()<< endl;
    cout<< " The copy constructor of r2 is r22 and its perimeter is : "<< r22.perimeter()<< endl;



    return 0;


}
