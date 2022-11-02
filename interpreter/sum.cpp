/* К следующей пятиминутке нужно будет повторить:
- что такое виртуальные функции, как они работают внутри 
    (чуть выше скидывал ссылку на статью по теме)
- что такое чисто виртуальная функция
- какое будет поведение при вызове метода класса используя 
    1) указатель на базовый класс 
    2) ссылку на базовый класс 
    3) объект базового класса
*/

#include <iostream>

class Foo {
    public:
    int i = 42;
    virtual int plus(int a, int b) {
        return a + b;
    }

    virtual int minus(int a, int b) {
        return - a - b;
    }
};

class Bar: public Foo {
    public:

    int plus(int a, int b) override {
        return a - b;
    }
};

Foo * get_foo() {
    return new Bar();
}

void baz(int i) {}

int main(int argc, char ** argv) {  
    //1) pointer to Base class
    // Foo *func1 = new Foo();
    // std::cout<< (func1->minus(4, 3)) << std::endl;
    // delete func1;

    //2) reference to Base class
    // Bar b;
    // Foo &func2 = b;
    // std::cout<< (func2.minus(5, 9)) << std::endl;
     
    //3) using object of base class ??
    return 0;
}
