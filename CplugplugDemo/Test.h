#pragma once
///TESTCPPDLL_API �����˺�������ݣ���ȻҲ���Բ�ʹ��"__declspec(dllexport)"��˼�ǽ��������ε����ݶ���ΪDLL��Ҫ����������
#define TESTCPPDLL_API __declspec(dllexport)
//extern "C"�����˸ú����ڱ��������ʱʹ��C���Եķ�ʽ���Ա�֤����������
extern "C" TESTCPPDLL_API int  __stdcall Add(int a, int b);


//__stdcall �������÷���
extern "C" TESTCPPDLL_API void __stdcall WriteString(wchar_t* content);

//ָ��Ĵ���
//����һ������ָ�룬����������ָ������ݼ�1
extern "C" TESTCPPDLL_API void __stdcall AddInt(int *i);
//����һ����������ָ���Լ����鳤�ȣ�����ÿһ��Ԫ�ز����
extern "C" TESTCPPDLL_API void __stdcall AddIntArray(int *firstname,int arraylength);
//��C++������һ���������飬��������ָ�뷵�ظ�C#
extern "C" TESTCPPDLL_API int* __stdcall GetArrayFromCPP();

//����һ������ָ��
typedef void(__stdcall *CPPCallback)(int tick);
//����һ���������ú���ָ��ķ��������ڸú����е���C#�д��ݹ�����ί��
extern "C" TESTCPPDLL_API void SetCallback(CPPCallback callback);


struct  Vector3
{
	float X, Y, Z;
};
extern "C" TESTCPPDLL_API void __stdcall SendStructFromCSToCPP(Vector3 vector3);
