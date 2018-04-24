#pragma once
#include <iostream>

namespace learning {
	template <typename T>

	class Constructor {
		T *name;
	public:
		Constructor(){
			name = new T[20];
			std::cout << "默认构造函数" << std::endl;
		}
		Constructor(Constructor<T> &other) {
			std::cout << "copy constructor" << std::endl;
		}
		
		Constructor<T> &operator = (Constructor<T> &other) {
			std::cout << "赋值构造函数" << std::endl;
			this->name = new T[20];
			memcpy(this->name, other.name, sizeof(T) * 20);
			return other;
		}
		
		~Constructor() {
			delete name;
		}
	};
}