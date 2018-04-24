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

// ģ�庯����ģ���಻�ܷ�����룬һ�ֽ���������£�����������h�ļ��У�
/*
template <typename T, typename U>
T TemplateTest<T, U>::getFisrtPara() const {
	return this->fisrt_para;
}
template <typename T, typename U>
U TemplateTest<T, U>::getSecondPara() const {
	return this->second_para;
}*/