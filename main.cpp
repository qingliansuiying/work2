#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	double r=0,s=0;            //rΪ�뾶��sΪ�������ʼֵ��Ϊ0
	cin>>r; 
	if(r<=0)                    //������rֵ�Ƿ���ȷ�����ж�
		cout<<"Wrong!"<<endl;
	else
	{
		s=area(r);          //����������㺯��
		cout<<s<<endl;      //��������������ֵ
	}
	return 0;
}