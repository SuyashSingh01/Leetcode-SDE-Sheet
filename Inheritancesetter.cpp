#include<iostream>
using namespace std;

class human{
    private:
    int height;
    int weight;
    public:
    void sleep(){
        cout<<"sleep:"<<endl;
    }
    void setwe(int x){
        // weight =x;
    // cout<<weight<<endl;
    this->height=x;
    // cout<<height<<endl;

    }
};
class male: public human{
    public:
    int height;
    int weight;
    public:
    void setter(){
        cout<<"setter:"<<endl;

    } 
    int setter2(){
        return this->height;
    }

};
int main (){
    male m;
    system("cls");
    m.setwe(100);
    // cout<<m.weight<<endl;
    cout<<m.height<<endl;
    return 0;
}