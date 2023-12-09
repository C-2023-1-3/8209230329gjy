//#include<iostream>
//using namespace std;
//bool is_prime(int a) {
//	int n = a-1;
//	for (;n>2&& a % n != 0;) 
//	{
//		n--;
//		if ((a% n) == 0) 
//		{
//			return false;
//		}
//	}	
//	return true;
// }
//int main() {
//	int a = 0;
//	cout << "请输入一个数：" << endl;
//	cin >> a;
//	cout << is_prime(a) << endl;
//	int d = 1;
//	for (int b = 1; b <= 200;) {
//		for (int c = 0; b <= 200;) {
//			c++;
//			if(is_prime(c)>0)
//			{
//				d++;
//				cout << c<<"    ";
//				b++;
//				if (d >= 11) {
//					cout << endl;
//					d = 1;
//				}
//			}
//			
//		}
//	}
//	system("pause");
//	return 0;
//}