#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "������� ����� ����:";
    cin >> n;
    cout << "��� ��� ";

    switch (n % 10) {
    case 0:
    case 1:
        cout << "���";
        break;
    case 2:
    case 3:
        cout << "����";
        break;
    case 4:
    case 5:
        cout << "����";
        break;
    case 6:
    case 7:
        cout << "�����";
        break;
    case 8:
    case 9:
        cout << "���";
        break;
    }

    switch (n % 12) {
    case 0:
        cout << "�� �������\n";
        break;
    case 1:
        cout << "��� ������\n";
        break;
    case 2:
        cout << "�� ������\n";
        break;
    case 3:
        cout << "�� ������\n";
        break;
    case 4:
        cout << "�� �����\n";
        break;
    case 5:
        cout << "��� ����\n";
        break;
    case 6:
        cout << "��� �����\n";
        break;
    case 7:
        cout << "��� �������\n";
        break;
    case 8:
        cout << "��� �������\n";
        break;
    case 9:
        cout << "�� ����\n";
        break;
    case 10:
        cout << "�� ������\n";
        break;
    case 11:
        cout << "�� ����\n";
        break;
    }
}