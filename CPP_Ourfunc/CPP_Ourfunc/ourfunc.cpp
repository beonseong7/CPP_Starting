#include<iostream>

void simon(int);//void�� �Լ� simon�� �����Ѵ�.

int main() {
	using namespace std;//���ӽ����̽� std�� ����Ѵ�.(������ cin,cout ��� �Ұ���)
	simon(3); //simon�Լ��� ���ڰ� 3�� �ѱ�� ȣ���Ѵ�.
	cout << " ������ �ϳ� ���ÿ�: ";
	int count;
	cin >> count;
	simon(count);//simon�Լ��� count�� �Է��Ѱ��� ���ڰ����� �ѱ�� ȣ���Ѵ�.
	cout << "��" << endl;
	return 0;
}
void simon(int n)
{
	using namespace std;
	cout << "Simon ��, �߰����� " << n << "�� �ε����" << endl; //������ ���� n�� ���� ȣ���Ѵ�
	//void �� �Լ��̱⶧���� return�� �� �ʿ䰡 ����.
}