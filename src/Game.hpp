#if !defined(__Game_)
#define __Game_

#include <iostream>
#include <string>

#include "./MoveType.hpp"
#include "./NPCPlayer.hpp"
#include "./PlayerController.hpp"
#include "./NPCPlayerRandomImpl.hpp"
#include "./ResultType.hpp"
#include "./Judge.hpp"

class Game {
 private:
  NPCPlayer* npc;
  PlayerController* player;
  Judge* judge;

 public:
  Game();
  ~Game();
  void startGame();
};

#endif  // __Game_
