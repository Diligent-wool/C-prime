#include<iostream>
using namespace std;

int main1() {
	int sum = 0, value;
	//通过将输入值作为while的判断条件，从而读取输入的多个数，当输入值的数据类型与value的数据类型不同时，则跳出while循环
	while(std::cin >> value) {
		sum += value;
	}
	std::cout << sum << endl;
	return 0;
}