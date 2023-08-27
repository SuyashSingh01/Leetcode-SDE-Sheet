    #include<iostream>
using namespace std;
// swapping the value
int main()
{
        int x,y;
        cout<<"ENTER THE VALUE OF X :" <<endl;
        cin>>x;
        cout<< "value of x:"<<x<<endl;
        cout<<"ENTER THE VALUE OF Y :" <<endl;
        cin>>y;
        cout<<"value of y:"<<y<<endl;
        x=x+y;
        y=x-y;
        x=x-y;
        cout<<"value of x after swapping:"<<x<<endl;
        cout<<"value of y after swapping:"<<y;
        return 0;}
        
