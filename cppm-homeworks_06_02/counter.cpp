#include <string>
#include <iostream>
#include "counter.h"


//����������� � ������ �� �����
Counter::Counter(int tik) { this->tik = tik; }

//����������� �� ���������
Counter::Counter() { tik = 1; }

//���������� �������
Counter Counter::get_counter() { return tik; }

//��������� �������, � �� �� �������� ������/�� ������ �������, ���������� true, ���� ������������ �� ������ "x"
 bool Counter::count(std::string a) {

        if (a == "+") {
            tik++;
            return true;
        }
        if (a == "-") {
            tik--;
            return true;
        }
        if (a == "=") {
            std::cout << tik << std::endl;
            return true;
        }
        if (a == "x" || a == "�") {
            std::cout << "�� ��������!" << std::endl;
            return false;
        }
        else {
            std::cout << "�������� �������!" << std::endl;
            return true;
        }


    }