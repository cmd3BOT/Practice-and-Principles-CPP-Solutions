#include <iostream>

struct B {
    virtual void f() const { std::cout << "B::f() "; }
    void g() const { std::cout << "B::g() "; }
};

struct D : B {
    void f() const override { std::cout << "D::f() "; }
    void g() { std::cout << "D::g() "; }
};

struct DD : D {
    void f() { std::cout << "DD::f() "; }
    void g() const { std::cout << "DD::g() "; }
};

void call(const B& b) {
    b.f();
    b.g();
    std::cout << "\n";
}

/**
 * win has a vector of shapes [circle/rectange/poly]
 * loop on shapes
 * call shape[i].draw()
 * Shape.draw() calls draw_lines() [of type virtual]
 * IF derived class has an override call it
 */

int main() {
    B b;
    D d;
    DD dd;

    call(b);
    call(d);
    call(dd);
}