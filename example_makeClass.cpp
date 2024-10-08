#include<iostream>
using namespace std;


class Student
{

private:
    int rollStudent ;
    int  marks1,marks2,marks3;
    string nameStudent ;


public:

    Student ( int a)
    {
        setRollnumber(a);
    }

    Student  ( int p, int q, int r)
    {
        setMarks(p,q,r);
    }

    Student ( string j)
    {
        setNameof(j);
    }

    void setRollnumber (int l)
    {
        if(l>0 && l<40 )
        {
            rollStudent=l;
        }
        else
        {
            cout<< " Enter the correct roll number :"<<endl;
        }
    }

    void setNameof (string j)
    {
        nameStudent=j;
    }

    void setMarks ( int a , int b , int c)
    {
        marks1=a;
        marks2=b;
        marks3=c;
    }

    int getRoll (  )
    {
        return rollStudent;
    }

    string  getName ()
    {
        return  nameStudent;
    }


    int totalMarks ()
    {
        return (marks1+ marks2 + marks3);
    }




    string gradeDefiner ( )
    {
         if( totalMarks () > 175 && totalMarks () <=220)
         {
             return "C";
         }
         else if( totalMarks() >220 && totalMarks () <=260)
         {
             return "B";
         }
         else if ( totalMarks () >260 && totalMarks () <=300)
         {
             return "A";
         }
         else
         {
             return "Low grade";
         }



    }


};



int main ()
{
    Student s1( 11);
    Student s2 ( 89,87,100);
    Student s3 ( "Samar");


    cout<< "The total marks  " << s2.totalMarks()<<endl;
    cout<< "Student of roll no. "<< s1.getRoll() << " Name is "<<s3.getName() <<" is having overall grade of "<< s2.gradeDefiner();

    return 0;

}
