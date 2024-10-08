#include<iostream>

using namespace std;


class Rectangle
{
private:
    int length ;
    int breadth;

    public:

        Rectangle ( int l =1, int b=1);
        Rectangle ( Rectangle ( &));

       inline  void setLength ( int l);
        void setBreadth ( int b);

        int getLength ();
        int getBreadth ();

        inline int area ();
        int perimeter ();

        int isSquare ();

        //destructors

};

class Cuboid :public Rectangle
{
private:
    int height ;
public:

    Cuboid (int h)
    {
        height =h;
    }
    Cuboid (int l,int b, int hh)
    {
        setLength (l);
        setBreadth(b);
        set_Height(hh);
    }
    void set_Height (int hh)
    {
        if (hh>0)
        {
            height=hh;
        }
        else
        {
            height=1;
        }
    }

    int call_height()
    {
        return height ;
    }

    int  volume ()
    {
         return (getLength() *getBreadth() *height);
    }
};


Rectangle :: Rectangle ( int l ,int b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle :: Rectangle (Rectangle ( &r1 ))
{
    length =r1.length;
    breadth =r1.breadth;
}

void Rectangle ::setLength( int l  )
{
    if (l>=0)
    {
        length =l;
    }
    else
    {
        length =1;
    }

}


void Rectangle ::setBreadth(int  b)
{
    if( b>=0)
    {
        breadth =b;
    }
    else
    {
        breadth =1;
    }
}

int Rectangle::getBreadth()
{
    return breadth;
}
int Rectangle::getLength()
{
    return length ;
}

int Rectangle :: area( )
{
    return length * breadth;
}
int Rectangle:: perimeter()
{
    return 2*(length + breadth);
}

int Rectangle::isSquare()
{
    if (  length == breadth)
    {
        cout<< "it is a square "<<endl;
    }
}


int main ()
{

    Cuboid c1(4,4,4);
    Cuboid c(4);

    cout<<" The height of the c object is "<<c.call_height()<<endl;
    cout<<" The volume of the object c is "<< c.volume()<<endl;
    cout<<endl;

    cout<<" The height of the c1 object is "<<c1.call_height()<<endl;
    cout<<" The volume of the object c1 is "<< c1.volume()<<endl;

    return 0;

}







