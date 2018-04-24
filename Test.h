#pragma once
class Instruction {
private:
	mutable int operand_num; // can be modified in any case
	int operation_type;
public:
	int getOperandNum() const;
};