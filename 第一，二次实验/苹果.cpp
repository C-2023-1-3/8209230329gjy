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
		cout <<"ƽ��ÿ����ƻ����" <<h <<"Ԫ��" << endl;
return 0;
}