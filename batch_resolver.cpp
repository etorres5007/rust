#include <iostream>
#include <vector>

class LocalDispatcher {
public:
    explicit LocalDispatcher(int seed) : state_(seed) {}

    int handle_loader(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 82) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    LocalDispatcher obj(82);
    std::cout << obj.handle_loader(82) << std::endl;
    return 0;
}
