#include <iostream>

using namespace std;

int main() {
    double std1_marks[] = {60, 75, 85, 95, 49};
    double std2_marks[] = {59, 70, 65, 45, 39};
    int n = 5;

    double sum1 = 0;
    double sum2 = 0;

    int i = 0;
    while (i < n) {
        sum1 = sum1 + std1_marks[i];
        sum2 = sum2 + std2_marks[i];
        i = i + 1;
    }

    double meanX = sum1 / n;
    double meanY = sum2 / n;

    double cov_sum = 0;
    int j = 0;
    while (j < n) {
        double part1 = std1_marks[j] - meanX;
        double part2 = std2_marks[j] - meanY;
        cov_sum = cov_sum + (part1 * part2);
        j = j + 1;
    }

    double covariance = cov_sum / (n - 1);

    cout << "Mean of Student 1: " << meanX << endl;
    cout << "Mean of Student 2: " << meanY << endl;
    cout << "Covariance: " << covariance << endl;

    if (covariance > 0) {
        cout << "Positive Covariance: Students score high and low together." << endl;
    } else {
        if (covariance < 0) {
            cout << "Negative Covariance: One scores high when other scores low." << endl;
        } else {
            cout << "Zero Covariance: No linear relationship." << endl;