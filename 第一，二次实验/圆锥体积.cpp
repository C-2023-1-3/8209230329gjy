#include<iostream>
using namespace std;
#define p 3.1415926
int main() {

int r = 0;
int h = 0;
cout << "��ֱ�����Բ׶�ĵ���뾶��Բ׶�ĸߣ�";
cin >> r;
cin >> h;
cout << "��Բ׶�����Ϊ��" << (r * r * h * p) / 3;
system("pause");
return 0;
}