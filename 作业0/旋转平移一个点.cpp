#include<Eigen/Core>
#include<Eigen/Dense>
#include<iostream>
#include<cmath>
#define _USE_MATH_DEFINES
int main()
{
    Eigen::Vector3d v(2.0f,1.0f,1.0f);
    Eigen::Matrix3d rota;
    Eigen::Matrix3d tran;
    double theta=(45.0/180.0)*M_PI;
    tran<<1,0,1,
          0,1,2,
          0,0,1;
          
    rota<<cos(theta),-1.0*sin(theta),0,
          sin(theta),cos(theta),0,
          0,0,1;
          
    v=tran*rota*v;
    std::cout<<v[0]<<std::endl;
    std::cout<<v[1]<<std::endl;
    std::cout<<v[2];
    return 0;

}

