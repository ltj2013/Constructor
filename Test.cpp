#include <iostream>
#include "Test.h"

int Instruction::getOperandNum() const {
	this->operand_num = 4;
	//this->operation_type = 2;
	return this->operand_num;
}