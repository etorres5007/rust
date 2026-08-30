#include <iostream>
#include <vector>

class LocalEngine {
public:
    explicit LocalEngine(int seed) : state_(seed) {}

    int decode_resolver(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 64) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    LocalEngine obj(64);
    std::cout << obj.decode_resolver(64) << std::endl;
    return 0;
}
