#if !defined(__Player_Controller_)
#define __Player_Controller_

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

#include "./MoveType.hpp"

class PlayerController {
 private:
  std::string name;
  Move strToMove(std::string move);

 public:
  PlayerController(std::string playerName);
  std::string getName();
  Move getMove();
  bool playNextGame();
};

#endif  // __Player_Controller_
