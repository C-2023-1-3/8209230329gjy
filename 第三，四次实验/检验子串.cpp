//#include<iostream>
//#include<stdio.h>
//using namespace std;
//#define max 20
//int indexof(const char s1[],const char s2[])
//{
//	int size1 = strlen(s1);
//	int size2 = strlen(s2);
//	int a=1;
//	int p=0;
//	int b = 0;
//	if (size1 > size2) {
//		return -1;
//	}
//	int i = 0;
//	for (int j = 0; j < size2&&i<size1; j++) 
//	{
//		if (s1[i] == s2[j])
//		{
//			b = j-size1+1; a = 2;
//			i++;
//		}
//		else {
//			a = 1;
//			i = 0;
//		}
//		if (i == size1 / s1[0] - 1) {
//			break;
//		}
//	}
//	if (a == 2) {
//		return b;
//	}
//	if (a == 1) {
//		return -1;
//	}
//}
//int main() {
//    char s1[max];
//	char s2[max];
//	cout << "enter the first string: ";
//	cin.getline (s1,max);
//	cout << "enter the second string:";
//	cin.getline (s2,max);
//	cout << "indexof(¡°";
//	for (int i = 0; i <strlen(s1)/sizeof(s1[0]) ; i++) {
//		cout << s1[i];
//	}
//	cout << "¡±£¬¡°";
//	for (int i = 0; i < strlen(s2) / sizeof(s1[0]) ; i++) {
//		cout << s2[i];
//	}
//	cout << "¡±)is";
//	cout << indexof(s1, s2);
//
//}