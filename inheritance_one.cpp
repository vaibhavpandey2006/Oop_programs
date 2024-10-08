#include<iostream>

using namespace std;

class Rectangle
{
private:
    int length;  //data members
    int breadth;

public:
    //constructors declaration


    Rectangle(int l=1,int b=1 );


    //copy constructor
    Rectangle (Rectangle( & r1))
    {
        length=r1.length;
        breadth =r1.breadth;
    }


    //mutators value assigning
    void setLength ( int l );

    void setBreadth ( int b)
    {
        if (b>0)
        {
            breadth =b;
        }

    }

    //Accessors

    int getLength ();

    int getBreadth ()
    {
        return breadth;
    }

    //faciliators

    int area ();

    int perimeter()
    {
        return 2*(length + breadth );
    }

};


 //scope resolution (::)
 //syntx    data type :: class name  function name (parameters)


 Rectangle :: Rectangle ( int l,int b)
 {
     setLength(l);
     setBreadth(b);
 }

 int Rectangle :: getLength()
 {
     return length ;
 }

 void Rectangle :: setLength( int l)
 {
     if (l>0)
     {
         length =l;
     }
 }

 int  Rectangle :: area ()
 {
     return length *breadth;
 }



 class Cuboid : public Rectangle
 {
 private:
    int height ;
 public :

    Cuboid ( int h =1 ,int l=1 , int b=1)
    {
        setHeight( h);
        setLength(l);
        setBreadth(b);
    }
    void setHeight (int h)
    {
        if (h>0)
        {
            height =h;
        }
    }

    int getHeight ()
    {
        return height;
    }

    int volumee ()
    {
        return (getLength() * getBreadth() *height);
    }

 };


int main ()
{
    // object declearation
    Rectangle r1( 4,8);

    cout<< " Object r1 :"<<endl;
    cout<<"Its length is "<< r1.getLength() <<endl;
    cout<<"Its breadth is "<< r1.getBreadth() <<endl;
    cout<< "The area and perimeter  of rectangle object r1 is "<<r1.area() <<"," <<r1.perimeter()<< " respectively " <<endl;
    cout<<endl;

    Rectangle r3 (r1);

    cout<< " Copy constructor r3"<<endl;
    cout<<"Its length is "<< r3.getLength() <<endl;
    cout<<"Its breadth is "<< r3.getBreadth() <<endl;
    cout<< "The area and perimeter  of rectangle is "<<r3.area() <<"," <<r3.perimeter()<< " respectively " <<endl;
    cout<<endl;
    // object for cuboid

    Cuboid c1  (8 ,8,8);

    cout<< " Object of cuboid c1 :"<<endl;
    cout<< "Its  height is "<< c1.getHeight()<<endl;
    cout<< "Its length is "<< c1.getLength()<<endl;
    cout<< "Its breadth is "<< c1.getBreadth()<<endl;
    cout<< "The volume is "<< c1.volumee()<<endl;







}
