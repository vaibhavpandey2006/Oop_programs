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
        if ( l >=0)
        {
            length = l;
        }
        else
        {

            cout<< " Enter the correct value of length:"<<endl;
            length =0;

        }
    }

    void setBreadth ( int b)
    {
        if ( b >= 0)
        {
            breadth =b;
        }
        else
        {

            cout<< "Enter the correct value of breadth :"<<endl;
            breadth =0;
         }

    }

    int  getLength ()
    {
        return length;
    }

    int  getBreadth ()
    {
        return breadth;
    }

    int area ()
    {
        return length* breadth ;
    }
    int perimeter ()
    {

        return 2*(length + breadth);
    }


};

int main ()
{

    Rectangle r;
    Rectangle *p;
    p=&r;
    r.setLength(8);
    p->setBreadth(-5);

    cout<<" The breadth is "<< r.getBreadth()<<endl;
    cout<<" The length is "<< p->getLength()<<endl;
    cout<<endl;

    cout<<" The area of object r is :" <<r.area() <<endl;
    cout<<" The perimeter of object r is :"<< p->perimeter()<<endl;

    return 0;

}

