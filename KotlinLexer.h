
// Generated from KotlinLexer.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  KotlinLexer : public antlr4::Lexer {
public:
  enum {
    ShebangLine = 1, DelimitedComment = 2, LineComment = 3, WS = 4, NL = 5, 
    RESERVED = 6, DOT = 7, COMMA = 8, LPAREN = 9, RPAREN = 10, LSQUARE = 11, 
    RSQUARE = 12, LCURL = 13, RCURL = 14, MULT = 15, MOD = 16, DIV = 17, 
    ADD = 18, SUB = 19, INCR = 20, DECR = 21, CONJ = 22, DISJ = 23, EXCL_WS = 24, 
    EXCL_NO_WS = 25, COLON = 26, SEMICOLON = 27, ASSIGNMENT = 28, ADD_ASSIGNMENT = 29, 
    SUB_ASSIGNMENT = 30, MULT_ASSIGNMENT = 31, DIV_ASSIGNMENT = 32, MOD_ASSIGNMENT = 33, 
    ARROW = 34, DOUBLE_ARROW = 35, RANGE = 36, COLONCOLON = 37, DOUBLE_SEMICOLON = 38, 
    HASH = 39, AT_NO_WS = 40, AT_POST_WS = 41, AT_PRE_WS = 42, AT_BOTH_WS = 43, 
    QUEST_WS = 44, QUEST_NO_WS = 45, LANGLE = 46, RANGLE = 47, LE = 48, 
    GE = 49, EXCL_EQ = 50, EXCL_EQEQ = 51, AS_SAFE = 52, EQEQ = 53, EQEQEQ = 54, 
    SINGLE_QUOTE = 55, RETURN_AT = 56, CONTINUE_AT = 57, BREAK_AT = 58, 
    THIS_AT = 59, SUPER_AT = 60, FILE = 61, FIELD = 62, PROPERTY = 63, GET = 64, 
    SET = 65, RECEIVER = 66, PARAM = 67, SETPARAM = 68, DELEGATE = 69, PACKAGE = 70, 
    IMPORT = 71, CLASS = 72, INTERFACE = 73, FUN = 74, OBJECT = 75, VAL = 76, 
    VAR = 77, TYPE_ALIAS = 78, CONSTRUCTOR = 79, BY = 80, COMPANION = 81, 
    INIT = 82, THIS = 83, SUPER = 84, TYPEOF = 85, WHERE = 86, IF = 87, 
    ELSE = 88, WHEN = 89, TRY = 90, CATCH = 91, FINALLY = 92, FOR = 93, 
    DO = 94, WHILE = 95, THROW = 96, RETURN = 97, CONTINUE = 98, BREAK = 99, 
    AS = 100, IS = 101, IN = 102, NOT_IS = 103, NOT_IN = 104, OUT = 105, 
    DYNAMIC = 106, PUBLIC = 107, PRIVATE = 108, PROTECTED = 109, INTERNAL = 110, 
    ENUM = 111, SEALED = 112, ANNOTATION = 113, DATA = 114, INNER = 115, 
    VALUE = 116, TAILREC = 117, OPERATOR = 118, INLINE = 119, INFIX = 120, 
    EXTERNAL = 121, SUSPEND = 122, OVERRIDE = 123, ABSTRACT = 124, FINAL = 125, 
    OPEN = 126, CONST = 127, LATEINIT = 128, VARARG = 129, NOINLINE = 130, 
    CROSSINLINE = 131, REIFIED = 132, EXPECT = 133, ACTUAL = 134, RealLiteral = 135, 
    FloatLiteral = 136, DoubleLiteral = 137, IntegerLiteral = 138, HexLiteral = 139, 
    BinLiteral = 140, UnsignedLiteral = 141, LongLiteral = 142, BooleanLiteral = 143, 
    NullLiteral = 144, CharacterLiteral = 145, Identifier = 146, IdentifierOrSoftKey = 147, 
    FieldIdentifier = 148, QUOTE_OPEN = 149, TRIPLE_QUOTE_OPEN = 150, UNICODE_CLASS_LL = 151, 
    UNICODE_CLASS_LM = 152, UNICODE_CLASS_LO = 153, UNICODE_CLASS_LT = 154, 
    UNICODE_CLASS_LU = 155, UNICODE_CLASS_ND = 156, UNICODE_CLASS_NL = 157, 
    QUOTE_CLOSE = 158, LineStrRef = 159, LineStrText = 160, LineStrEscapedChar = 161, 
    LineStrExprStart = 162, TRIPLE_QUOTE_CLOSE = 163, MultiLineStringQuote = 164, 
    MultiLineStrRef = 165, MultiLineStrText = 166, MultiLineStrExprStart = 167, 
    Inside_Comment = 168, Inside_WS = 169, Inside_NL = 170, ErrorCharacter = 171
  };

  enum {
    LineString = 1, MultiLineString = 2, Inside = 3
  };

  explicit KotlinLexer(antlr4::CharStream *input);
  ~KotlinLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void RCURLAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

