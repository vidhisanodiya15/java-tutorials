#include<bits/stdc++.h>
using namespace std;

class A{
    int s;
    public: int a,b;
    void ip()
    {
        cout<<"Enter a: "<<endl;
        cin>>a;
        cout<<"Enter b: "<<endl;
        cin>>b;
    }
};
class B{
    public: int c;
    void ip(){
        cout<<"Enter C: "<<endl;
        cin>>c;
    }
};
class C: public A, public B{
    int s;
    public: void sum(){
        s=a+b+c;
        cout<<"Sum of a, b and c: "<<s<<endl;

    }
};

int main(){
    C obj;
    obj.A::ip();
    obj.B::ip();
    //obj.ipC();
    obj.sum();

    return 0;
}
