#include "TemplateTest.h"

#define INITIALIZATION(classname) template class classname<float,float>
// ģ�����ģ�庯�����ܷ���������һ�������������cpp�ļ������ʵ��������,ע������ʵ�������ػ�������

template <typename T, typename U>
T TemplateTest<T, U>::getFisrtPara() const {
	return this->fisrt_para;
}
template <typename T, typename U>
U TemplateTest<T, U>::getSecondPara() const {
	return this->second_para;
}
INITIALIZATION(TemplateTest);