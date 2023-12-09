//#include<iostream>
//#include<string>
//using namespace std;
//#define max 40
//int parseHex(const char* const hexString)
//{
//	int sum = 0;
//	int j = strlen(hexString);
//	for (int i = 0; i < strlen(hexString); i++) {
//		if (hexString[i] <= '9' && hexString[i] >='0')
//		{
//			int x = hexString[i]-48;
//			j = j - i-1;
//			if(j>0)
//			{
//			for (; j>0;j--)
//			{
//				x =x* 16;
//			}
//			}
//			j = strlen(hexString);
//			sum = sum + x;
//         }
//		else
//		{
//			char o = hexString[i];
//			int y = o -'A'+10;
//			j = j - i-1;
//			if (j > 0)
//			{
//				for (; j > 0; j--)
//				{
//					y = y * 16;
//				}
//			}
//			j = strlen(hexString);
//			sum = sum + y;
//		}
//	}
//		return sum;
//}
//int main() {
//	char  hexString[40];
//	cin>>hexString;
//	cout << parseHex(hexString);
//	return 0;
//}