#if !defined(__NPC_Player_)
#define __NPC_Player_

#include "./MoveType.hpp"

class NPCPlayer {
 public:
  virtual Move getMove() = 0;
};

#endif  // __NPC_Player_
