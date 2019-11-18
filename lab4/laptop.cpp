#include "laptop.h"
using namespace std;

laptop:: laptop(string laptop_name, int laptop_power, int laptop_memory, int laptop_cores, int laptop_gpu ){
    name = laptop_name;
    power = laptop_power;
    memory = laptop_memory;
    cores = laptop_cores;
    gpu = laptop_gpu;
}
    string laptop::getName() {
    return name;}
    int laptop::getPower() {
    return power;}

    int laptop::getMemory() {
    return memory;}

    int laptop::getCores() {
    return cores;}

    int laptop::getGpu() {
    return gpu;}

    void laptop::get_inf() {
        cout << "\nYour laptop is " <<"\""<<getName() << "\""<<" ||"
        << " CPU power is " << getPower() <<" ||"
        << " Temporary memory is " << getMemory() <<" ||"
        << " Numbers of cores: " << getCores() <<" ||"
        << " GPU memory is " << getGpu() << "\n";
    }
    laptop::~laptop() {

}

