#include<iostream>

using namespace std;

class Shape
{
public :

    // pure virtual function
    // abstract class
    virtual int area() =0;
    virtual int perimeter () =0;
    virtual int circumference () =0;

};

class Rectangle :public Shape
{
private:
    // data members
    int length;
    int breadth ;

public:
    // constructors here
    Rectangle (int l=1,int b=1 )
    {
        setlength(l);
        setbreadth (b);
    }

    // mutators

    void setlength ( int l)
    {
         if (l>0)
         {
             length =l;
         }
    }

    void setbreadth (int b)
    {
        if(b>0)
        {
            breadth=b;
        }
    }

    // accessors

    int getlength()
    {
        return length;
    }
    int getbreadth ()
    {
        return breadth;
    }

    // faciliatorss
    // overriding function ...

    int area ()
    {
        return length*breadth;
    }
    int perimeter ()
    {
        return 2*(length+breadth);
    }
    int circumference ()
    {
        cout<< endl;
        return 0;
    }

};

class Circle :public Shape
{
private :

    //data members
    float radius;
public :

    // functions
    Circle (float rad=0)
    {
        setradius (rad);
    }

    // mutators
    void setradius (int rad)
    {
        if(rad >0)
        {
            radius =rad;
        }
    }
    //accessors

    int getradius  ()
    {
        return radius ;
    }

    // faciliatorss
    // overriding function
    int perimeter ()
    {
        cout<<endl;
        return 0;
    }
    int circumference ()
    {
        return (2*3.14*radius);
    }

    int area ()
    {
        return (3.14*radius*radius);
    }


};

int main ()
{
    // base class pointer and derived class object ,(overridden function), (virtual keyword) -POLYMORPHISM--
    Shape *p;
    Rectangle r1(3,4);
    p = &r1;

    cout<<" The area of the rectangle is :" <<p->area()<<endl;
    cout<< " The perimeter of the rectangle is :"<< p->perimeter()<<endl;
    cout<<endl;

    Circle c1 (4);
    p = &c1;

    cout<< " The area of the circle is : "<<p->area()<<endl;
    cout << " The circumference of the circle is  "<<p->circumference()<<endl;

}










