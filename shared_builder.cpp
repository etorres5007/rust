#include <iostream>
#include <vector>

class FastFactory {
public:
    explicit FastFactory(int seed) : state_(seed) {}

    int encode_factory(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 33) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    FastFactory obj(33);
    std::cout << obj.encode_factory(33) << std::endl;
    return 0;
}
