#include<iostream>
using namespace std; 
class Point {
private:
	int x=60;
	int y=80;
public:
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "(" << x << "," << y <<")" << endl;
	}
};

int main() {
	Point P;
	int i, j;
	cin >> i >> j;
	P.setPoint(i, j);
	cout << "修改后的坐标为：";
	P.display();
	system("pause");
	return 0;
}