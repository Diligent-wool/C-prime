#include<iostream>
using namespace std;

int main() {
	int value = 0, val = 0 ,n = 0;//��ʼ����������
	std::cout << "�������ݸ���" << std::endl;
	std::cin >> n;//��ȡ�������ݸ���
	int* a = new int[n];//��̬������������
	for (int i = 0; i < n; i++) {//�����ݴ�ȡ������
		std::cin >> value;
		a[i] = value;
	}
	int con = 1;//Ĭ�϶���ĵ�һ��ֵ���ִ���Ϊ1
	int** v = new int* [n];
	for (int i = 0; i < n; i++)
	{
		v[i] = new int[2];
	}//��̬�����n*2������
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				con++;
			}
		}
		v[i][0] = a[i];//�����ݺ�ͳ�ƴ��������ά������
		v[i][1] = con;
		con = 1;
		}
	for (int i = 0; i < n; i++) {//ɸѡ������ظ����ֵ���
		for (int j = i+1; j < n; j++) {
			if (v[j][0] == a[i]) {
				v[j][1] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {//��γ��ֵ���ֻ�ܿ������һ��
		if (v[i][1] != 0) {
			std::cout << v[i][0]<<"���ֵĴ���Ϊ��"<<v[i][1]<<std::endl;
		}
	}
	for (int i = 0; i < n; i++)//�ֶ��ͷŶ�̬������ڴ�
	{
		delete[] v[i];
	}
	delete[] v;
	return 0;
}