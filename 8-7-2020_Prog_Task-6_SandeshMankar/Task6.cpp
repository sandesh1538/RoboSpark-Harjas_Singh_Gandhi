#include<bits/stdc++.h>
#define CMAX 30
#define IMAX 10
using namespace std;
class Personal
{
	protected:
		char *name;
		char *surname;
		char *address;
        char *mob;
	    char *dob;
    public:
	    Personal()
	    {
	    	name=new char[CMAX];
	    	surname=new char[CMAX];
	    	address=new char[CMAX];
	    	mob=new char[IMAX];
	    	dob=new char[IMAX];
	    	
		}
		void getPe_data()
		{  
			cout<<"Enter Name ";
			cin>>name;
			cout<<"Enter Surname ";
			cin>>surname;
			cout<<"Enter Address ";
			cin>>address;
			cout<<"Enter Mobile Number ";
			cin>>mob;
			cout<<"Enter Date of Birth ";
			cin>>dob;
			
		}
		void display_Pe()
		{   cout<<"=========Personal Details========"<<endl;
			cout<<"Full Name "<<name<<"  "<<surname<<endl;
			cout<<"Address "<<address<<endl;
			cout<<"Mobile Number "<<mob<<endl;
			cout<<"Date of Birth "<<dob<<endl;
		
		}
};
class Professional
{
	protected:
		char *org_name;
		char *job_prof;
		char *proj;
	public:
		Professional()
		{
			org_name=new char[CMAX];
			job_prof=new  char[CMAX];
			proj=new char[CMAX];
		}
		void getPr_data()
		{     
				cout<<"Enter Organisation Name ";
                cin>>org_name;
               	cout<<"Enter Job Profile ";
               	cin>>job_prof;
               	cout<<"Enter Project ";
               	cin>>proj;
		}
			void display_Pr()
		{   cout<<"=========Professional Details========"<<endl;
			cout<<"Organisation Name "<<org_name<<endl;
			cout<<"Job Profile "<<job_prof<<endl;
			cout<<"Project "<<proj<<endl;
		
		}
};
class Academic
{
	protected:
		int year_p;
		float cgpa;
		char *coll;
		char *branch;
	public:
		Academic()
		{
			year_p=0;
			cgpa=0.0;
			coll=new char[CMAX];
			branch=new char[CMAX];
			
		}
		void getA_data()
		{    
				cout<<"Enter Year ";
				cin>>year_p;
				cout<<"Enter CGPA  ";
				cin>>cgpa;
				cout<<"Enter College Name ";
				cin>>coll;
				cout<<"Enter Branch ";
				cin>>branch;
		}
		void display_A()
		{   cout<<"=========Academic Details========"<<endl;
			cout<<"Year "<<year_p<<endl;
			cout<<"CGPA "<<cgpa<<endl;
			cout<<"College Name "<<coll<<endl;
			cout<<"Branch "<<branch<<endl;
		}
};
class biodata:public Personal,public Academic,public Professional
{
	
};
int main()
{
	biodata a;
	a.getPe_data();
	
	a.getPr_data();
	a.display_Pe();
	a.display_Pr();
	
	
}