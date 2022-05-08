#include "./NPCPlayerRandomImpl.hpp"

NPCPlayerRandomImpl::NPCPlayerRandomImpl() { srand(time(NULL)); }

Move NPCPlayerRandomImpl::getMove() {
  int randNum = rand() % 3;
  switch (randNum) {
    case 0:
      return Move::ROCK;
    case 1:
      return Move::PAPER;
    default:
      return Move::SCISSOR;
  }
}