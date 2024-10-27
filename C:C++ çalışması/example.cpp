#include "mplotlib.cpp"
namespace plt = matplotlibcpp;

int main() {
    std::vector<double> x = {1, 2, 3, 4, 5};
    std::vector<double> y = {1, 4, 9, 16, 25};

    plt::plot(x, y);
    plt::title("Example Plot");
    plt::xlabel("x axis");
    plt::ylabel("y axis");

    plt::show();
    return 0;
}