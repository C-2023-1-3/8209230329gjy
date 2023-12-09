//#include<iostream>
//using namespace std;
//int main() {
//	int arr1[6];
//	cout << "Enter list1:";
//	for (int a = 0; a <= 5; a++)
//	{
//		cin >> arr1[a];
//	}
//	cout << endl;
//	int arr2[5];
//	cout << "Enter list2:";
//	for (int a = 0; a <= 4; a++)
//	{
//		cin >> arr2[a];
//	}
//	cout << endl;
//	int arr3[11];
//	for (int q = 0; q <=5; q++)
//	{
//		arr3[q] = arr1[q];
//	}
//	int l = 0;
//	for (int q =6; q <=10; q++,l++) 
//	{
//			arr3[q] = arr2[l];
//	}
//	for (int i = 0; i <= 10; i++)
//			{
//				for(int j=0;j<10;j++){
//				if (arr3[j] > arr3[j + 1]) {
//					int t = arr3[j];
//					arr3[j] = arr3[j +1];
//					arr3[j + 1] = t;
//				}
//				}
//
//			}
//	cout << "The merged list is   ";
//	for (int y = 0; y <= 10; y++) 
//	{
//					cout << arr3[y] << " ";
//	}
//return 0;
//}