#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    double cgpa;
    int year;
    double *marks=new double[5];

    Student()
    {
       roll=-1;
       cgpa=-1.0;
    }

    void getInput()
    {
      
        cout << "Give the input:\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll;

        cout << "Year: ";
        cin >> year;
        cout<<"Enter marks of 5 subjects \n";
        for(int i=0;i<5;i++)
         cin>>marks[i];
    }


   void display()
   {
    cout<<"======Student Details========";
     cout<<"Name -- "<<name<<endl;
     cout<<"Roll No -- "<<roll<<endl;
     cout<<"Year -- "<<year<<endl;
     cout<<"Marks -- "<<endl;
     for(int i=0;i<5;i++)
     cout<<marks[i]<<endl;
     cout<<"Total -- "<<this->total()<<endl;
     this->cgpa=cgpaf();
     cout<<"CGPA -- "<<this->cgpa<<endl;

   }

   double total()
   { double sum=0;
      for(int i=0;i<5;i++)
        sum+=marks[i];
        return sum;
   }

  double cgpaf()
  {
     int s=this->total();
     return s/50.0;
  }
   ~Student();
};

Student::~Student()
{
  delete []marks;
}
int main()
{
    int h;
    Student s1;
    s1.getInput();
    s1.display();
    s1.~Student();
}