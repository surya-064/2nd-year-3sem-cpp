#include<iostream>
using namespace std;
class Product{
	public:
		int a,b;
		void create(){
			cin>>a>>b;
		}
		void show(){
			cout<<"a:"<<a<<" "<<"b: "<<b<<" "<<"product: "<<a*b<<endl;
		}
};
int main(){
	Product p;
	Product p1;
	Product p2;
	p.create();
	p.show();
	p1.create();
	p1.show();
	p2.create();
	p2.show();
	return 0;
}
