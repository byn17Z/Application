//
// Created by 赵鲲翔 on 2024/10/15.
//

#ifndef COMPILER_RELEXP_H
#define COMPILER_RELEXP_H

#include "../statement.h"
class RelExp:public statement {
public:
    std::unique_ptr<ASTnode> expression;// AddExp or RelExp
    std::string op;// "<" "<=" ">" ">="
    std::unique_ptr<ASTnode> AddExp;// it must be a AddExp
    RelExp(std::unique_ptr<ASTnode> expression,std::unique_ptr<ASTnode> AddExp,std::string op):expression(std::move(expression)),op(op),AddExp(std::move(AddExp)){}
};


#endif //COMPILER_RELEXP_H