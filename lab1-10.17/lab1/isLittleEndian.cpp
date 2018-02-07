#include <iostream>

bool IsLitte_Endian();

int main() {
    if (IsLitte_Endian())
        std::cout << "С��" << std::endl;
    else
        std::cout << "���" << std::endl;
    return 0;
}

bool IsLitte_Endian() {
    int wTest = 0x12345678;
    short *pTest = (short *) &wTest;
    return !(0x1234 == pTest[0]); //����������Big_endian�ģ��򷵻�false������Little_endian�ģ��򷵻�true��
}