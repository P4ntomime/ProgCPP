class Dog{
    public:
        Dog (std::string name_) : name(name_) {}
        virtual ~Dog() {};
        virtual void sit() const {}; // if =0 instead of {} used -> Dog becomes pure virtual class
        virtual void bark() const {std::cout << "woof" << std::endl;}
        virtual void getName() const {std::cout << name << std::endl;}
    private:
        std::string name;
};
class Husky: public Dog{
    public:
        Husky (std::string name_) : Dog(name_) {}
        ~Husky() = default;     // tells compiler to create default destructor
        void sit() const override {std::cout << "sit" << std::endl;}
        void bark() const override {std::cout << "wuff" << std::endl;}
};
int main(){
    Dog* pet[] = {new Dog("bud"), new Husky("don")};
}