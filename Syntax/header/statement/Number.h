//
// Created by 赵鲲翔 on 2024/10/15.
//

#ifndef COMPILER_NUMBER_H
#define COMPILER_NUMBER_H

#include "../statement.h"
class Number : public statement{
public:
    std::unique_ptr<ASTnode> number;// it is constant value,many be integerLiteral or floatLiteral or charLiteral ...
};


#endif //COMPILER_NUMBER_H