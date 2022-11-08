/*
    "THE BEER-WARE LICENSE"
    Onyrew wrote this file. As long as you retain this notice you can do whatever you want with this stuff.
    If we meet some day, and you think this stuff is worth it, you can buy me a beer in return.
*/
#include <iostream>
#include <vector>

struct Task {
    double t, c;
};

void dma(const std::vector<Task>& _tasks, const double& _c)
{
    double rn = _c, rn_prev = 0;
    std::cout << 0 << "\t" << 0 << "\t" << _c << std::endl;
    for (unsigned int i = 0; rn != rn_prev; i++) {
        std::cout << rn << "\t";
        rn_prev = rn;
        double res = 0.0;
        for (unsigned int j = 0; j < _tasks.size(); j++) {
            double val = std::ceil(rn / _tasks[j].t) * _tasks[j].c;
            res += val;
            std::cout << val;
            if (j < _tasks.size() - 1) {
                std::cout << " + ";
            }
        }
        rn = _c + res;
        std::cout << "\t" << rn << std::endl;
    }
}

int main()
{
    std::vector<Task> tasks{
        { 1, 0.1 },
        { 16, 4 },
        { 32, 6 },
        { 64, 8 }
        // { 128, 20 }
    };
    dma(tasks, 20);
    return 0;
}