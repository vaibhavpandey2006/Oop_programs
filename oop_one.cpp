#include<iostream>

using namespace std;

class Rectangle
 {
    public:
        // Data members (properties)
        int length;
        int breadth;

        // Member functions
        int area()
        {
            return length * breadth;
        }

        int perimeter()
        {
            return 2 * (length + breadth);
        }
};

// Declaration is completed

int main() {
    Rectangle r1;
    Rectangle r2;
    Rectangle *p;

    Rectangle *q = new Rectangle();  // Object created in heap

    // Assign values using dot and arrow operators
    r1.length = 15;
    r1.breadth = 10;
    r2.length = 30;

    p = &r2;
    p->breadth = 10;

    q->length = 10;
    q->breadth = 10;

    // Output areas
    cout << "Area of r2  : " << p->area() << endl;
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of q: " << q->area() << endl;

    // Output perimeters
    cout << "Perimeter of r1: " << r1.perimeter() << endl;
    cout << "Perimeter of r2  : " << p->perimeter() << endl;
    cout << "Perimeter of q: " << q->perimeter() << endl;

    return 0;
}
