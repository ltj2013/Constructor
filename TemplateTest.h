#pragma once

template <typename T,typename U>
class TemplateTest {
private:
	T fisrt_para;
	U second_para;
public:
	TemplateTest(T first, U second) {
		this->fisrt_para = first;
		this->second_para = second;
	}

	T getFisrtPara() const;
	U getSecondPara() const;
};

// 模板函数和模板类不能分离编译，一种解决方案如下：函数定义在h文件中；
/*
template <typename T, typename U>
T TemplateTest<T, U>::getFisrtPara() const {
	return this->fisrt_para;
}
template <typename T, typename U>
U TemplateTest<T, U>::getSecondPara() const {
	return this->second_para;
}*/