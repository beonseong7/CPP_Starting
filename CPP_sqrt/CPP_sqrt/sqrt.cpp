#include<iostream>
#include<cmath>

int main() {
	using namespace std;
	double area;//double�� ���� ����
	cout << "���� ������ �����Ʈ ������ �Է��Ͻÿ�:";
	cin >> area;//�Է°��� double������ ����
	double side;//double�� ���� ����
	side = sqrt(area);//cmath ���̺귯�����ִ� �Լ� sqrt�� ����Ѵ�. �ش� �Լ��� ���ڰ��� �������� �����Ѵ�.
	cout << "�簢�� ������ �� ����" << side
	<< "��Ʈ�� ����մϴ�." << endl;//ȸ�翡 ���� ���࿡ �����ִ� ���ڼ��� ���ѵǸ� �̷������� ���� ������ ������ �� �ִ�.
	cout << "�����׿�" << endl;
	return 0;
}