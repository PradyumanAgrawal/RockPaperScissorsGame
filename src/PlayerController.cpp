#include "./PlayerController.hpp"

PlayerController::PlayerController(std::string playerName) : name(playerName) {}

std::string PlayerController::getName() { return this->name; }

Move PlayerController::getMove() {
  std::string moveStr;
  Move move;
  bool isValidMove = false;

  do {
    std::cout << "Input >> ";
    std::cin >> moveStr;
    try {
      move = strToMove(moveStr);
      isValidMove = true;
    } catch (std::invalid_argument const& ex) {
      std::cout << "[Invalid Arg Error]: " << ex.what() << "\nPlease try again!"
                << std::endl;
    }
  } while (!isValidMove);

  return move;
}

bool PlayerController::playNextGame() {
  std::string userInp;

  do {
    std::cout << "Play next game? (yes/no) >> ";
    std::cin >> userInp;
    std::transform(userInp.begin(), userInp.end(), userInp.begin(), ::toupper);

    if (userInp == "YES") {
      return true;
    } else if (userInp == "NO") {
      return false;
    }
    std::cout << "[Invalid Option]: "<< " Please try again!"<< std::endl;
  } while (true);
}

Move PlayerController::strToMove(std::string move) {
  std::transform(move.begin(), move.end(), move.begin(), ::toupper);
  if (move == ROCK_STR) return Move::ROCK;
  if (move == PAPER_STR) return Move::PAPER;
  if (move == SCISSOR_STR) return Move::SCISSOR;
  throw std::invalid_argument("Invalid move string");
}
