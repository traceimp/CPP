/**
 * Date: 11/13/2018, 16:16
 * Author: Kim92
 * Comment: ĸ��ȭ(Encapsulation) ���� 1
 */

#include <iostream>
using std::cout;
using std::endl;

class SinivelCap	// �๰ óġ�� ĸ��
{
public:
	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }
};

class SneezeCap		// ��ä�� óġ�� ĸ��
{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};

class SnuffleCap	// �ڸ��� óġ�� ĸ��
{
public:
	void Take() const { cout << "�๰�� �� �ո��ϴ�." << endl; }
};

class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap &cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient snufferer;
	snufferer.TakeSinivelCap(scap);
	snufferer.TakeSneezeCap(zcap);
	snufferer.TakeSnuffleCap(ncap);

	return 0;
}