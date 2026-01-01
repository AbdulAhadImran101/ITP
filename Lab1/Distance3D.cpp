#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x_coord;
    int y_coord;
    int z_coord;

    cin >> x_coord;
    cin >> y_coord;
    cin >> z_coord;

    double x_sq = x_coord * x_coord;
    double y_sq = y_coord * y_coord;
    double z_sq = z_coord * z_coord;

    double sum_of_all = x_sq + y_sq + z_sq;
    double final_dist = sqrt(sum_of_all);

    cout << final_dist << endl;

    return 0;
}
