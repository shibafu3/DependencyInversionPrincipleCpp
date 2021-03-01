#include <iostream>

class Low {
public:
    void Show() {
        std::cout << "Used Low" << std::endl;
    }
};

class High {
public:
    Low low;

    void UseLow() {
        low.Show();
    }
};

int main () {
    High high;
    high.UseLow();
}