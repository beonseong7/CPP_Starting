#include<iostream>
int stonetolb(int);//������ �Լ� stonetolb ����
int main() {
	using namespace std;
	int stone;
	cout << "ü���� ��������� �Է��Ͻÿ�: ";
	cin >> stone;
	int pounds = stonetolb(stone);//stonetolb �Լ� ���ϰ��� pounds ������ ����
	cout << stone << " ������ ";
	cout << pounds << " �Ŀ���Դϴ�." << endl;
	return 0;
}
int stonetolb(int sts) {
	return 14 * sts;//������ �Լ��̱⿡ �ݵ�� return�� �����ؾ��Ѵ�.
}