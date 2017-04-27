#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	double r=0,s=0;            //r为半径，s为面积，初始值置为0
	cin>>r; 
	if(r<=0)                    //对输入r值是否正确进行判断
		cout<<"Wrong!"<<endl;
	else
	{
		s=area(r);          //调用面积计算函数
		cout<<s<<endl;      //输出计算所得面积值
	}
	return 0;
}