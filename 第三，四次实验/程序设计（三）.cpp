//#include<iostream>
//using namespace std;
//int main() {
//	cout << "请输入一个具有10个双精度数字的数组：" << endl;
//	int *p1=new int[10];
//	for (int a = 0; a <= 9; a++)
//		{
//			cin >> p1[a];
//		}
//	for (int i = 0; i <= 9; i++)
//	{
//		for(int j=0;j<9;j++){
//		if (p1[j] > p1[j + 1]) {
//			int t = p1[j];
//			p1[j] = p1[j +1];
//			p1[j + 1] = t;
//		}
//		}
//	}
//	cout << "排序后数组为：" << endl;
//	for (int a = 0; a <= 9; a++) {
//		cout << p1[a] << "   ";
//	}
//	delete[]p1;
//	return 0;
//}