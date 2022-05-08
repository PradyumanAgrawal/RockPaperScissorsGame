#if !defined(__NPC_Player_RandomImpl_)
#define __NPC_Player_RandomImpl_

#include <string>

#include "./MoveType.hpp"
#include "./NPCPlayer.hpp"
#include <ctime>
#include <cstdlib>

class NPCPlayerRandomImpl : public NPCPlayer {
 public:
  NPCPlayerRandomImpl();
  Move getMove();
};

#endif  // __NPC_Player_RandomImpl_
