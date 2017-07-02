#include <iostream>
#include <cstdio>
using namespace std;

class Singleton{
    private:
        int m;
        Singleton(){m = 10;}
        static Singleton* inst;
    public:
        static Singleton* getInstace(){
            if (inst == NULL){
                inst = new Singleton();
            }
            return inst;
        }
        void print(){printf("m = %d",m);};

};
Singleton* Singleton::inst;////

int main(){
    Singleton* s= Singleton::getInstace();
    s->print();
}
