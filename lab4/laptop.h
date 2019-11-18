#ifndef LABA4_LAPTOP_H
#define LABA4_LAPTOP_H
#include <string>
#include <iostream>
using namespace std;

class laptop {

private:
        string name; //назва фірми
        int power; //швидкодія процесора ( у ГГц)
        int memory; //кількість оперативної пам'яті
protected:
        int cores; //кількість ядер процессора
        int gpu;  //об'єм відео пам'яті у Гб
public:
        string country; //країна виробник
        int price; //вартість

    laptop();
    laptop(string laptopname, int laptoppower, int laptopmemory, int laptopcores, int laptopgpu );

    string getName();
    int getPower();
    int getMemory();
    int getCores();
    int getGpu();

    void get_inf();

    ~laptop();
};
#endif //LABA4_LAPTOP_H
