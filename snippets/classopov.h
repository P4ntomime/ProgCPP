class Complex {
    public:
        Complex(double _real = 0, double _img = 0) : real{_real}, img{_img}{};
        ~Complex() {};

        friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
            os << c.real << " + " << c.img << "i";
            return os;};
        Complex operator+(const Complex& c) const {
            return Complex(real + c.real, img + c.img);};
            
        Complex operator-(const Complex& c) const {
            return Complex(real - c.real, img - c.img);};
            
        Complex operator*(const Complex& c) const {
            return Complex(real * c.real - img * c.img, real * c.img + img * c.real);};
            
        Complex operator/(const Complex& c) const {
            return Complex((real * c.real + img * c.img) / (c.real * c.real + c.img * c.img),
                        (img * c.real - real * c.img) / (c.real * c.real + c.img * c.img));};
    private:
        double real;
        double img;
};

