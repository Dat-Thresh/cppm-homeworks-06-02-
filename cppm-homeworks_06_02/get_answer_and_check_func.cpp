#include "counter.h"
#include <string>
#include <iostream>

Counter get_and_check_answer() {

    bool flag = false;
    std::string answer;
    //������� ������� �� ��������� �������
    Counter tmp;

    //������, ���� ���� �� ������ ��������� ����� (��/���)
    while (!flag) {
        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
        std::getline(std::cin, answer);
        //���� ��, �� ������� ��������� �� ��������� ����� � ���������� � �������� ����� ���������� ���������� (tmp)
        //� ���������� ����
        if (answer == "��" || answer == "��" || answer == "��" || answer == "��") {
            int numb;
            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> numb;
            std::cin.ignore();
            Counter counter(numb);
            tmp = counter;
            flag = true;
        }
        //���� ���, �� ������ ����� ��������� ������� � ���������� ����
        else if (answer == "���" || answer == "���" || answer == "���" || answer == "���" || answer == "���" || answer == "���" || answer == "���") {
            std::cout << "�������� �������� ����������� �� ��������� �� \"1\"" << std::endl;
            flag = true;

        }
        //�� �������� ����������� ������ -> ������������ � ������ �����
        else {
            std::cout << "�������� ����!" << std::endl;
            flag = false;
        }

    }
    return tmp;
}