#include <matplot/matplot.h>

#include <iostream>
#include <string>
#include <vector>
double random(double min, double max) {
  return min + (max - min) * rand() / RAND_MAX;
}
void plotPoints(std::vector<double> x, std::vector<double> y) {
  using namespace matplot;

  auto ax = gca();
  plot(ax, x, y)->color("red").marker("s").marker_size(15);
  hold(ax, on);
  plot(ax, x, y)->color("black").line_width(3);

  show();
}
double func1(double x) { return sin(x) + cos(x); }
double func2(double x) { return exp(x) + log(x); }
double func3(double x, double y) { return sin(x) * cos(y); }
int main() {
  // x 0.1:4
  // std::vector<double> x = matplot::linspace(0.1, 4, 100);x

  // std::vector<double> y1 = matplot::transform(x, func1);
  // std::vector<double> y2 = matplot::transform(x, func2);

  // matplot::plot(x, y1, x, y2);
  // matplot::title("Plot of sin(x) + cos(x) and exp(x) + log(x)");
  // matplot::legend({"sin(x) + cos(x)", "exp(x) + log(x)"});
  // matplot::show();
  // x∈[−2π,2π],y∈[−2π,2π // of func3 3d plotx

  // std::vector<double> x = matplot::linspace(-2 * M_PI, 2 * M_PI, 100);
  // std::vector<double> y = matplot::linspace(-2 * M_PI, 2 * M_PI, 100);
  // matplot::vector_1d z = matplot::transform(x, y, func3);  // 2d vector

  // using namespace matplot;
  // auto [X, Y] = meshgrid(x, y);
  // auto Z = transform(X, Y, func3);
  // surf(X, Y, Z);
  // show();

  // using namespace matplot;
  // tiledlayout(3, 1);
  // auto ax1 = nexttile();
  // plot(ax1, x, time);
  // title(ax1, "Time duration");
  // auto ax2 = nexttile();
  // plot(ax2, x, generatedStates);
  // title(ax2, "States generated");
  // auto ax3 = nexttile();
  // plot(ax3, x, checkedStates);
  // title(ax3, "States checked");
  // show();

  using namespace matplot;
  // wylosuj 7 puntków z przedziału x = [2, 5]  y= [3,7]
  std::vector<double> xx;
  std::vector<double> yy;
  for (int i = 0; i < 7; i++) {
    double x = random(2, 5);
    double y = random(3, 7);
    xx.push_back(x);
    yy.push_back(y);
  }
  plotPoints(xx, yy);
}