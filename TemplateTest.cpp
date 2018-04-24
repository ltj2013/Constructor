#include "TemplateTest.h"

#define INITIALIZATION(classname) template class classname<float,float>
// 模板类和模板函数不能分离编译的另一个解决方案，在cpp文件中添加实例化定义,注意区分实例化和特化的区别

template <typename T, typename U>
T TemplateTest<T, U>::getFisrtPara() const {
	return this->fisrt_para;
}
template <typename T, typename U>
U TemplateTest<T, U>::getSecondPara() const {
	return this->second_para;
}
INITIALIZATION(TemplateTest);