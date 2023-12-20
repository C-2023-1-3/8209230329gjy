//#include<iostream>
//#include<string>
//using namespace std;
//class student {
//private:
//	
//	
//public:
//	long long idid;
//	int score;
//	student(){}
//	student(long long ID, int Score) {
//		idid = ID;
//		score = Score;
//	}
//};
//void max(student*t) {
//	student *p = t;
//	int m = 0;
//	long long n;
//	for (;t<p+5;t++) {
//		if (m < t->score) 
//		{
//			m = t->score;
//			n = t->idid;
//		}
//	}
//	t = p;
//	for (; t < p + 5; t++) {
//		if (m == t->score)
//		{
//			m = t->score;
//			n = t->idid;
//			cout << n<<"\t";
//		}
//	}
//}
//int main() {
//	student arr[5];
//	for (int i = 0; i < 5; i++) {
//		cout << "请输入第" << i+1 << "个学生的学号与成绩：" << endl;
//		cin >> arr[i].idid >> arr[i].score;
//	}
//	cout << "最高成绩者的学号:";
//max(arr);
//	system("pause");
//	return 0;
//}