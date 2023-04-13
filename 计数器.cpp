#include<iostream>
using namespace std;

int main() {
	int value = 0, val = 0 ,n = 0;//初始化两个变量
	std::cout << "输入数据个数" << std::endl;
	std::cin >> n;//获取输入数据个数
	int* a = new int[n];//动态分配数据数组，但未对是否分配成功进行判断，下述也是
	for (int i = 0; i < n; i++) {//将数据存取到数组
		std::cin >> value;
		a[i] = value;
	}
	int con = 1;//默认读入的第一个值出现次数为1
	int** v = new int* [n];
	for (int i = 0; i < n; i++)
	{
		v[i] = new int[2];
	}//动态分配个n*2的数组
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				con++;
			}
		}
		v[i][0] = a[i];//将数据和统计次数存进二维数组里
		v[i][1] = con;
		con = 1;
		}
	for (int i = 0; i < n; i++) {//筛选出多次重复出现的数
		for (int j = i+1; j < n; j++) {
			if (v[j][0] == a[i]) {
				v[j][1] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {//多次出现的数只能控制输出一次
		if (v[i][1] != 0) {
			std::cout << v[i][0]<<"出现的次数为："<<v[i][1]<<std::endl;
		}
	}
	for (int i = 0; i < n; i++)//手动释放动态分配的内存
	{
		delete[] v[i];
		v[i] = NULL;//将指针赋空
	}
	delete[] v;
	v = NULL;//将指针赋空
	delete[] a;//释放动态分配内存数组的方法
	a = NULL;//将指针赋空
	return 0;
}
//动态内存分配需要对内存分配是否成功进行判断（判空），释放内存后需要对其赋空。