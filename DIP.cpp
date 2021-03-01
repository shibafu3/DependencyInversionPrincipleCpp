#include <iostream>

class HighInterface {
public:
    virtual void Show() = 0;
};

class High {
public:
    HighInterface *hi_;
    High(HighInterface &hi) {
        hi_ = &hi;
    }

    void UseLow() {
        hi_->Show();
    }
};



class Low : public HighInterface {
public:
    void Show () override {
        std::cout << "Used Low" << std::endl;
    }
};



int main () {
    Low li;
    High high(li);
    high.UseLow();
}