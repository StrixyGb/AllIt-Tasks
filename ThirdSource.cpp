#include <iostream>
using namespace std;
class Date {
private:
	int day;
	int month;
	int year;
public:
	explicit Date(int d, int m, int y) : day(d), month(m), year(y) {}
	int getday() const {
		return day;
	}
	int getmonth() const {
		return month;
	}
	int getyear() const {
		return year;
	}
	void printdate() const {
		cout << "Date: " << getday() << "/" << getmonth() << "/" << getyear() << "\n";
	}
};
void main() {
	Date date(02, 11, 2024);
	date.printdate();

}
//��������� ������� ����������� � ���� ������� ���� ��� ������� ���� ������� ����� ���̲��� ����� 
//��� � ���������� �� ����� ���� ������ � ����������� ��� ���� �������� ����� ������
