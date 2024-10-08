#include<iostream>

using namespace std;


class Rectangle
{
private:
    int length ;
    int breadth;

    public:

        Rectangle ( int l =0 , int b=0);
        Rectangle ( Rectangle ( &));

        // inline
        inline  void setLength ( int l);
        void setBreadth ( int b);

        int getLength ();
        int getBreadth ();

        inline int area ();
        int perimeter ();

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
    if (l>=0){
        length =l;
    }
    else{
        length =1;
    }

}

void Rectangle ::setBreadth(int  b)
{
    if( b>=0)
    {
        breadth =b;
    }
    else{
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


int main ( )
{
    Rectangle r1 (5,5);
    Rectangle  *p;
    p= &r1;
    Rectangle * q = new Rectangle ();
    Rectangle r2 ( r1 );

    cout<< " Area of r1 object is : " <<r1.area()<<endl;
    cout<< " Perimeter of r1 object is :"<< p->perimeter()<<endl;
    cout<<endl;

    q->setBreadth(10);
    q->setLength(5);
    cout<< "The area of q pointer object is : "<< q->area()<<endl;
    cout<< " The perimeter of q pointer object is :"<< q->perimeter()<<endl;
    cout<<endl;

    cout<< " The area of copy const. r2 is :"<<r2.area()<<endl;
    cout<< " The perimeter of copy constructor r2 is : "<< r2.perimeter ()<<endl;

    return 0;

}







