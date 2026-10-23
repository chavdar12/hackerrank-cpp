#pragma once

class Matrix {
public:
    std::vector<std::vector<int> > a;

    Matrix operator+(const Matrix &other) const {
        Matrix result;
        int rows = a.size();
        int cols = a[0].size();
        result.a.resize(rows, std::vector<int>(cols));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.a[i][j] = a[i][j] + other.a[i][j];
            }
        }
        return result;
    }
};
