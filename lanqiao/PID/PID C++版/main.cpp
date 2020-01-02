#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//PID各项参数的变量结构体
struct _pid{
	float setSpeed;  //输入变量，即期望输出的变量值
	float actualSpeed;  //实际输出变量，即采样回来的输出变量
	float err;  //误差值
	float err_last;  //上一次误差值
	float Kp,Ki,Kd;  //比例 积分 微分系数
	float voltage;  //定义电压值，最后的输出都要转化为电压来控制
	float integral;  //积分值
} pid; 

//PID控制的初始化函数
//初始化完成后主要对Kp、Ki、Kd不断地调节来优化控制效果
void PID_init(){
	cout << "PID_init begin!"<<endl;
	pid.setSpeed = 0;
	pid.actualSpeed = 0;
	pid.err = 0;
	pid.err_last = 0;
	pid.Kp = 0.2;
	pid.Ki = 0.015;
	pid.Kd = 0.2;
	pid.voltage = 0;
	pid.integral = 0;
}

/*
PID控制的计算函数
功能：PID控制
speed 要设定的输出变量的值
返回值调节后实际输出的值
*/
float PID_Cal(float speed){
	pid.setSpeed = speed;
	pid.err = pid.setSpeed - pid.actualSpeed;  //误差的计算，即比例控制
	pid.integral += pid.err;  //误差相加，即积分控制
	pid.voltage = pid.Kp * pid.err + pid.Ki * pid.integral + pid.Kd * (pid.err - pid.err_last);  //根据位置型PID控制的公式
	pid.err_last = pid.err;
	pid.actualSpeed = pid.voltage * 1.0;  //转换
	return pid.actualSpeed;  //PID控制后的实际输出值
}

int main(int argc, char** argv) {
	int count = 0;
	cout<<"system begin!"<<endl;
	PID_init();
	while(count < 1000){  //执行1000次PID控制，并输出每一次控制的值
		float speed = PID_Cal(200.0);
		cout<<"----"<<count<<"----"<<speed<<"----"<<endl;
		count++;
	}
	return 0;
}
