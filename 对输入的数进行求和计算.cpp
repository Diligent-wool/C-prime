#include<iostream>
using namespace std;

int main1() {
	int sum = 0, value;
	//ͨ��������ֵ��Ϊwhile���ж��������Ӷ���ȡ����Ķ������������ֵ������������value���������Ͳ�ͬʱ��������whileѭ��
	while(std::cin >> value) {
		sum += value;
	}
	std::cout << sum << endl;
	return 0;
}