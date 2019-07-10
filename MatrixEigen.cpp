#include <iostream>
using namespace std;
#include <ctime>
// Eigen 部分
#include <Eigen/Core>
// 稠密矩阵的代数运算（逆，特征值等）
#include <Eigen/Dense>

int main(int argc, char** argv)
{
    Eigen::Matrix<float,2,3> matrix_23;
    matrix_23 << 1,2,3,4,5,6;
    cout << matrix_23 << endl;

    cout <<"--------------------------"<<endl;
    Eigen::Matrix3d matrix_33;
    matrix_33 << 2,2,2,3,3,3,4,4,4;
    cout << matrix_33 <<endl;

    cout <<"--------------------------"<<endl;
    Eigen::MatrixXd matrix_x = Eigen::MatrixXd::Random(3,3);
    matrix_x << 1,1,1,3,3,3,5,5,5;
    cout << matrix_x <<endl;
    
    cout <<"--------------------------"<<endl;
    Eigen::VectorXd vector_x = Eigen::VectorXd::Random(3);
    vector_x << 9,9,9 ;
    cout << vector_x << endl;

}
