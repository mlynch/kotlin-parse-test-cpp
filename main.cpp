#include <iostream>
#include <chrono>

#include "antlr4-runtime.h"
#include "KotlinLexer.h"
#include "KotlinParser.h"
#include "KotlinParserBaseListener.h"

using namespace antlr4;

class TreeShapeListener : public KotlinParserBaseListener {
public:
  void enterKey(ParserRuleContext *ctx) {
	// Do something when entering the key rule.
  }
};


int main(int argc, const char* argv[]) {
  auto start = std::chrono::high_resolution_clock::now();

  std::cout << "Parsing file: " << argv[1] << std::endl;
  std::ifstream stream;
  stream.open(argv[1]);
  ANTLRInputStream input(stream);
  KotlinLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  KotlinParser parser(&tokens);

  tree::ParseTree *tree = parser.script();
  TreeShapeListener listener;
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  auto stop = std::chrono::high_resolution_clock::now();
  typedef std::chrono::duration<float> float_seconds;
  auto duration = std::chrono::duration_cast<float_seconds>(stop - start);

  std::cout << "Parsed kotlin file in " << duration.count() << " seconds." << std::endl;

  return 0;
}
