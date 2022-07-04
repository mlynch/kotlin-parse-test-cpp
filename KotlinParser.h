
// Generated from KotlinParser.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  KotlinParser : public antlr4::Parser {
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
    RuleKotlinFile = 0, RuleScript = 1, RuleShebangLine = 2, RuleFileAnnotation = 3, 
    RulePackageHeader = 4, RuleImportList = 5, RuleImportHeader = 6, RuleImportAlias = 7, 
    RuleTopLevelObject = 8, RuleTypeAlias = 9, RuleDeclaration = 10, RuleClassDeclaration = 11, 
    RulePrimaryConstructor = 12, RuleClassBody = 13, RuleClassParameters = 14, 
    RuleClassParameter = 15, RuleDelegationSpecifiers = 16, RuleDelegationSpecifier = 17, 
    RuleConstructorInvocation = 18, RuleAnnotatedDelegationSpecifier = 19, 
    RuleExplicitDelegation = 20, RuleTypeParameters = 21, RuleTypeParameter = 22, 
    RuleTypeConstraints = 23, RuleTypeConstraint = 24, RuleClassMemberDeclarations = 25, 
    RuleClassMemberDeclaration = 26, RuleAnonymousInitializer = 27, RuleCompanionObject = 28, 
    RuleFunctionValueParameters = 29, RuleFunctionValueParameter = 30, RuleFunctionDeclaration = 31, 
    RuleFunctionBody = 32, RuleVariableDeclaration = 33, RuleMultiVariableDeclaration = 34, 
    RulePropertyDeclaration = 35, RulePropertyDelegate = 36, RuleGetter = 37, 
    RuleSetter = 38, RuleParametersWithOptionalType = 39, RuleFunctionValueParameterWithOptionalType = 40, 
    RuleParameterWithOptionalType = 41, RuleParameter = 42, RuleObjectDeclaration = 43, 
    RuleSecondaryConstructor = 44, RuleConstructorDelegationCall = 45, RuleEnumClassBody = 46, 
    RuleEnumEntries = 47, RuleEnumEntry = 48, RuleType = 49, RuleTypeReference = 50, 
    RuleNullableType = 51, RuleQuest = 52, RuleUserType = 53, RuleSimpleUserType = 54, 
    RuleTypeProjection = 55, RuleTypeProjectionModifiers = 56, RuleTypeProjectionModifier = 57, 
    RuleFunctionType = 58, RuleFunctionTypeParameters = 59, RuleParenthesizedType = 60, 
    RuleReceiverType = 61, RuleParenthesizedUserType = 62, RuleStatements = 63, 
    RuleStatement = 64, RuleLabel = 65, RuleControlStructureBody = 66, RuleBlock = 67, 
    RuleLoopStatement = 68, RuleForStatement = 69, RuleWhileStatement = 70, 
    RuleDoWhileStatement = 71, RuleAssignment = 72, RuleSemi = 73, RuleSemis = 74, 
    RuleExpression = 75, RuleDisjunction = 76, RuleConjunction = 77, RuleEquality = 78, 
    RuleComparison = 79, RuleGenericCallLikeComparison = 80, RuleInfixOperation = 81, 
    RuleElvisExpression = 82, RuleElvis = 83, RuleInfixFunctionCall = 84, 
    RuleRangeExpression = 85, RuleAdditiveExpression = 86, RuleMultiplicativeExpression = 87, 
    RuleAsExpression = 88, RulePrefixUnaryExpression = 89, RuleUnaryPrefix = 90, 
    RulePostfixUnaryExpression = 91, RulePostfixUnarySuffix = 92, RuleDirectlyAssignableExpression = 93, 
    RuleParenthesizedDirectlyAssignableExpression = 94, RuleAssignableExpression = 95, 
    RuleParenthesizedAssignableExpression = 96, RuleAssignableSuffix = 97, 
    RuleIndexingSuffix = 98, RuleNavigationSuffix = 99, RuleCallSuffix = 100, 
    RuleAnnotatedLambda = 101, RuleTypeArguments = 102, RuleValueArguments = 103, 
    RuleValueArgument = 104, RulePrimaryExpression = 105, RuleParenthesizedExpression = 106, 
    RuleCollectionLiteral = 107, RuleLiteralConstant = 108, RuleStringLiteral = 109, 
    RuleLineStringLiteral = 110, RuleMultiLineStringLiteral = 111, RuleLineStringContent = 112, 
    RuleLineStringExpression = 113, RuleMultiLineStringContent = 114, RuleMultiLineStringExpression = 115, 
    RuleLambdaLiteral = 116, RuleLambdaParameters = 117, RuleLambdaParameter = 118, 
    RuleAnonymousFunction = 119, RuleFunctionLiteral = 120, RuleObjectLiteral = 121, 
    RuleThisExpression = 122, RuleSuperExpression = 123, RuleIfExpression = 124, 
    RuleWhenSubject = 125, RuleWhenExpression = 126, RuleWhenEntry = 127, 
    RuleWhenCondition = 128, RuleRangeTest = 129, RuleTypeTest = 130, RuleTryExpression = 131, 
    RuleCatchBlock = 132, RuleFinallyBlock = 133, RuleJumpExpression = 134, 
    RuleCallableReference = 135, RuleAssignmentAndOperator = 136, RuleEqualityOperator = 137, 
    RuleComparisonOperator = 138, RuleInOperator = 139, RuleIsOperator = 140, 
    RuleAdditiveOperator = 141, RuleMultiplicativeOperator = 142, RuleAsOperator = 143, 
    RulePrefixUnaryOperator = 144, RulePostfixUnaryOperator = 145, RuleExcl = 146, 
    RuleMemberAccessOperator = 147, RuleSafeNav = 148, RuleModifiers = 149, 
    RuleParameterModifiers = 150, RuleModifier = 151, RuleTypeModifiers = 152, 
    RuleTypeModifier = 153, RuleClassModifier = 154, RuleMemberModifier = 155, 
    RuleVisibilityModifier = 156, RuleVarianceModifier = 157, RuleTypeParameterModifiers = 158, 
    RuleTypeParameterModifier = 159, RuleFunctionModifier = 160, RulePropertyModifier = 161, 
    RuleInheritanceModifier = 162, RuleParameterModifier = 163, RuleReificationModifier = 164, 
    RulePlatformModifier = 165, RuleAnnotation = 166, RuleSingleAnnotation = 167, 
    RuleMultiAnnotation = 168, RuleAnnotationUseSiteTarget = 169, RuleUnescapedAnnotation = 170, 
    RuleSimpleIdentifier = 171, RuleIdentifier = 172
  };

  explicit KotlinParser(antlr4::TokenStream *input);
  ~KotlinParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class KotlinFileContext;
  class ScriptContext;
  class ShebangLineContext;
  class FileAnnotationContext;
  class PackageHeaderContext;
  class ImportListContext;
  class ImportHeaderContext;
  class ImportAliasContext;
  class TopLevelObjectContext;
  class TypeAliasContext;
  class DeclarationContext;
  class ClassDeclarationContext;
  class PrimaryConstructorContext;
  class ClassBodyContext;
  class ClassParametersContext;
  class ClassParameterContext;
  class DelegationSpecifiersContext;
  class DelegationSpecifierContext;
  class ConstructorInvocationContext;
  class AnnotatedDelegationSpecifierContext;
  class ExplicitDelegationContext;
  class TypeParametersContext;
  class TypeParameterContext;
  class TypeConstraintsContext;
  class TypeConstraintContext;
  class ClassMemberDeclarationsContext;
  class ClassMemberDeclarationContext;
  class AnonymousInitializerContext;
  class CompanionObjectContext;
  class FunctionValueParametersContext;
  class FunctionValueParameterContext;
  class FunctionDeclarationContext;
  class FunctionBodyContext;
  class VariableDeclarationContext;
  class MultiVariableDeclarationContext;
  class PropertyDeclarationContext;
  class PropertyDelegateContext;
  class GetterContext;
  class SetterContext;
  class ParametersWithOptionalTypeContext;
  class FunctionValueParameterWithOptionalTypeContext;
  class ParameterWithOptionalTypeContext;
  class ParameterContext;
  class ObjectDeclarationContext;
  class SecondaryConstructorContext;
  class ConstructorDelegationCallContext;
  class EnumClassBodyContext;
  class EnumEntriesContext;
  class EnumEntryContext;
  class TypeContext;
  class TypeReferenceContext;
  class NullableTypeContext;
  class QuestContext;
  class UserTypeContext;
  class SimpleUserTypeContext;
  class TypeProjectionContext;
  class TypeProjectionModifiersContext;
  class TypeProjectionModifierContext;
  class FunctionTypeContext;
  class FunctionTypeParametersContext;
  class ParenthesizedTypeContext;
  class ReceiverTypeContext;
  class ParenthesizedUserTypeContext;
  class StatementsContext;
  class StatementContext;
  class LabelContext;
  class ControlStructureBodyContext;
  class BlockContext;
  class LoopStatementContext;
  class ForStatementContext;
  class WhileStatementContext;
  class DoWhileStatementContext;
  class AssignmentContext;
  class SemiContext;
  class SemisContext;
  class ExpressionContext;
  class DisjunctionContext;
  class ConjunctionContext;
  class EqualityContext;
  class ComparisonContext;
  class GenericCallLikeComparisonContext;
  class InfixOperationContext;
  class ElvisExpressionContext;
  class ElvisContext;
  class InfixFunctionCallContext;
  class RangeExpressionContext;
  class AdditiveExpressionContext;
  class MultiplicativeExpressionContext;
  class AsExpressionContext;
  class PrefixUnaryExpressionContext;
  class UnaryPrefixContext;
  class PostfixUnaryExpressionContext;
  class PostfixUnarySuffixContext;
  class DirectlyAssignableExpressionContext;
  class ParenthesizedDirectlyAssignableExpressionContext;
  class AssignableExpressionContext;
  class ParenthesizedAssignableExpressionContext;
  class AssignableSuffixContext;
  class IndexingSuffixContext;
  class NavigationSuffixContext;
  class CallSuffixContext;
  class AnnotatedLambdaContext;
  class TypeArgumentsContext;
  class ValueArgumentsContext;
  class ValueArgumentContext;
  class PrimaryExpressionContext;
  class ParenthesizedExpressionContext;
  class CollectionLiteralContext;
  class LiteralConstantContext;
  class StringLiteralContext;
  class LineStringLiteralContext;
  class MultiLineStringLiteralContext;
  class LineStringContentContext;
  class LineStringExpressionContext;
  class MultiLineStringContentContext;
  class MultiLineStringExpressionContext;
  class LambdaLiteralContext;
  class LambdaParametersContext;
  class LambdaParameterContext;
  class AnonymousFunctionContext;
  class FunctionLiteralContext;
  class ObjectLiteralContext;
  class ThisExpressionContext;
  class SuperExpressionContext;
  class IfExpressionContext;
  class WhenSubjectContext;
  class WhenExpressionContext;
  class WhenEntryContext;
  class WhenConditionContext;
  class RangeTestContext;
  class TypeTestContext;
  class TryExpressionContext;
  class CatchBlockContext;
  class FinallyBlockContext;
  class JumpExpressionContext;
  class CallableReferenceContext;
  class AssignmentAndOperatorContext;
  class EqualityOperatorContext;
  class ComparisonOperatorContext;
  class InOperatorContext;
  class IsOperatorContext;
  class AdditiveOperatorContext;
  class MultiplicativeOperatorContext;
  class AsOperatorContext;
  class PrefixUnaryOperatorContext;
  class PostfixUnaryOperatorContext;
  class ExclContext;
  class MemberAccessOperatorContext;
  class SafeNavContext;
  class ModifiersContext;
  class ParameterModifiersContext;
  class ModifierContext;
  class TypeModifiersContext;
  class TypeModifierContext;
  class ClassModifierContext;
  class MemberModifierContext;
  class VisibilityModifierContext;
  class VarianceModifierContext;
  class TypeParameterModifiersContext;
  class TypeParameterModifierContext;
  class FunctionModifierContext;
  class PropertyModifierContext;
  class InheritanceModifierContext;
  class ParameterModifierContext;
  class ReificationModifierContext;
  class PlatformModifierContext;
  class AnnotationContext;
  class SingleAnnotationContext;
  class MultiAnnotationContext;
  class AnnotationUseSiteTargetContext;
  class UnescapedAnnotationContext;
  class SimpleIdentifierContext;
  class IdentifierContext; 

  class  KotlinFileContext : public antlr4::ParserRuleContext {
  public:
    KotlinFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PackageHeaderContext *packageHeader();
    ImportListContext *importList();
    antlr4::tree::TerminalNode *EOF();
    ShebangLineContext *shebangLine();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<FileAnnotationContext *> fileAnnotation();
    FileAnnotationContext* fileAnnotation(size_t i);
    std::vector<TopLevelObjectContext *> topLevelObject();
    TopLevelObjectContext* topLevelObject(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KotlinFileContext* kotlinFile();

  class  ScriptContext : public antlr4::ParserRuleContext {
  public:
    ScriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PackageHeaderContext *packageHeader();
    ImportListContext *importList();
    antlr4::tree::TerminalNode *EOF();
    ShebangLineContext *shebangLine();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<FileAnnotationContext *> fileAnnotation();
    FileAnnotationContext* fileAnnotation(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<SemiContext *> semi();
    SemiContext* semi(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScriptContext* script();

  class  ShebangLineContext : public antlr4::ParserRuleContext {
  public:
    ShebangLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ShebangLine();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShebangLineContext* shebangLine();

  class  FileAnnotationContext : public antlr4::ParserRuleContext {
  public:
    FileAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *AT_NO_WS();
    antlr4::tree::TerminalNode *AT_PRE_WS();
    antlr4::tree::TerminalNode *LSQUARE();
    antlr4::tree::TerminalNode *RSQUARE();
    std::vector<UnescapedAnnotationContext *> unescapedAnnotation();
    UnescapedAnnotationContext* unescapedAnnotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileAnnotationContext* fileAnnotation();

  class  PackageHeaderContext : public antlr4::ParserRuleContext {
  public:
    PackageHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    IdentifierContext *identifier();
    SemiContext *semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackageHeaderContext* packageHeader();

  class  ImportListContext : public antlr4::ParserRuleContext {
  public:
    ImportListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImportHeaderContext *> importHeader();
    ImportHeaderContext* importHeader(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportListContext* importList();

  class  ImportHeaderContext : public antlr4::ParserRuleContext {
  public:
    ImportHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *MULT();
    ImportAliasContext *importAlias();
    SemiContext *semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportHeaderContext* importHeader();

  class  ImportAliasContext : public antlr4::ParserRuleContext {
  public:
    ImportAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    SimpleIdentifierContext *simpleIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportAliasContext* importAlias();

  class  TopLevelObjectContext : public antlr4::ParserRuleContext {
  public:
    TopLevelObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    SemisContext *semis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopLevelObjectContext* topLevelObject();

  class  TypeAliasContext : public antlr4::ParserRuleContext {
  public:
    TypeAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE_ALIAS();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    TypeContext *type();
    ModifiersContext *modifiers();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeAliasContext* typeAlias();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDeclarationContext *classDeclaration();
    ObjectDeclarationContext *objectDeclaration();
    FunctionDeclarationContext *functionDeclaration();
    PropertyDeclarationContext *propertyDeclaration();
    TypeAliasContext *typeAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *INTERFACE();
    ModifiersContext *modifiers();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    TypeParametersContext *typeParameters();
    PrimaryConstructorContext *primaryConstructor();
    antlr4::tree::TerminalNode *COLON();
    DelegationSpecifiersContext *delegationSpecifiers();
    TypeConstraintsContext *typeConstraints();
    ClassBodyContext *classBody();
    EnumClassBodyContext *enumClassBody();
    antlr4::tree::TerminalNode *FUN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  PrimaryConstructorContext : public antlr4::ParserRuleContext {
  public:
    PrimaryConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassParametersContext *classParameters();
    antlr4::tree::TerminalNode *CONSTRUCTOR();
    ModifiersContext *modifiers();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryConstructorContext* primaryConstructor();

  class  ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    ClassMemberDeclarationsContext *classMemberDeclarations();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassBodyContext* classBody();

  class  ClassParametersContext : public antlr4::ParserRuleContext {
  public:
    ClassParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<ClassParameterContext *> classParameter();
    ClassParameterContext* classParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParametersContext* classParameters();

  class  ClassParameterContext : public antlr4::ParserRuleContext {
  public:
    ClassParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    ModifiersContext *modifiers();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *VAL();
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParameterContext* classParameter();

  class  DelegationSpecifiersContext : public antlr4::ParserRuleContext {
  public:
    DelegationSpecifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotatedDelegationSpecifierContext *> annotatedDelegationSpecifier();
    AnnotatedDelegationSpecifierContext* annotatedDelegationSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DelegationSpecifiersContext* delegationSpecifiers();

  class  DelegationSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DelegationSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructorInvocationContext *constructorInvocation();
    ExplicitDelegationContext *explicitDelegation();
    UserTypeContext *userType();
    FunctionTypeContext *functionType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DelegationSpecifierContext* delegationSpecifier();

  class  ConstructorInvocationContext : public antlr4::ParserRuleContext {
  public:
    ConstructorInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserTypeContext *userType();
    ValueArgumentsContext *valueArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorInvocationContext* constructorInvocation();

  class  AnnotatedDelegationSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AnnotatedDelegationSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DelegationSpecifierContext *delegationSpecifier();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotatedDelegationSpecifierContext* annotatedDelegationSpecifier();

  class  ExplicitDelegationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitDelegationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BY();
    ExpressionContext *expression();
    UserTypeContext *userType();
    FunctionTypeContext *functionType();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplicitDelegationContext* explicitDelegation();

  class  TypeParametersContext : public antlr4::ParserRuleContext {
  public:
    TypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGLE();
    std::vector<TypeParameterContext *> typeParameter();
    TypeParameterContext* typeParameter(size_t i);
    antlr4::tree::TerminalNode *RANGLE();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParametersContext* typeParameters();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    TypeParameterModifiersContext *typeParameterModifiers();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterContext* typeParameter();

  class  TypeConstraintsContext : public antlr4::ParserRuleContext {
  public:
    TypeConstraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    std::vector<TypeConstraintContext *> typeConstraint();
    TypeConstraintContext* typeConstraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeConstraintsContext* typeConstraints();

  class  TypeConstraintContext : public antlr4::ParserRuleContext {
  public:
    TypeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeConstraintContext* typeConstraint();

  class  ClassMemberDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    ClassMemberDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassMemberDeclarationContext *> classMemberDeclaration();
    ClassMemberDeclarationContext* classMemberDeclaration(size_t i);
    std::vector<SemisContext *> semis();
    SemisContext* semis(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassMemberDeclarationsContext* classMemberDeclarations();

  class  ClassMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    CompanionObjectContext *companionObject();
    AnonymousInitializerContext *anonymousInitializer();
    SecondaryConstructorContext *secondaryConstructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassMemberDeclarationContext* classMemberDeclaration();

  class  AnonymousInitializerContext : public antlr4::ParserRuleContext {
  public:
    AnonymousInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INIT();
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnonymousInitializerContext* anonymousInitializer();

  class  CompanionObjectContext : public antlr4::ParserRuleContext {
  public:
    CompanionObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPANION();
    antlr4::tree::TerminalNode *OBJECT();
    ModifiersContext *modifiers();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    DelegationSpecifiersContext *delegationSpecifiers();
    ClassBodyContext *classBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompanionObjectContext* companionObject();

  class  FunctionValueParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionValueParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<FunctionValueParameterContext *> functionValueParameter();
    FunctionValueParameterContext* functionValueParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionValueParametersContext* functionValueParameters();

  class  FunctionValueParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionValueParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();
    ParameterModifiersContext *parameterModifiers();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionValueParameterContext* functionValueParameter();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUN();
    SimpleIdentifierContext *simpleIdentifier();
    FunctionValueParametersContext *functionValueParameters();
    ModifiersContext *modifiers();
    TypeParametersContext *typeParameters();
    ReceiverTypeContext *receiverType();
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    TypeConstraintsContext *typeConstraints();
    FunctionBodyContext *functionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionBodyContext* functionBody();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  MultiVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MultiVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiVariableDeclarationContext* multiVariableDeclaration();

  class  PropertyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PropertyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAL();
    antlr4::tree::TerminalNode *VAR();
    ModifiersContext *modifiers();
    TypeParametersContext *typeParameters();
    ReceiverTypeContext *receiverType();
    antlr4::tree::TerminalNode *DOT();
    TypeConstraintsContext *typeConstraints();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    MultiVariableDeclarationContext *multiVariableDeclaration();
    VariableDeclarationContext *variableDeclaration();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();
    PropertyDelegateContext *propertyDelegate();
    GetterContext *getter();
    SetterContext *setter();
    SemiContext *semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyDeclarationContext* propertyDeclaration();

  class  PropertyDelegateContext : public antlr4::ParserRuleContext {
  public:
    PropertyDelegateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BY();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyDelegateContext* propertyDelegate();

  class  GetterContext : public antlr4::ParserRuleContext {
  public:
    GetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    ModifiersContext *modifiers();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionBodyContext *functionBody();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GetterContext* getter();

  class  SetterContext : public antlr4::ParserRuleContext {
  public:
    SetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    ModifiersContext *modifiers();
    antlr4::tree::TerminalNode *LPAREN();
    FunctionValueParameterWithOptionalTypeContext *functionValueParameterWithOptionalType();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionBodyContext *functionBody();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetterContext* setter();

  class  ParametersWithOptionalTypeContext : public antlr4::ParserRuleContext {
  public:
    ParametersWithOptionalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<FunctionValueParameterWithOptionalTypeContext *> functionValueParameterWithOptionalType();
    FunctionValueParameterWithOptionalTypeContext* functionValueParameterWithOptionalType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParametersWithOptionalTypeContext* parametersWithOptionalType();

  class  FunctionValueParameterWithOptionalTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionValueParameterWithOptionalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterWithOptionalTypeContext *parameterWithOptionalType();
    ParameterModifiersContext *parameterModifiers();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionValueParameterWithOptionalTypeContext* functionValueParameterWithOptionalType();

  class  ParameterWithOptionalTypeContext : public antlr4::ParserRuleContext {
  public:
    ParameterWithOptionalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterWithOptionalTypeContext* parameterWithOptionalType();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterContext* parameter();

  class  ObjectDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ObjectDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT();
    SimpleIdentifierContext *simpleIdentifier();
    ModifiersContext *modifiers();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    DelegationSpecifiersContext *delegationSpecifiers();
    ClassBodyContext *classBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectDeclarationContext* objectDeclaration();

  class  SecondaryConstructorContext : public antlr4::ParserRuleContext {
  public:
    SecondaryConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRUCTOR();
    FunctionValueParametersContext *functionValueParameters();
    ModifiersContext *modifiers();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    ConstructorDelegationCallContext *constructorDelegationCall();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SecondaryConstructorContext* secondaryConstructor();

  class  ConstructorDelegationCallContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDelegationCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueArgumentsContext *valueArguments();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *SUPER();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorDelegationCallContext* constructorDelegationCall();

  class  EnumClassBodyContext : public antlr4::ParserRuleContext {
  public:
    EnumClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    EnumEntriesContext *enumEntries();
    antlr4::tree::TerminalNode *SEMICOLON();
    ClassMemberDeclarationsContext *classMemberDeclarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumClassBodyContext* enumClassBody();

  class  EnumEntriesContext : public antlr4::ParserRuleContext {
  public:
    EnumEntriesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumEntryContext *> enumEntry();
    EnumEntryContext* enumEntry(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumEntriesContext* enumEntries();

  class  EnumEntryContext : public antlr4::ParserRuleContext {
  public:
    EnumEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    ModifiersContext *modifiers();
    ValueArgumentsContext *valueArguments();
    ClassBodyContext *classBody();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumEntryContext* enumEntry();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesizedTypeContext *parenthesizedType();
    NullableTypeContext *nullableType();
    TypeReferenceContext *typeReference();
    FunctionTypeContext *functionType();
    TypeModifiersContext *typeModifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  TypeReferenceContext : public antlr4::ParserRuleContext {
  public:
    TypeReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserTypeContext *userType();
    antlr4::tree::TerminalNode *DYNAMIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeReferenceContext* typeReference();

  class  NullableTypeContext : public antlr4::ParserRuleContext {
  public:
    NullableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeReferenceContext *typeReference();
    ParenthesizedTypeContext *parenthesizedType();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<QuestContext *> quest();
    QuestContext* quest(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullableTypeContext* nullableType();

  class  QuestContext : public antlr4::ParserRuleContext {
  public:
    QuestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUEST_NO_WS();
    antlr4::tree::TerminalNode *QUEST_WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QuestContext* quest();

  class  UserTypeContext : public antlr4::ParserRuleContext {
  public:
    UserTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleUserTypeContext *> simpleUserType();
    SimpleUserTypeContext* simpleUserType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserTypeContext* userType();

  class  SimpleUserTypeContext : public antlr4::ParserRuleContext {
  public:
    SimpleUserTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    TypeArgumentsContext *typeArguments();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleUserTypeContext* simpleUserType();

  class  TypeProjectionContext : public antlr4::ParserRuleContext {
  public:
    TypeProjectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    TypeProjectionModifiersContext *typeProjectionModifiers();
    antlr4::tree::TerminalNode *MULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeProjectionContext* typeProjection();

  class  TypeProjectionModifiersContext : public antlr4::ParserRuleContext {
  public:
    TypeProjectionModifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeProjectionModifierContext *> typeProjectionModifier();
    TypeProjectionModifierContext* typeProjectionModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeProjectionModifiersContext* typeProjectionModifiers();

  class  TypeProjectionModifierContext : public antlr4::ParserRuleContext {
  public:
    TypeProjectionModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarianceModifierContext *varianceModifier();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    AnnotationContext *annotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeProjectionModifierContext* typeProjectionModifier();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionTypeParametersContext *functionTypeParameters();
    antlr4::tree::TerminalNode *ARROW();
    TypeContext *type();
    ReceiverTypeContext *receiverType();
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeContext* functionType();

  class  FunctionTypeParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeParametersContext* functionTypeParameters();

  class  ParenthesizedTypeContext : public antlr4::ParserRuleContext {
  public:
    ParenthesizedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    TypeContext *type();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParenthesizedTypeContext* parenthesizedType();

  class  ReceiverTypeContext : public antlr4::ParserRuleContext {
  public:
    ReceiverTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesizedTypeContext *parenthesizedType();
    NullableTypeContext *nullableType();
    TypeReferenceContext *typeReference();
    TypeModifiersContext *typeModifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReceiverTypeContext* receiverType();

  class  ParenthesizedUserTypeContext : public antlr4::ParserRuleContext {
  public:
    ParenthesizedUserTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    UserTypeContext *userType();
    ParenthesizedUserTypeContext *parenthesizedUserType();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParenthesizedUserTypeContext* parenthesizedUserType();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<SemisContext *> semis();
    SemisContext* semis(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementsContext* statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    AssignmentContext *assignment();
    LoopStatementContext *loopStatement();
    ExpressionContext *expression();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *AT_NO_WS();
    antlr4::tree::TerminalNode *AT_POST_WS();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelContext* label();

  class  ControlStructureBodyContext : public antlr4::ParserRuleContext {
  public:
    ControlStructureBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ControlStructureBodyContext* controlStructureBody();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  LoopStatementContext : public antlr4::ParserRuleContext {
  public:
    LoopStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForStatementContext *forStatement();
    WhileStatementContext *whileStatement();
    DoWhileStatementContext *doWhileStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoopStatementContext* loopStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *IN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    VariableDeclarationContext *variableDeclaration();
    MultiVariableDeclarationContext *multiVariableDeclaration();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    ControlStructureBodyContext *controlStructureBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStatementContext* forStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    ControlStructureBodyContext *controlStructureBody();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  DoWhileStatementContext : public antlr4::ParserRuleContext {
  public:
    DoWhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    ControlStructureBodyContext *controlStructureBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoWhileStatementContext* doWhileStatement();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    DirectlyAssignableExpressionContext *directlyAssignableExpression();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    AssignableExpressionContext *assignableExpression();
    AssignmentAndOperatorContext *assignmentAndOperator();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  SemiContext : public antlr4::ParserRuleContext {
  public:
    SemiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SemiContext* semi();

  class  SemisContext : public antlr4::ParserRuleContext {
  public:
    SemisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SemisContext* semis();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DisjunctionContext *disjunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  DisjunctionContext : public antlr4::ParserRuleContext {
  public:
    DisjunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConjunctionContext *> conjunction();
    ConjunctionContext* conjunction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISJ();
    antlr4::tree::TerminalNode* DISJ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DisjunctionContext* disjunction();

  class  ConjunctionContext : public antlr4::ParserRuleContext {
  public:
    ConjunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualityContext *> equality();
    EqualityContext* equality(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONJ();
    antlr4::tree::TerminalNode* CONJ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConjunctionContext* conjunction();

  class  EqualityContext : public antlr4::ParserRuleContext {
  public:
    EqualityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComparisonContext *> comparison();
    ComparisonContext* comparison(size_t i);
    std::vector<EqualityOperatorContext *> equalityOperator();
    EqualityOperatorContext* equalityOperator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqualityContext* equality();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GenericCallLikeComparisonContext *> genericCallLikeComparison();
    GenericCallLikeComparisonContext* genericCallLikeComparison(size_t i);
    std::vector<ComparisonOperatorContext *> comparisonOperator();
    ComparisonOperatorContext* comparisonOperator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonContext* comparison();

  class  GenericCallLikeComparisonContext : public antlr4::ParserRuleContext {
  public:
    GenericCallLikeComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InfixOperationContext *infixOperation();
    std::vector<CallSuffixContext *> callSuffix();
    CallSuffixContext* callSuffix(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericCallLikeComparisonContext* genericCallLikeComparison();

  class  InfixOperationContext : public antlr4::ParserRuleContext {
  public:
    InfixOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElvisExpressionContext *> elvisExpression();
    ElvisExpressionContext* elvisExpression(size_t i);
    std::vector<InOperatorContext *> inOperator();
    InOperatorContext* inOperator(size_t i);
    std::vector<IsOperatorContext *> isOperator();
    IsOperatorContext* isOperator(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InfixOperationContext* infixOperation();

  class  ElvisExpressionContext : public antlr4::ParserRuleContext {
  public:
    ElvisExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InfixFunctionCallContext *> infixFunctionCall();
    InfixFunctionCallContext* infixFunctionCall(size_t i);
    std::vector<ElvisContext *> elvis();
    ElvisContext* elvis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElvisExpressionContext* elvisExpression();

  class  ElvisContext : public antlr4::ParserRuleContext {
  public:
    ElvisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUEST_NO_WS();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElvisContext* elvis();

  class  InfixFunctionCallContext : public antlr4::ParserRuleContext {
  public:
    InfixFunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RangeExpressionContext *> rangeExpression();
    RangeExpressionContext* rangeExpression(size_t i);
    std::vector<SimpleIdentifierContext *> simpleIdentifier();
    SimpleIdentifierContext* simpleIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InfixFunctionCallContext* infixFunctionCall();

  class  RangeExpressionContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdditiveExpressionContext *> additiveExpression();
    AdditiveExpressionContext* additiveExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RANGE();
    antlr4::tree::TerminalNode* RANGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeExpressionContext* rangeExpression();

  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplicativeExpressionContext *> multiplicativeExpression();
    MultiplicativeExpressionContext* multiplicativeExpression(size_t i);
    std::vector<AdditiveOperatorContext *> additiveOperator();
    AdditiveOperatorContext* additiveOperator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdditiveExpressionContext* additiveExpression();

  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AsExpressionContext *> asExpression();
    AsExpressionContext* asExpression(size_t i);
    std::vector<MultiplicativeOperatorContext *> multiplicativeOperator();
    MultiplicativeOperatorContext* multiplicativeOperator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();

  class  AsExpressionContext : public antlr4::ParserRuleContext {
  public:
    AsExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixUnaryExpressionContext *prefixUnaryExpression();
    std::vector<AsOperatorContext *> asOperator();
    AsOperatorContext* asOperator(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AsExpressionContext* asExpression();

  class  PrefixUnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrefixUnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixUnaryExpressionContext *postfixUnaryExpression();
    std::vector<UnaryPrefixContext *> unaryPrefix();
    UnaryPrefixContext* unaryPrefix(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixUnaryExpressionContext* prefixUnaryExpression();

  class  UnaryPrefixContext : public antlr4::ParserRuleContext {
  public:
    UnaryPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    LabelContext *label();
    PrefixUnaryOperatorContext *prefixUnaryOperator();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryPrefixContext* unaryPrefix();

  class  PostfixUnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixUnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    std::vector<PostfixUnarySuffixContext *> postfixUnarySuffix();
    PostfixUnarySuffixContext* postfixUnarySuffix(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixUnaryExpressionContext* postfixUnaryExpression();

  class  PostfixUnarySuffixContext : public antlr4::ParserRuleContext {
  public:
    PostfixUnarySuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixUnaryOperatorContext *postfixUnaryOperator();
    TypeArgumentsContext *typeArguments();
    CallSuffixContext *callSuffix();
    IndexingSuffixContext *indexingSuffix();
    NavigationSuffixContext *navigationSuffix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixUnarySuffixContext* postfixUnarySuffix();

  class  DirectlyAssignableExpressionContext : public antlr4::ParserRuleContext {
  public:
    DirectlyAssignableExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixUnaryExpressionContext *postfixUnaryExpression();
    AssignableSuffixContext *assignableSuffix();
    SimpleIdentifierContext *simpleIdentifier();
    ParenthesizedDirectlyAssignableExpressionContext *parenthesizedDirectlyAssignableExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DirectlyAssignableExpressionContext* directlyAssignableExpression();

  class  ParenthesizedDirectlyAssignableExpressionContext : public antlr4::ParserRuleContext {
  public:
    ParenthesizedDirectlyAssignableExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    DirectlyAssignableExpressionContext *directlyAssignableExpression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParenthesizedDirectlyAssignableExpressionContext* parenthesizedDirectlyAssignableExpression();

  class  AssignableExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignableExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixUnaryExpressionContext *prefixUnaryExpression();
    ParenthesizedAssignableExpressionContext *parenthesizedAssignableExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignableExpressionContext* assignableExpression();

  class  ParenthesizedAssignableExpressionContext : public antlr4::ParserRuleContext {
  public:
    ParenthesizedAssignableExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    AssignableExpressionContext *assignableExpression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParenthesizedAssignableExpressionContext* parenthesizedAssignableExpression();

  class  AssignableSuffixContext : public antlr4::ParserRuleContext {
  public:
    AssignableSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeArgumentsContext *typeArguments();
    IndexingSuffixContext *indexingSuffix();
    NavigationSuffixContext *navigationSuffix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignableSuffixContext* assignableSuffix();

  class  IndexingSuffixContext : public antlr4::ParserRuleContext {
  public:
    IndexingSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSQUARE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RSQUARE();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexingSuffixContext* indexingSuffix();

  class  NavigationSuffixContext : public antlr4::ParserRuleContext {
  public:
    NavigationSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberAccessOperatorContext *memberAccessOperator();
    SimpleIdentifierContext *simpleIdentifier();
    ParenthesizedExpressionContext *parenthesizedExpression();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NavigationSuffixContext* navigationSuffix();

  class  CallSuffixContext : public antlr4::ParserRuleContext {
  public:
    CallSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotatedLambdaContext *annotatedLambda();
    ValueArgumentsContext *valueArguments();
    TypeArgumentsContext *typeArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallSuffixContext* callSuffix();

  class  AnnotatedLambdaContext : public antlr4::ParserRuleContext {
  public:
    AnnotatedLambdaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaLiteralContext *lambdaLiteral();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    LabelContext *label();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotatedLambdaContext* annotatedLambda();

  class  TypeArgumentsContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGLE();
    std::vector<TypeProjectionContext *> typeProjection();
    TypeProjectionContext* typeProjection(size_t i);
    antlr4::tree::TerminalNode *RANGLE();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeArgumentsContext* typeArguments();

  class  ValueArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ValueArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<ValueArgumentContext *> valueArgument();
    ValueArgumentContext* valueArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueArgumentsContext* valueArguments();

  class  ValueArgumentContext : public antlr4::ParserRuleContext {
  public:
    ValueArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    AnnotationContext *annotation();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *MULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueArgumentContext* valueArgument();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesizedExpressionContext *parenthesizedExpression();
    SimpleIdentifierContext *simpleIdentifier();
    LiteralConstantContext *literalConstant();
    StringLiteralContext *stringLiteral();
    CallableReferenceContext *callableReference();
    FunctionLiteralContext *functionLiteral();
    ObjectLiteralContext *objectLiteral();
    CollectionLiteralContext *collectionLiteral();
    ThisExpressionContext *thisExpression();
    SuperExpressionContext *superExpression();
    IfExpressionContext *ifExpression();
    WhenExpressionContext *whenExpression();
    TryExpressionContext *tryExpression();
    JumpExpressionContext *jumpExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  ParenthesizedExpressionContext : public antlr4::ParserRuleContext {
  public:
    ParenthesizedExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParenthesizedExpressionContext* parenthesizedExpression();

  class  CollectionLiteralContext : public antlr4::ParserRuleContext {
  public:
    CollectionLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSQUARE();
    antlr4::tree::TerminalNode *RSQUARE();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CollectionLiteralContext* collectionLiteral();

  class  LiteralConstantContext : public antlr4::ParserRuleContext {
  public:
    LiteralConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *HexLiteral();
    antlr4::tree::TerminalNode *BinLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *RealLiteral();
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *LongLiteral();
    antlr4::tree::TerminalNode *UnsignedLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralConstantContext* literalConstant();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LineStringLiteralContext *lineStringLiteral();
    MultiLineStringLiteralContext *multiLineStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  LineStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    LineStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTE_OPEN();
    antlr4::tree::TerminalNode *QUOTE_CLOSE();
    std::vector<LineStringContentContext *> lineStringContent();
    LineStringContentContext* lineStringContent(size_t i);
    std::vector<LineStringExpressionContext *> lineStringExpression();
    LineStringExpressionContext* lineStringExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineStringLiteralContext* lineStringLiteral();

  class  MultiLineStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    MultiLineStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIPLE_QUOTE_OPEN();
    antlr4::tree::TerminalNode *TRIPLE_QUOTE_CLOSE();
    std::vector<MultiLineStringContentContext *> multiLineStringContent();
    MultiLineStringContentContext* multiLineStringContent(size_t i);
    std::vector<MultiLineStringExpressionContext *> multiLineStringExpression();
    MultiLineStringExpressionContext* multiLineStringExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MultiLineStringQuote();
    antlr4::tree::TerminalNode* MultiLineStringQuote(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiLineStringLiteralContext* multiLineStringLiteral();

  class  LineStringContentContext : public antlr4::ParserRuleContext {
  public:
    LineStringContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LineStrText();
    antlr4::tree::TerminalNode *LineStrEscapedChar();
    antlr4::tree::TerminalNode *LineStrRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineStringContentContext* lineStringContent();

  class  LineStringExpressionContext : public antlr4::ParserRuleContext {
  public:
    LineStringExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LineStrExprStart();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineStringExpressionContext* lineStringExpression();

  class  MultiLineStringContentContext : public antlr4::ParserRuleContext {
  public:
    MultiLineStringContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MultiLineStrText();
    antlr4::tree::TerminalNode *MultiLineStringQuote();
    antlr4::tree::TerminalNode *MultiLineStrRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiLineStringContentContext* multiLineStringContent();

  class  MultiLineStringExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiLineStringExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MultiLineStrExprStart();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiLineStringExpressionContext* multiLineStringExpression();

  class  LambdaLiteralContext : public antlr4::ParserRuleContext {
  public:
    LambdaLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *ARROW();
    LambdaParametersContext *lambdaParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaLiteralContext* lambdaLiteral();

  class  LambdaParametersContext : public antlr4::ParserRuleContext {
  public:
    LambdaParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LambdaParameterContext *> lambdaParameter();
    LambdaParameterContext* lambdaParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaParametersContext* lambdaParameters();

  class  LambdaParameterContext : public antlr4::ParserRuleContext {
  public:
    LambdaParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    MultiVariableDeclarationContext *multiVariableDeclaration();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaParameterContext* lambdaParameter();

  class  AnonymousFunctionContext : public antlr4::ParserRuleContext {
  public:
    AnonymousFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUN();
    ParametersWithOptionalTypeContext *parametersWithOptionalType();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeConstraintsContext *typeConstraints();
    FunctionBodyContext *functionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnonymousFunctionContext* anonymousFunction();

  class  FunctionLiteralContext : public antlr4::ParserRuleContext {
  public:
    FunctionLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaLiteralContext *lambdaLiteral();
    AnonymousFunctionContext *anonymousFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionLiteralContext* functionLiteral();

  class  ObjectLiteralContext : public antlr4::ParserRuleContext {
  public:
    ObjectLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *COLON();
    DelegationSpecifiersContext *delegationSpecifiers();
    ClassBodyContext *classBody();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectLiteralContext* objectLiteral();

  class  ThisExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThisExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *THIS_AT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThisExpressionContext* thisExpression();

  class  SuperExpressionContext : public antlr4::ParserRuleContext {
  public:
    SuperExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *LANGLE();
    TypeContext *type();
    antlr4::tree::TerminalNode *RANGLE();
    antlr4::tree::TerminalNode *AT_NO_WS();
    SimpleIdentifierContext *simpleIdentifier();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *SUPER_AT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SuperExpressionContext* superExpression();

  class  IfExpressionContext : public antlr4::ParserRuleContext {
  public:
    IfExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ControlStructureBodyContext *> controlStructureBody();
    ControlStructureBodyContext* controlStructureBody(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfExpressionContext* ifExpression();

  class  WhenSubjectContext : public antlr4::ParserRuleContext {
  public:
    WhenSubjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *VAL();
    VariableDeclarationContext *variableDeclaration();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhenSubjectContext* whenSubject();

  class  WhenExpressionContext : public antlr4::ParserRuleContext {
  public:
    WhenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    WhenSubjectContext *whenSubject();
    std::vector<WhenEntryContext *> whenEntry();
    WhenEntryContext* whenEntry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhenExpressionContext* whenExpression();

  class  WhenEntryContext : public antlr4::ParserRuleContext {
  public:
    WhenEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhenConditionContext *> whenCondition();
    WhenConditionContext* whenCondition(size_t i);
    antlr4::tree::TerminalNode *ARROW();
    ControlStructureBodyContext *controlStructureBody();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    SemiContext *semi();
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhenEntryContext* whenEntry();

  class  WhenConditionContext : public antlr4::ParserRuleContext {
  public:
    WhenConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    RangeTestContext *rangeTest();
    TypeTestContext *typeTest();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhenConditionContext* whenCondition();

  class  RangeTestContext : public antlr4::ParserRuleContext {
  public:
    RangeTestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InOperatorContext *inOperator();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeTestContext* rangeTest();

  class  TypeTestContext : public antlr4::ParserRuleContext {
  public:
    TypeTestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IsOperatorContext *isOperator();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeTestContext* typeTest();

  class  TryExpressionContext : public antlr4::ParserRuleContext {
  public:
    TryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    BlockContext *block();
    FinallyBlockContext *finallyBlock();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<CatchBlockContext *> catchBlock();
    CatchBlockContext* catchBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryExpressionContext* tryExpression();

  class  CatchBlockContext : public antlr4::ParserRuleContext {
  public:
    CatchBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *LPAREN();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchBlockContext* catchBlock();

  class  FinallyBlockContext : public antlr4::ParserRuleContext {
  public:
    FinallyBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINALLY();
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FinallyBlockContext* finallyBlock();

  class  JumpExpressionContext : public antlr4::ParserRuleContext {
  public:
    JumpExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *RETURN_AT();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *CONTINUE_AT();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *BREAK_AT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpExpressionContext* jumpExpression();

  class  CallableReferenceContext : public antlr4::ParserRuleContext {
  public:
    CallableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLONCOLON();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *CLASS();
    ReceiverTypeContext *receiverType();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallableReferenceContext* callableReference();

  class  AssignmentAndOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentAndOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_ASSIGNMENT();
    antlr4::tree::TerminalNode *SUB_ASSIGNMENT();
    antlr4::tree::TerminalNode *MULT_ASSIGNMENT();
    antlr4::tree::TerminalNode *DIV_ASSIGNMENT();
    antlr4::tree::TerminalNode *MOD_ASSIGNMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentAndOperatorContext* assignmentAndOperator();

  class  EqualityOperatorContext : public antlr4::ParserRuleContext {
  public:
    EqualityOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCL_EQ();
    antlr4::tree::TerminalNode *EXCL_EQEQ();
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *EQEQEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqualityOperatorContext* equalityOperator();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGLE();
    antlr4::tree::TerminalNode *RANGLE();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  InOperatorContext : public antlr4::ParserRuleContext {
  public:
    InOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *NOT_IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InOperatorContext* inOperator();

  class  IsOperatorContext : public antlr4::ParserRuleContext {
  public:
    IsOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NOT_IS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IsOperatorContext* isOperator();

  class  AdditiveOperatorContext : public antlr4::ParserRuleContext {
  public:
    AdditiveOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdditiveOperatorContext* additiveOperator();

  class  MultiplicativeOperatorContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiplicativeOperatorContext* multiplicativeOperator();

  class  AsOperatorContext : public antlr4::ParserRuleContext {
  public:
    AsOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *AS_SAFE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AsOperatorContext* asOperator();

  class  PrefixUnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrefixUnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCR();
    antlr4::tree::TerminalNode *DECR();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *ADD();
    ExclContext *excl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixUnaryOperatorContext* prefixUnaryOperator();

  class  PostfixUnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    PostfixUnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCR();
    antlr4::tree::TerminalNode *DECR();
    antlr4::tree::TerminalNode *EXCL_NO_WS();
    ExclContext *excl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixUnaryOperatorContext* postfixUnaryOperator();

  class  ExclContext : public antlr4::ParserRuleContext {
  public:
    ExclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCL_NO_WS();
    antlr4::tree::TerminalNode *EXCL_WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExclContext* excl();

  class  MemberAccessOperatorContext : public antlr4::ParserRuleContext {
  public:
    MemberAccessOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    SafeNavContext *safeNav();
    antlr4::tree::TerminalNode *COLONCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberAccessOperatorContext* memberAccessOperator();

  class  SafeNavContext : public antlr4::ParserRuleContext {
  public:
    SafeNavContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUEST_NO_WS();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SafeNavContext* safeNav();

  class  ModifiersContext : public antlr4::ParserRuleContext {
  public:
    ModifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifiersContext* modifiers();

  class  ParameterModifiersContext : public antlr4::ParserRuleContext {
  public:
    ParameterModifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<ParameterModifierContext *> parameterModifier();
    ParameterModifierContext* parameterModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterModifiersContext* parameterModifiers();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassModifierContext *classModifier();
    MemberModifierContext *memberModifier();
    VisibilityModifierContext *visibilityModifier();
    FunctionModifierContext *functionModifier();
    PropertyModifierContext *propertyModifier();
    InheritanceModifierContext *inheritanceModifier();
    ParameterModifierContext *parameterModifier();
    PlatformModifierContext *platformModifier();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierContext* modifier();

  class  TypeModifiersContext : public antlr4::ParserRuleContext {
  public:
    TypeModifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeModifierContext *> typeModifier();
    TypeModifierContext* typeModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeModifiersContext* typeModifiers();

  class  TypeModifierContext : public antlr4::ParserRuleContext {
  public:
    TypeModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *SUSPEND();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeModifierContext* typeModifier();

  class  ClassModifierContext : public antlr4::ParserRuleContext {
  public:
    ClassModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *ANNOTATION();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassModifierContext* classModifier();

  class  MemberModifierContext : public antlr4::ParserRuleContext {
  public:
    MemberModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *LATEINIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberModifierContext* memberModifier();

  class  VisibilityModifierContext : public antlr4::ParserRuleContext {
  public:
    VisibilityModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *PROTECTED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VisibilityModifierContext* visibilityModifier();

  class  VarianceModifierContext : public antlr4::ParserRuleContext {
  public:
    VarianceModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarianceModifierContext* varianceModifier();

  class  TypeParameterModifiersContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterModifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeParameterModifierContext *> typeParameterModifier();
    TypeParameterModifierContext* typeParameterModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterModifiersContext* typeParameterModifiers();

  class  TypeParameterModifierContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReificationModifierContext *reificationModifier();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    VarianceModifierContext *varianceModifier();
    AnnotationContext *annotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParameterModifierContext* typeParameterModifier();

  class  FunctionModifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAILREC();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *SUSPEND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionModifierContext* functionModifier();

  class  PropertyModifierContext : public antlr4::ParserRuleContext {
  public:
    PropertyModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyModifierContext* propertyModifier();

  class  InheritanceModifierContext : public antlr4::ParserRuleContext {
  public:
    InheritanceModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *OPEN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InheritanceModifierContext* inheritanceModifier();

  class  ParameterModifierContext : public antlr4::ParserRuleContext {
  public:
    ParameterModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARARG();
    antlr4::tree::TerminalNode *NOINLINE();
    antlr4::tree::TerminalNode *CROSSINLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterModifierContext* parameterModifier();

  class  ReificationModifierContext : public antlr4::ParserRuleContext {
  public:
    ReificationModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REIFIED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReificationModifierContext* reificationModifier();

  class  PlatformModifierContext : public antlr4::ParserRuleContext {
  public:
    PlatformModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPECT();
    antlr4::tree::TerminalNode *ACTUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PlatformModifierContext* platformModifier();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleAnnotationContext *singleAnnotation();
    MultiAnnotationContext *multiAnnotation();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationContext* annotation();

  class  SingleAnnotationContext : public antlr4::ParserRuleContext {
  public:
    SingleAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnescapedAnnotationContext *unescapedAnnotation();
    AnnotationUseSiteTargetContext *annotationUseSiteTarget();
    antlr4::tree::TerminalNode *AT_NO_WS();
    antlr4::tree::TerminalNode *AT_PRE_WS();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SingleAnnotationContext* singleAnnotation();

  class  MultiAnnotationContext : public antlr4::ParserRuleContext {
  public:
    MultiAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSQUARE();
    antlr4::tree::TerminalNode *RSQUARE();
    AnnotationUseSiteTargetContext *annotationUseSiteTarget();
    antlr4::tree::TerminalNode *AT_NO_WS();
    antlr4::tree::TerminalNode *AT_PRE_WS();
    std::vector<UnescapedAnnotationContext *> unescapedAnnotation();
    UnescapedAnnotationContext* unescapedAnnotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiAnnotationContext* multiAnnotation();

  class  AnnotationUseSiteTargetContext : public antlr4::ParserRuleContext {
  public:
    AnnotationUseSiteTargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *AT_NO_WS();
    antlr4::tree::TerminalNode *AT_PRE_WS();
    antlr4::tree::TerminalNode *FIELD();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *RECEIVER();
    antlr4::tree::TerminalNode *PARAM();
    antlr4::tree::TerminalNode *SETPARAM();
    antlr4::tree::TerminalNode *DELEGATE();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationUseSiteTargetContext* annotationUseSiteTarget();

  class  UnescapedAnnotationContext : public antlr4::ParserRuleContext {
  public:
    UnescapedAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructorInvocationContext *constructorInvocation();
    UserTypeContext *userType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnescapedAnnotationContext* unescapedAnnotation();

  class  SimpleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *ANNOTATION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *COMPANION();
    antlr4::tree::TerminalNode *CONSTRUCTOR();
    antlr4::tree::TerminalNode *CROSSINLINE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FINALLY();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INIT();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *LATEINIT();
    antlr4::tree::TerminalNode *NOINLINE();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *REIFIED();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *TAILREC();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *VARARG();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *FIELD();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *RECEIVER();
    antlr4::tree::TerminalNode *PARAM();
    antlr4::tree::TerminalNode *SETPARAM();
    antlr4::tree::TerminalNode *DELEGATE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *EXPECT();
    antlr4::tree::TerminalNode *ACTUAL();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleIdentifierContext* simpleIdentifier();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleIdentifierContext *> simpleIdentifier();
    SimpleIdentifierContext* simpleIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

