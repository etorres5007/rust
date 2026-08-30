#include <iostream>
#include <vector>

class LocalLoader {
public:
    explicit LocalLoader(int seed) : state_(seed) {}

    int fetch_gateway(int count) {
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
    LocalLoader obj(33);
    std::cout << obj.fetch_gateway(33) << std::endl;
    return 0;
}
