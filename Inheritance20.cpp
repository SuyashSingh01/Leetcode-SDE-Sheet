#include<iostream>
using namespace std;
// program of inheritance
class power{
protected:
int id;
string name;
public:
	 physical()
	{ 
	id=10;
	name=" Gravity";
	cout<<" THIS IS SUYASH SINGH ID:"<<id<<endl;
	cout<<" THIS IS SUYASH SINGH NAME:"<<name<<endl;	
	}
};
class starlight:public power
{
private:
int number ;
string spec;
public:
	powerIN()
	{
	cout<<" Enter your number:"<<endl;
	cin>>number;
	cout<<" Enter your spec:"<<endl;
	cin>>spec;
	}
	powerOUT()
	{	
	cout<<" It is @2nd class of starlight inherited @1st class of power:"<<endl;
	cout<<" THIS IS ---Inherited (from @1 class)--- MY ID:"<<id<<endl;
	cout<<" THIS IS ---Inherited (from @1 class)--- NAME:"<<name<<endl;	
	cout<<" THIS IS ************** AND IT IS MY ARENA:"<<endl;	
	cout<<" THIS IS ************** NUMBER:"<<number<<endl;
	cout<<" THIS IS ************** SPECIFICATION:"<<spec<<endl;
		}
};
int main()
{
	starlight p;
	p.physical();
	p.powerIN();
	p.powerOUT();
	return 0;
}
