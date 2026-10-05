#include<iostream>
using namespace std;
class number{
	int x;
	public:
		number(int a)
		{
			x=a;
			
		}
		void operator++(){
			++x;
		}
		void display(){
			cout<<"value="<<x<<endl;
			
				}
};
int main(){
	number n(10);
	cout<<"Before increment:"<<endl;
	n.display();
	++n;
	cout<<"After increment:"<<endl;
	n.display();
	return 0;
}

