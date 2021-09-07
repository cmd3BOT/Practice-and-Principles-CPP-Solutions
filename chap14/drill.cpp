#include <iostream>
#include <string>

class B1 {
    public:
        virtual void vf() {
            std::cout << "B1::vf() ";
        }
        void f() {
            std::cout << "B1::f() ";
        }
    protected:
        virtual void pvf() =0;
};

class D1 : public B1 {
    public:
        void vf() override {
            std::cout << "D1::vf() ";
        }
        void f() {
            std::cout << "D1::f() ";
        }
        // void x() {std::cout << "x"; }
};

class D2 : public D1 {
    public:
        virtual void pvf() override {
            std::cout << "D2::pvf() ";
        }
};   

class B2 {
    public: 
        virtual void pvf() =0;
};

class D21 : public B2 {
    public:
        virtual void pvf() override { std::cout << str; }
    private:
        std::string str = "hello";
};

class D22 : public B2 {
    public:
        virtual void pvf() override { std::cout << num; }
    private:
        int num = 750;
};

void f(B2& b) {
    b.pvf();
}

int main() {
    // B1 b1;
    // b1.vf();
    // b1.f();   
    // std::cout << "\n";

    // D1 d1;
    // d1.vf();
    // d1.f();   
    // std::cout << "\n";

    // B1& d_ref = d1;
    // d_ref.vf();
    // d_ref.f();
    // std::cout << "\n";
 
    // D2 d2;
    // d2.vf();
    // d2.f();
    // d2.pvf();

    
    D22 d22;
    D21 d21;
    f(d22);
    f(d21);
}