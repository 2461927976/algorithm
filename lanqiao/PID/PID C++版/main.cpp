#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//PID��������ı����ṹ��
struct _pid{
	float setSpeed;  //�������������������ı���ֵ
	float actualSpeed;  //ʵ������������������������������
	float err;  //���ֵ
	float err_last;  //��һ�����ֵ
	float Kp,Ki,Kd;  //���� ���� ΢��ϵ��
	float voltage;  //�����ѹֵ�����������Ҫת��Ϊ��ѹ������
	float integral;  //����ֵ
} pid; 

//PID���Ƶĳ�ʼ������
//��ʼ����ɺ���Ҫ��Kp��Ki��Kd���ϵص������Ż�����Ч��
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
PID���Ƶļ��㺯��
���ܣ�PID����
speed Ҫ�趨�����������ֵ
����ֵ���ں�ʵ�������ֵ
*/
float PID_Cal(float speed){
	pid.setSpeed = speed;
	pid.err = pid.setSpeed - pid.actualSpeed;  //���ļ��㣬����������
	pid.integral += pid.err;  //�����ӣ������ֿ���
	pid.voltage = pid.Kp * pid.err + pid.Ki * pid.integral + pid.Kd * (pid.err - pid.err_last);  //����λ����PID���ƵĹ�ʽ
	pid.err_last = pid.err;
	pid.actualSpeed = pid.voltage * 1.0;  //ת��
	return pid.actualSpeed;  //PID���ƺ��ʵ�����ֵ
}

int main(int argc, char** argv) {
	int count = 0;
	cout<<"system begin!"<<endl;
	PID_init();
	while(count < 1000){  //ִ��1000��PID���ƣ������ÿһ�ο��Ƶ�ֵ
		float speed = PID_Cal(200.0);
		cout<<"----"<<count<<"----"<<speed<<"----"<<endl;
		count++;
	}
	return 0;
}
