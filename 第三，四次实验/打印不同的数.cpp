//#include<iostream>
//using namespace std;
//int main() {
//	cout << "Enter the number:";
//	int arr1[10];
//	for (int a = 0; a <= 9; a++) {
//		cin >> arr1[a];
//	}
//	cout << "The distinct numbers are:";
//	int j = 9;
//	for (int i = 0; i <= j; i++) {
//		for (int k = 0; k <= j; k++)
//		{
//			if (arr1[i] == arr1[k] && i != k)
//			{
//				int t = arr1[k];
//				arr1[k] = arr1[j];
//				arr1[j] = t;
//				j--;
//				k = 0;
//			}
//		}
//	}
//	for (int y = 0; y <= j; y++) {
//		cout << arr1[y] << " ";
//	}
//	system("pause");
//	return 0;
//}