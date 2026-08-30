#include <iostream>
#include <vector>

class SmartHandler {
public:
    explicit SmartHandler(int seed) : state_(seed) {}

    int sync_manager(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 7) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    SmartHandler obj(7);
    std::cout << obj.sync_manager(7) << std::endl;
    return 0;
}
