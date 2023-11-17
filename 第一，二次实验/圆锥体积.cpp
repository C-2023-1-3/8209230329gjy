#include<iostream>
using namespace std;
#define p 3.1415926
int main() {

int r = 0;
int h = 0;
cout << "请分别输入圆锥的底面半径与圆锥的高：";
cin >> r;
cin >> h;
cout << "该圆锥的体积为：" << (r * r * h * p) / 3;
system("pause");
return 0;
}