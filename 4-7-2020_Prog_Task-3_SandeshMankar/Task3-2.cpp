#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int year;
  void getInput()
    {
        cout << "Give the input:\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll;
        cout << "Year: ";
        cin >> year;

    }

 void display()
   {
     cout<<"======Student Details========"<<endl;
     cout<<"Name -- "<<name<<endl;
     cout<<"Roll No -- "<<roll<<endl;
     cout<<"Year -- "<<year<<endl;

   }

};
 void showRank(int i)
{
      cout<<"Rank "<<i<<endl;
}
void showRank(Student s,int i)
{
    s.display();
    showRank(i);

}
void showRank(Student s)
{
  s.display();
  cout<<"No Rank "<<endl;

}
int main()
{

    Student s1;
    s1.getInput();
    cout<<"\n\n";
    showRank(3);
    cout<<"\n\n";
    showRank(s1,5);
    cout<<"\n\n";
    showRank(s1);

}