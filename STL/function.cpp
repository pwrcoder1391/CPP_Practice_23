#include <iostream>
#include <functional>

int main() {
    int x = 42;

    // Lambda with capture clause [=]
    auto lambda = [=]() {
        std::cout << "Captured value: " << x << std::endl;
    };

    // std::function with the lambda
    std::function<void()> func = lambda;

    // Call the std::function
    func();

    return 0;
}
