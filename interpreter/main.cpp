#include <iostream>

// TODO:
// 1. start writing 2nd lab
// 2. finish commands in brainfuck interpreter (including '[', ']')

class Command {
  public:
    virtual void apply(uint8_t *ptr){
      std::cout << "base command!" << std::endl;
    }
};

class Right: public Command {
  public:
    void apply(uint8_t *ptr) override{
      std::cout << "right command!" << std::endl;
      ptr++;
    }
};

class Left: public Command {
  public:
    void apply(uint8_t * ptr) override {
      std::cout << "left command!" << std::endl;
      ptr--;
    }
};

class Add: public Command {
  public:
    void apply(uint8_t *ptr) override {
      std::cout<<"Add command!" << std::endl;
      (*ptr)++;
    }
};

class Sub: public Command {
  public:
    void apply(uint8_t *ptr) override {
      std::cout<<"Sub command!" << std::endl;
      (*ptr)--;
    }
};

class Write: public Command {
  public:
    void apply(uint8_t *ptr) override{
      std::cout << unsigned(*ptr) << std::endl;
    }
};

class Write: public Command {
  public:
    void apply(uint8_t *ptr) override{
      std::cout << unsigned(*ptr) << std::endl;
    }
};

class Enter: public Command {
  public:
    void apply(uint8_t *ptr) override{ 
      int number;
      std::cin >> number;
      *ptr = number;
      //std::cout << *ptr << std::endl;
    }
};

//FINISH [ AND ] !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

class FindClosing: public Command {
  public:
    void apply(uint8_t *ptr) override{
      //////
      ///???? ptr++;
    }
};

class FindOpening: public Command {
  public:
    void apply(uint8_t *ptr) override{
      ///////
      ///???? ptr++;
    }
};

Command *get_cmd(const char c){
  switch(c){
    case '>':
      return new Right();
    case '<':
      return new Left();
    case '+':
      return new Add();
    case '-':
      return new Sub(); 
    case '.':
      return new Write();
    case ',':
      return new Enter();
    case '[':
      return new FindClosing();
    case ']':
      return new FindOpening();
  }

  return nullptr;
}

void interpret(const std::string & cmds, uint8_t * ptr) {
  for (const char cmd : cmds) {
    Command *command = get_cmd(cmd);
    if(command == nullptr){
      std::cerr << "unknown command: '" << cmd << "'" << std::endl;
      continue;
    }
    command->apply(ptr);

  }
}

int main(){

}
