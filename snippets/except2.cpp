int divide(int a, int b) {
    if (b == 0) throw "Cannot divide by zero";
    return a / b;
}
int main(){
    try {
        divide(1, 0);
    } catch (const char* e) {
        std::cout << e << std::endl;
    }
}