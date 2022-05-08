#if !defined(__Move_Type_)
#define __Move_Type_

#include <string>

const std::string ROCK_STR = "ROCK";
const std::string PAPER_STR = "PAPER";
const std::string SCISSOR_STR = "SCISSOR";

enum class Move { ROCK, PAPER, SCISSOR };

#endif  // __Move_Type_