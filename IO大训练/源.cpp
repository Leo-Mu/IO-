#include<cstdio>//C语言标准输入输出()
#include<cstdlib>//C语言标准库()
#include<iostream>//标准流输入输出()
#include<fstream>//文件流输入输出()
using namespace std;

//template<class T>
//int cppstdo(T out);
//template<class T>
//T cppstdi(T &target);
//template<class T>
//int cppfo(string file,T out);
//template<class T>
//T cppfi(string file,T &target);

int main(void)
{
	ifstream in{ "IO.in" };
	ofstream out("IO.out");
	int temp;
	while (in>>temp)
	{
		cout << temp << endl;
		out << temp << " ";
	}
	
	out.close();
	in.close();
	system("pause");
	return 0;
}