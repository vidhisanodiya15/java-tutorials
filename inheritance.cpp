#include<iostream>
using namespace std;

//class A 
//{
//	public:
//		int a,b,s;
//		void ip()
//		{
//			cout<<"Enter the number a and b:";
//			cin>>a>>b;
//			
//		}
//		protected:
//			void sum(){
//				s=a+b;
//				cout<<s<<endl;
//				
//			}
//};
//class b:private A
//{
//	float av;
//	public:
//		void avg()
//		{
//			ip();
//			sum();
//			av=s/2;
//			cout<<av<<endl;
//			
//			
//		}
//};
//int main(){
//	b o1;
//	o1.avg();
//	return 0;
//}


class A{
	

public:
	int a,b;
	void ipA(){
		cout<<"Enter the number a and b:";
		cin>>a>>b;
		
	}
	
};
class B{
	public:
		int c;
		void ipB(){
			cout<<"Enter the number c:"<<endl;
			cin>>c;
			
		}
};
class C:public B,public A{
int s;
public :
	void sum(){
		s=a+b+c;
    	cout<<s<<endl;

	}
};
int main(){
	C obj;
	obj.ipA();
	obj.ipB();
	obj.sum();
	return 0;
}

	
	
	
