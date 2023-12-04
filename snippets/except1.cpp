try {
    throw "Something went wrong";
} catch (const char* e) {
    std::cout << e << std::endl;
}