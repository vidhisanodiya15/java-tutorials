#include<iostream>
using namespace std;
//class time{

//public:
//	time(int t)
//	{
//		hrs=t/60;
//		cout<<"Time in hours:"<<hrs<<endl;
//		
//	}
//};
//int main()
//{
//	time t1(85);
//	cout<<"prog over";
//	return 0;


class Distance{
	int km,m;
	public:
	Distance(){
		
	}
	Distance(int d){
		km=d/1000;
		m=d%1000;
		
	}
	void Show_data(){
		cout<<"Distance in kilometer:"<<km<<"Distance in meter:"<<m<<endl;
		
	}
	
};
int main(){
	int d;
	cout<<"Enter the distance :"<<endl;
	cin>>d;
	Distance d1;
	d1=d;
	d1.Show_data();
	return 0;
}



