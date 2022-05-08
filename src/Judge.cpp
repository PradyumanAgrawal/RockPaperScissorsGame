#include "./Judge.hpp"

#include <algorithm>
#include <iostream>

const char* Judge::moveToStr(Move move) {
  if(move == Move::ROCK) return "Rock";
  if(move == Move::PAPER) return "Paper";
  if(move == Move::SCISSOR) return "Scissor";
  return "Invalid move";
}

Result Judge::findWinner(Move playerMove, Move NPCMove) {
  std::cout << "Player's Move: " << moveToStr(playerMove) << "|| Computer's Move: "
            << moveToStr(NPCMove) << "\n";

  if (playerMove == NPCMove) {
    return Result::DRAW;
  }

  if (playerMove == Move::ROCK && NPCMove == Move::SCISSOR) {
    return Result::PLAYER_WIN;
  }
  if (playerMove == Move::PAPER && NPCMove == Move::ROCK) {
    return Result::PLAYER_WIN;
  }
  if (playerMove == Move::SCISSOR && NPCMove == Move::PAPER) {
    return Result::PLAYER_WIN;
  }

  return Result::NPC_WIN;
}