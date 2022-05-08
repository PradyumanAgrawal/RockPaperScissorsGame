#if !defined(__Judge_)
#define __Judge_

#include "./MoveType.hpp"
#include "./ResultType.hpp"

class Judge {
 private:
  const char* moveToStr(Move move);

 public:
  Result findWinner(Move playerMove, Move NPCMove);
};

#endif  // __Judge_
