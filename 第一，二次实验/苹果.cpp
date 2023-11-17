#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float j=0;
	float d=0;
	for (int i = 2;i < 100;i = i * 2 )
	{
		float m = 0.8 * i;
		
			j+= m;
			d ++;
	}
	double h = j/d;
		cout <<"平均每天买苹果花" <<h <<"元。" << endl;
return 0;
}