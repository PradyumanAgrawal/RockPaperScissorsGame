#include "./Game.hpp"

Game::Game() {
  std::string playerName;
  std::cout << "Player-name >> ";
  std::cin >> playerName;

  this->npc = new NPCPlayerRandomImpl();
  this->player = new PlayerController(playerName);
  this->judge = new Judge();
}

Game::~Game() {
  delete this->npc;
  delete this->player;
  delete this->judge;
}

void Game::startGame() {
  std::cout << "\n    Rock Paper Scissors\n";
  std::cout << "Choose your move\n----------------\n";
  std::cout << "Rock\n";
  std::cout << "Scissor\n";
  std::cout << "Paper\n";
  std::cout << "----------\n";
  

  Move playerMove, NPCMove;
  Result result;
  do {
    playerMove = player->getMove();
    NPCMove = npc->getMove();
    result = judge->findWinner(playerMove, NPCMove);
    switch (result) {
      case Result::PLAYER_WIN:
        std::cout << player->getName() <<" wins " << std::endl;
        break;
      case Result::NPC_WIN:
        std::cout << "Computer win" << std::endl;
        break;
      case Result::DRAW:
        std::cout << "Round Draws" << std::endl;
        break;
    }
    std::cout << "-------------" << std::endl;
  } while (this->player->playNextGame());
}