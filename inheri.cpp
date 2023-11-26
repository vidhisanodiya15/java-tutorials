#include<iostream>
using namespace std;

Class A 
{
	public:
		int a,b,s;
		void ip()
		{
			cout<<"Enter the number a and b:";
			cin>>a>>b;
			
		}
		protected:
			void sum(){
				s=a+b;
				cout<<s;
				
			}
};
Class B:private A
{
	float av;
	public:
		void avg()
		{
			ip();
			sum();
			av=s/2;
			cout<<av<<endl;
			
			
		}
};
int main(){
	B.o1;
	o1.avg();
	return 0;
}