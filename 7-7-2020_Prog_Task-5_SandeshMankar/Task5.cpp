#include<bits/stdc++.h>
#define MAX 100
using namespace std;
class String
{
	char *st;
	int size;
	public:
		String()
		{
		st=new char[MAX];
		
		}
		String(int size)
		{    this->size=size;
			  st= new char[size];
			
            }
       
        String operator +(String s);
        String operator *(int z);
        void display();
        friend istream& operator >> (istream& cin, String& v);
	    friend ostream& operator << (ostream& cout, String& s );
};
  istream& operator >> (istream& cin, String& v)
 {  cout<<"Enter size "<<endl;
    int size;
	cin>>size;
  ;
    v.size=size;
 	cout<<"Enter the string"<<endl;
			  for(int i=0;i<v.size;i++)
			    cin>>v.st[i];
			    
 }
  ostream& operator << (ostream& cout, String& s )
  { cout<<"String is : ";
    for(int i=0;i<s.size;i++)
	 cout<<s.st[i];	
  }
String String::operator *(int z)
{
  String neww; 
  int i=0;
  int c=0;
  int os=this->size;
 
	neww.size=this->size*z;
	
	for(int j=0;j<z;j++)
		{
			 for(int u=0;u<os;u++)
			 { 
			 	neww.st[c]=this->st[u];
			  
			 	c++;
			 } 
			
		}
		return neww;
	
}
void String::display()
{  // cout<<size<<endl;
	for(int i=0;i<size;i++)
	 cout<<st[i];
}
String String:: operator +(String s)
{
  String neww;
  neww.size=this->size+s.size;
  neww.st=new char[neww.size];
  for(int i=0;i<neww.size;i++)
  { int u=0;
  	while(i<this->size)
  	{
  		neww.st[i]=this->st[i];
  	    i++;	
	}
	while(i<neww.size)
	{
		neww.st[i]=s.st[u];
		u++;
		i++;
	}
	
  }
  return neww;	
}

int main()
{ 
	//String g(4);
	//String g1(6);
	String a;
	String b;
	
	/*----------------Operator Overloading--cout and cin-------------*/
	//cin>>a;
	//cout<<a;
	
	/*-------------Addition-------------*/
	//a=g+g1;
	//a.display();
	
	/*--------------Multiplication----------*/
	//b=g*3;
	//b.display();
	
}