#include<iostream>
using namespace std;
class number{
	int x;
	public:
		number(int a){
			x=a;
			
		}
		number operator+(number n)
		{
			number temp(0);
			temp.x = x+n.x;
			return temp;
		}
		void display()
		{
			cout<<"value ="<<x<<endl;
		}
};
int main(){
	number n1(10);
	number n2(20);
	number n3(0);
	n3=n1+n2;
	cout<<"First number:";
	n1.display();
	cout<<"Second number:";
	n2.display();
	cout<<"Sum:";
	n3.display();
	return 0;
}
