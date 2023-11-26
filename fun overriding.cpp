#include<iostream>
using namespace std;

class A{
    int s;
    public: int a,b;
    void ip1(){
        cout<<"Enter a: "<<endl;
        cin>>a;
        cout<<"Enter b: "<<endl;
        cin>>b;

    }
};
class B{
    public: int c;
    void ip2(){
        cout<<"Enter C: "<<endl;
        cin>>c;
    }
};
class C: public A, public B{
    int s;
    public: void sum(){
        s=a+b+c;
        cout<<"Sum of a, b and c: "<<s<<endl;\

    }
};

int main(){
    C obj;
    obj.ip1();
    obj.ip2();
    //obj.ipC();
    obj.sum();

    return 0;
}
