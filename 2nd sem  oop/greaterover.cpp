#include <iostream>

class Box {
private:
    double volume;

public:
    Box(double v) : volume(v) {}

    bool operator>(const Box& other) {
        return this->volume > other.volume;
    }

    double getVolume() const {
        return volume;
    }
};

int main() {
    Box box1(29.5);
    Box box2(19.2);

    if (box1 > box2) {
        std::cout << "Box 1 is larger than Box 2." << std::endl;
    } else {
        std::cout << "Box 1 is not larger than Box 2." << std::endl;
    }

    return 0;
}
