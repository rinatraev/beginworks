#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
// ��������� ��� ��������� ������� ������ - ������ ��� �������� ������������ �������
int main () {
	setlocale(LC_ALL,"rus");
	string str;              // �������� ������ ��� �������� � ����� �������
	int i=0, t1, t2;		 // �1 � �2 ��� �������� ����������� ������� (":") 
	int num1, num2, num3;    // ��� �������������� ��������� ������ ������ � �����
	string s1,s2,s3;         // ��������������� ������
	// ��� ���������� ����, ������� ����� ����������� �� ��������� ������, �������������� ��� ����������
	do{
		cout<<"������� ����� � ������� - ��:��:��"<<endl;
		getline(cin,str);
		int check1 = 0, check2 = 0, check3 = 0, check4 = 0,
	check5 = 0, check6 = 0;
	//������� ���������� ������� (":") � ������
		t1 = str.find(':');
		t2 = str.rfind(':');
		if(str.length()>8||str.length()<8) check1=1;
		if(t1!=2||t2!=5) check2=1;
		s1 = str.substr(0,2);
		s2 = str.substr(3,2);
		s3 = str.substr(6,2);
		if(isdigit(s1[0])&&isdigit(s1[1]))
		{
		num1 = atoi(s1.c_str());
		if(num1<0||num1>23) check3 = 1;
		}else check6 = 1;
		if(isdigit(s2[0])&&isdigit(s2[1]))
		{
		num2 = atoi(s2.c_str());
		if(num2<0||num2>59) check4 = 1;
		} else check6 = 1; 
		if(isdigit(s3[0])&&isdigit(s3[1]))
		{
		num3 = atoi(s3.c_str());
		if(num3<0 ||num3>59) check5 = 1;
		} else check6 = 1;
		
		i = check1+check2+check3+check4+check5+check6;
		if(i>0)    cout<<"������ � �����"<<endl;
		if(check1) cout<<"������ � ������� ������"<<endl;
		if(check2) cout<<"��������� ���������� �����������"<<endl;
		if(check3) cout<<"������ � �����"<<endl;
		if(check4) cout<<"������ � �������"<<endl;
		if(check5) cout<<"������ � ��������"<<endl;
		if(check6) cout<<"������ � ��������, ������� ���� �������"<<endl;
		
	}while (i>0);
	return 0;
}
