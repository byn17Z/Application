//
// Created by 赵鲲翔 on 2024/10/15.
//

#ifndef COMPILER_MULEXP_H
#define COMPILER_MULEXP_H

#include "../statement.h"
class MulExp: public statement{
public:
    std::unique_ptr<ASTnode> expression;// MulExp or UnaryExp
    std::string op;// "*" "/"
    std::unique_ptr<ASTnode> UnaryExp;// it must be a UnaryExp
    MulExp(std::unique_ptr<ASTnode> expression,std::unique_ptr<ASTnode> UnaryExp,std::string op):expression(std::move(expression)),op(op),UnaryExp(std::move(UnaryExp)){}
};


#endif //COMPILER_MULEXP_H