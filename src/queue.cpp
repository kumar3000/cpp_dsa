#include <iostream>
#include <queue>

void shredQueue(std::queue<std::string>& q) {
  while(!q.empty()) {
    std::cout << "shredding... " << q.front() << std::endl;
    q.pop();
  }
}

int main(int argc, char** argv) {
  std::queue<std::string> line;
  for (int i = 1; i < argc; i++) {
    line.push(argv[i]);
  }

  shredQueue(line);
  return 0;
}
