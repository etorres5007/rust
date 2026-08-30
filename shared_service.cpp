#include <iostream>
#include <vector>

class RemoteService {
public:
    explicit RemoteService(int seed) : state_(seed) {}

    int render_scheduler(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 83) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    RemoteService obj(83);
    std::cout << obj.render_scheduler(83) << std::endl;
    return 0;
}
