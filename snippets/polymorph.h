class Base {};
class Derived1 : public Base {
    public:
        virtual bool foo();
};
class Derived2 : public Derived1 {
    public:
        bool foo() override;
};
class Derived3 final : public Derived2 {    // final: no further inheritance
    public:
        bool foo() final override;  // final: no further overriding
};