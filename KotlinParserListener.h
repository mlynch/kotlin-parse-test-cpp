
// Generated from KotlinParser.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "KotlinParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by KotlinParser.
 */
class  KotlinParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterKotlinFile(KotlinParser::KotlinFileContext *ctx) = 0;
  virtual void exitKotlinFile(KotlinParser::KotlinFileContext *ctx) = 0;

  virtual void enterScript(KotlinParser::ScriptContext *ctx) = 0;
  virtual void exitScript(KotlinParser::ScriptContext *ctx) = 0;

  virtual void enterShebangLine(KotlinParser::ShebangLineContext *ctx) = 0;
  virtual void exitShebangLine(KotlinParser::ShebangLineContext *ctx) = 0;

  virtual void enterFileAnnotation(KotlinParser::FileAnnotationContext *ctx) = 0;
  virtual void exitFileAnnotation(KotlinParser::FileAnnotationContext *ctx) = 0;

  virtual void enterPackageHeader(KotlinParser::PackageHeaderContext *ctx) = 0;
  virtual void exitPackageHeader(KotlinParser::PackageHeaderContext *ctx) = 0;

  virtual void enterImportList(KotlinParser::ImportListContext *ctx) = 0;
  virtual void exitImportList(KotlinParser::ImportListContext *ctx) = 0;

  virtual void enterImportHeader(KotlinParser::ImportHeaderContext *ctx) = 0;
  virtual void exitImportHeader(KotlinParser::ImportHeaderContext *ctx) = 0;

  virtual void enterImportAlias(KotlinParser::ImportAliasContext *ctx) = 0;
  virtual void exitImportAlias(KotlinParser::ImportAliasContext *ctx) = 0;

  virtual void enterTopLevelObject(KotlinParser::TopLevelObjectContext *ctx) = 0;
  virtual void exitTopLevelObject(KotlinParser::TopLevelObjectContext *ctx) = 0;

  virtual void enterTypeAlias(KotlinParser::TypeAliasContext *ctx) = 0;
  virtual void exitTypeAlias(KotlinParser::TypeAliasContext *ctx) = 0;

  virtual void enterDeclaration(KotlinParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(KotlinParser::DeclarationContext *ctx) = 0;

  virtual void enterClassDeclaration(KotlinParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(KotlinParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterPrimaryConstructor(KotlinParser::PrimaryConstructorContext *ctx) = 0;
  virtual void exitPrimaryConstructor(KotlinParser::PrimaryConstructorContext *ctx) = 0;

  virtual void enterClassBody(KotlinParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(KotlinParser::ClassBodyContext *ctx) = 0;

  virtual void enterClassParameters(KotlinParser::ClassParametersContext *ctx) = 0;
  virtual void exitClassParameters(KotlinParser::ClassParametersContext *ctx) = 0;

  virtual void enterClassParameter(KotlinParser::ClassParameterContext *ctx) = 0;
  virtual void exitClassParameter(KotlinParser::ClassParameterContext *ctx) = 0;

  virtual void enterDelegationSpecifiers(KotlinParser::DelegationSpecifiersContext *ctx) = 0;
  virtual void exitDelegationSpecifiers(KotlinParser::DelegationSpecifiersContext *ctx) = 0;

  virtual void enterDelegationSpecifier(KotlinParser::DelegationSpecifierContext *ctx) = 0;
  virtual void exitDelegationSpecifier(KotlinParser::DelegationSpecifierContext *ctx) = 0;

  virtual void enterConstructorInvocation(KotlinParser::ConstructorInvocationContext *ctx) = 0;
  virtual void exitConstructorInvocation(KotlinParser::ConstructorInvocationContext *ctx) = 0;

  virtual void enterAnnotatedDelegationSpecifier(KotlinParser::AnnotatedDelegationSpecifierContext *ctx) = 0;
  virtual void exitAnnotatedDelegationSpecifier(KotlinParser::AnnotatedDelegationSpecifierContext *ctx) = 0;

  virtual void enterExplicitDelegation(KotlinParser::ExplicitDelegationContext *ctx) = 0;
  virtual void exitExplicitDelegation(KotlinParser::ExplicitDelegationContext *ctx) = 0;

  virtual void enterTypeParameters(KotlinParser::TypeParametersContext *ctx) = 0;
  virtual void exitTypeParameters(KotlinParser::TypeParametersContext *ctx) = 0;

  virtual void enterTypeParameter(KotlinParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(KotlinParser::TypeParameterContext *ctx) = 0;

  virtual void enterTypeConstraints(KotlinParser::TypeConstraintsContext *ctx) = 0;
  virtual void exitTypeConstraints(KotlinParser::TypeConstraintsContext *ctx) = 0;

  virtual void enterTypeConstraint(KotlinParser::TypeConstraintContext *ctx) = 0;
  virtual void exitTypeConstraint(KotlinParser::TypeConstraintContext *ctx) = 0;

  virtual void enterClassMemberDeclarations(KotlinParser::ClassMemberDeclarationsContext *ctx) = 0;
  virtual void exitClassMemberDeclarations(KotlinParser::ClassMemberDeclarationsContext *ctx) = 0;

  virtual void enterClassMemberDeclaration(KotlinParser::ClassMemberDeclarationContext *ctx) = 0;
  virtual void exitClassMemberDeclaration(KotlinParser::ClassMemberDeclarationContext *ctx) = 0;

  virtual void enterAnonymousInitializer(KotlinParser::AnonymousInitializerContext *ctx) = 0;
  virtual void exitAnonymousInitializer(KotlinParser::AnonymousInitializerContext *ctx) = 0;

  virtual void enterCompanionObject(KotlinParser::CompanionObjectContext *ctx) = 0;
  virtual void exitCompanionObject(KotlinParser::CompanionObjectContext *ctx) = 0;

  virtual void enterFunctionValueParameters(KotlinParser::FunctionValueParametersContext *ctx) = 0;
  virtual void exitFunctionValueParameters(KotlinParser::FunctionValueParametersContext *ctx) = 0;

  virtual void enterFunctionValueParameter(KotlinParser::FunctionValueParameterContext *ctx) = 0;
  virtual void exitFunctionValueParameter(KotlinParser::FunctionValueParameterContext *ctx) = 0;

  virtual void enterFunctionDeclaration(KotlinParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(KotlinParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterFunctionBody(KotlinParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(KotlinParser::FunctionBodyContext *ctx) = 0;

  virtual void enterVariableDeclaration(KotlinParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(KotlinParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterMultiVariableDeclaration(KotlinParser::MultiVariableDeclarationContext *ctx) = 0;
  virtual void exitMultiVariableDeclaration(KotlinParser::MultiVariableDeclarationContext *ctx) = 0;

  virtual void enterPropertyDeclaration(KotlinParser::PropertyDeclarationContext *ctx) = 0;
  virtual void exitPropertyDeclaration(KotlinParser::PropertyDeclarationContext *ctx) = 0;

  virtual void enterPropertyDelegate(KotlinParser::PropertyDelegateContext *ctx) = 0;
  virtual void exitPropertyDelegate(KotlinParser::PropertyDelegateContext *ctx) = 0;

  virtual void enterGetter(KotlinParser::GetterContext *ctx) = 0;
  virtual void exitGetter(KotlinParser::GetterContext *ctx) = 0;

  virtual void enterSetter(KotlinParser::SetterContext *ctx) = 0;
  virtual void exitSetter(KotlinParser::SetterContext *ctx) = 0;

  virtual void enterParametersWithOptionalType(KotlinParser::ParametersWithOptionalTypeContext *ctx) = 0;
  virtual void exitParametersWithOptionalType(KotlinParser::ParametersWithOptionalTypeContext *ctx) = 0;

  virtual void enterFunctionValueParameterWithOptionalType(KotlinParser::FunctionValueParameterWithOptionalTypeContext *ctx) = 0;
  virtual void exitFunctionValueParameterWithOptionalType(KotlinParser::FunctionValueParameterWithOptionalTypeContext *ctx) = 0;

  virtual void enterParameterWithOptionalType(KotlinParser::ParameterWithOptionalTypeContext *ctx) = 0;
  virtual void exitParameterWithOptionalType(KotlinParser::ParameterWithOptionalTypeContext *ctx) = 0;

  virtual void enterParameter(KotlinParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(KotlinParser::ParameterContext *ctx) = 0;

  virtual void enterObjectDeclaration(KotlinParser::ObjectDeclarationContext *ctx) = 0;
  virtual void exitObjectDeclaration(KotlinParser::ObjectDeclarationContext *ctx) = 0;

  virtual void enterSecondaryConstructor(KotlinParser::SecondaryConstructorContext *ctx) = 0;
  virtual void exitSecondaryConstructor(KotlinParser::SecondaryConstructorContext *ctx) = 0;

  virtual void enterConstructorDelegationCall(KotlinParser::ConstructorDelegationCallContext *ctx) = 0;
  virtual void exitConstructorDelegationCall(KotlinParser::ConstructorDelegationCallContext *ctx) = 0;

  virtual void enterEnumClassBody(KotlinParser::EnumClassBodyContext *ctx) = 0;
  virtual void exitEnumClassBody(KotlinParser::EnumClassBodyContext *ctx) = 0;

  virtual void enterEnumEntries(KotlinParser::EnumEntriesContext *ctx) = 0;
  virtual void exitEnumEntries(KotlinParser::EnumEntriesContext *ctx) = 0;

  virtual void enterEnumEntry(KotlinParser::EnumEntryContext *ctx) = 0;
  virtual void exitEnumEntry(KotlinParser::EnumEntryContext *ctx) = 0;

  virtual void enterType(KotlinParser::TypeContext *ctx) = 0;
  virtual void exitType(KotlinParser::TypeContext *ctx) = 0;

  virtual void enterTypeReference(KotlinParser::TypeReferenceContext *ctx) = 0;
  virtual void exitTypeReference(KotlinParser::TypeReferenceContext *ctx) = 0;

  virtual void enterNullableType(KotlinParser::NullableTypeContext *ctx) = 0;
  virtual void exitNullableType(KotlinParser::NullableTypeContext *ctx) = 0;

  virtual void enterQuest(KotlinParser::QuestContext *ctx) = 0;
  virtual void exitQuest(KotlinParser::QuestContext *ctx) = 0;

  virtual void enterUserType(KotlinParser::UserTypeContext *ctx) = 0;
  virtual void exitUserType(KotlinParser::UserTypeContext *ctx) = 0;

  virtual void enterSimpleUserType(KotlinParser::SimpleUserTypeContext *ctx) = 0;
  virtual void exitSimpleUserType(KotlinParser::SimpleUserTypeContext *ctx) = 0;

  virtual void enterTypeProjection(KotlinParser::TypeProjectionContext *ctx) = 0;
  virtual void exitTypeProjection(KotlinParser::TypeProjectionContext *ctx) = 0;

  virtual void enterTypeProjectionModifiers(KotlinParser::TypeProjectionModifiersContext *ctx) = 0;
  virtual void exitTypeProjectionModifiers(KotlinParser::TypeProjectionModifiersContext *ctx) = 0;

  virtual void enterTypeProjectionModifier(KotlinParser::TypeProjectionModifierContext *ctx) = 0;
  virtual void exitTypeProjectionModifier(KotlinParser::TypeProjectionModifierContext *ctx) = 0;

  virtual void enterFunctionType(KotlinParser::FunctionTypeContext *ctx) = 0;
  virtual void exitFunctionType(KotlinParser::FunctionTypeContext *ctx) = 0;

  virtual void enterFunctionTypeParameters(KotlinParser::FunctionTypeParametersContext *ctx) = 0;
  virtual void exitFunctionTypeParameters(KotlinParser::FunctionTypeParametersContext *ctx) = 0;

  virtual void enterParenthesizedType(KotlinParser::ParenthesizedTypeContext *ctx) = 0;
  virtual void exitParenthesizedType(KotlinParser::ParenthesizedTypeContext *ctx) = 0;

  virtual void enterReceiverType(KotlinParser::ReceiverTypeContext *ctx) = 0;
  virtual void exitReceiverType(KotlinParser::ReceiverTypeContext *ctx) = 0;

  virtual void enterParenthesizedUserType(KotlinParser::ParenthesizedUserTypeContext *ctx) = 0;
  virtual void exitParenthesizedUserType(KotlinParser::ParenthesizedUserTypeContext *ctx) = 0;

  virtual void enterStatements(KotlinParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(KotlinParser::StatementsContext *ctx) = 0;

  virtual void enterStatement(KotlinParser::StatementContext *ctx) = 0;
  virtual void exitStatement(KotlinParser::StatementContext *ctx) = 0;

  virtual void enterLabel(KotlinParser::LabelContext *ctx) = 0;
  virtual void exitLabel(KotlinParser::LabelContext *ctx) = 0;

  virtual void enterControlStructureBody(KotlinParser::ControlStructureBodyContext *ctx) = 0;
  virtual void exitControlStructureBody(KotlinParser::ControlStructureBodyContext *ctx) = 0;

  virtual void enterBlock(KotlinParser::BlockContext *ctx) = 0;
  virtual void exitBlock(KotlinParser::BlockContext *ctx) = 0;

  virtual void enterLoopStatement(KotlinParser::LoopStatementContext *ctx) = 0;
  virtual void exitLoopStatement(KotlinParser::LoopStatementContext *ctx) = 0;

  virtual void enterForStatement(KotlinParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(KotlinParser::ForStatementContext *ctx) = 0;

  virtual void enterWhileStatement(KotlinParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(KotlinParser::WhileStatementContext *ctx) = 0;

  virtual void enterDoWhileStatement(KotlinParser::DoWhileStatementContext *ctx) = 0;
  virtual void exitDoWhileStatement(KotlinParser::DoWhileStatementContext *ctx) = 0;

  virtual void enterAssignment(KotlinParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(KotlinParser::AssignmentContext *ctx) = 0;

  virtual void enterSemi(KotlinParser::SemiContext *ctx) = 0;
  virtual void exitSemi(KotlinParser::SemiContext *ctx) = 0;

  virtual void enterSemis(KotlinParser::SemisContext *ctx) = 0;
  virtual void exitSemis(KotlinParser::SemisContext *ctx) = 0;

  virtual void enterExpression(KotlinParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(KotlinParser::ExpressionContext *ctx) = 0;

  virtual void enterDisjunction(KotlinParser::DisjunctionContext *ctx) = 0;
  virtual void exitDisjunction(KotlinParser::DisjunctionContext *ctx) = 0;

  virtual void enterConjunction(KotlinParser::ConjunctionContext *ctx) = 0;
  virtual void exitConjunction(KotlinParser::ConjunctionContext *ctx) = 0;

  virtual void enterEquality(KotlinParser::EqualityContext *ctx) = 0;
  virtual void exitEquality(KotlinParser::EqualityContext *ctx) = 0;

  virtual void enterComparison(KotlinParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(KotlinParser::ComparisonContext *ctx) = 0;

  virtual void enterGenericCallLikeComparison(KotlinParser::GenericCallLikeComparisonContext *ctx) = 0;
  virtual void exitGenericCallLikeComparison(KotlinParser::GenericCallLikeComparisonContext *ctx) = 0;

  virtual void enterInfixOperation(KotlinParser::InfixOperationContext *ctx) = 0;
  virtual void exitInfixOperation(KotlinParser::InfixOperationContext *ctx) = 0;

  virtual void enterElvisExpression(KotlinParser::ElvisExpressionContext *ctx) = 0;
  virtual void exitElvisExpression(KotlinParser::ElvisExpressionContext *ctx) = 0;

  virtual void enterElvis(KotlinParser::ElvisContext *ctx) = 0;
  virtual void exitElvis(KotlinParser::ElvisContext *ctx) = 0;

  virtual void enterInfixFunctionCall(KotlinParser::InfixFunctionCallContext *ctx) = 0;
  virtual void exitInfixFunctionCall(KotlinParser::InfixFunctionCallContext *ctx) = 0;

  virtual void enterRangeExpression(KotlinParser::RangeExpressionContext *ctx) = 0;
  virtual void exitRangeExpression(KotlinParser::RangeExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(KotlinParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(KotlinParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(KotlinParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(KotlinParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterAsExpression(KotlinParser::AsExpressionContext *ctx) = 0;
  virtual void exitAsExpression(KotlinParser::AsExpressionContext *ctx) = 0;

  virtual void enterPrefixUnaryExpression(KotlinParser::PrefixUnaryExpressionContext *ctx) = 0;
  virtual void exitPrefixUnaryExpression(KotlinParser::PrefixUnaryExpressionContext *ctx) = 0;

  virtual void enterUnaryPrefix(KotlinParser::UnaryPrefixContext *ctx) = 0;
  virtual void exitUnaryPrefix(KotlinParser::UnaryPrefixContext *ctx) = 0;

  virtual void enterPostfixUnaryExpression(KotlinParser::PostfixUnaryExpressionContext *ctx) = 0;
  virtual void exitPostfixUnaryExpression(KotlinParser::PostfixUnaryExpressionContext *ctx) = 0;

  virtual void enterPostfixUnarySuffix(KotlinParser::PostfixUnarySuffixContext *ctx) = 0;
  virtual void exitPostfixUnarySuffix(KotlinParser::PostfixUnarySuffixContext *ctx) = 0;

  virtual void enterDirectlyAssignableExpression(KotlinParser::DirectlyAssignableExpressionContext *ctx) = 0;
  virtual void exitDirectlyAssignableExpression(KotlinParser::DirectlyAssignableExpressionContext *ctx) = 0;

  virtual void enterParenthesizedDirectlyAssignableExpression(KotlinParser::ParenthesizedDirectlyAssignableExpressionContext *ctx) = 0;
  virtual void exitParenthesizedDirectlyAssignableExpression(KotlinParser::ParenthesizedDirectlyAssignableExpressionContext *ctx) = 0;

  virtual void enterAssignableExpression(KotlinParser::AssignableExpressionContext *ctx) = 0;
  virtual void exitAssignableExpression(KotlinParser::AssignableExpressionContext *ctx) = 0;

  virtual void enterParenthesizedAssignableExpression(KotlinParser::ParenthesizedAssignableExpressionContext *ctx) = 0;
  virtual void exitParenthesizedAssignableExpression(KotlinParser::ParenthesizedAssignableExpressionContext *ctx) = 0;

  virtual void enterAssignableSuffix(KotlinParser::AssignableSuffixContext *ctx) = 0;
  virtual void exitAssignableSuffix(KotlinParser::AssignableSuffixContext *ctx) = 0;

  virtual void enterIndexingSuffix(KotlinParser::IndexingSuffixContext *ctx) = 0;
  virtual void exitIndexingSuffix(KotlinParser::IndexingSuffixContext *ctx) = 0;

  virtual void enterNavigationSuffix(KotlinParser::NavigationSuffixContext *ctx) = 0;
  virtual void exitNavigationSuffix(KotlinParser::NavigationSuffixContext *ctx) = 0;

  virtual void enterCallSuffix(KotlinParser::CallSuffixContext *ctx) = 0;
  virtual void exitCallSuffix(KotlinParser::CallSuffixContext *ctx) = 0;

  virtual void enterAnnotatedLambda(KotlinParser::AnnotatedLambdaContext *ctx) = 0;
  virtual void exitAnnotatedLambda(KotlinParser::AnnotatedLambdaContext *ctx) = 0;

  virtual void enterTypeArguments(KotlinParser::TypeArgumentsContext *ctx) = 0;
  virtual void exitTypeArguments(KotlinParser::TypeArgumentsContext *ctx) = 0;

  virtual void enterValueArguments(KotlinParser::ValueArgumentsContext *ctx) = 0;
  virtual void exitValueArguments(KotlinParser::ValueArgumentsContext *ctx) = 0;

  virtual void enterValueArgument(KotlinParser::ValueArgumentContext *ctx) = 0;
  virtual void exitValueArgument(KotlinParser::ValueArgumentContext *ctx) = 0;

  virtual void enterPrimaryExpression(KotlinParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(KotlinParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterParenthesizedExpression(KotlinParser::ParenthesizedExpressionContext *ctx) = 0;
  virtual void exitParenthesizedExpression(KotlinParser::ParenthesizedExpressionContext *ctx) = 0;

  virtual void enterCollectionLiteral(KotlinParser::CollectionLiteralContext *ctx) = 0;
  virtual void exitCollectionLiteral(KotlinParser::CollectionLiteralContext *ctx) = 0;

  virtual void enterLiteralConstant(KotlinParser::LiteralConstantContext *ctx) = 0;
  virtual void exitLiteralConstant(KotlinParser::LiteralConstantContext *ctx) = 0;

  virtual void enterStringLiteral(KotlinParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(KotlinParser::StringLiteralContext *ctx) = 0;

  virtual void enterLineStringLiteral(KotlinParser::LineStringLiteralContext *ctx) = 0;
  virtual void exitLineStringLiteral(KotlinParser::LineStringLiteralContext *ctx) = 0;

  virtual void enterMultiLineStringLiteral(KotlinParser::MultiLineStringLiteralContext *ctx) = 0;
  virtual void exitMultiLineStringLiteral(KotlinParser::MultiLineStringLiteralContext *ctx) = 0;

  virtual void enterLineStringContent(KotlinParser::LineStringContentContext *ctx) = 0;
  virtual void exitLineStringContent(KotlinParser::LineStringContentContext *ctx) = 0;

  virtual void enterLineStringExpression(KotlinParser::LineStringExpressionContext *ctx) = 0;
  virtual void exitLineStringExpression(KotlinParser::LineStringExpressionContext *ctx) = 0;

  virtual void enterMultiLineStringContent(KotlinParser::MultiLineStringContentContext *ctx) = 0;
  virtual void exitMultiLineStringContent(KotlinParser::MultiLineStringContentContext *ctx) = 0;

  virtual void enterMultiLineStringExpression(KotlinParser::MultiLineStringExpressionContext *ctx) = 0;
  virtual void exitMultiLineStringExpression(KotlinParser::MultiLineStringExpressionContext *ctx) = 0;

  virtual void enterLambdaLiteral(KotlinParser::LambdaLiteralContext *ctx) = 0;
  virtual void exitLambdaLiteral(KotlinParser::LambdaLiteralContext *ctx) = 0;

  virtual void enterLambdaParameters(KotlinParser::LambdaParametersContext *ctx) = 0;
  virtual void exitLambdaParameters(KotlinParser::LambdaParametersContext *ctx) = 0;

  virtual void enterLambdaParameter(KotlinParser::LambdaParameterContext *ctx) = 0;
  virtual void exitLambdaParameter(KotlinParser::LambdaParameterContext *ctx) = 0;

  virtual void enterAnonymousFunction(KotlinParser::AnonymousFunctionContext *ctx) = 0;
  virtual void exitAnonymousFunction(KotlinParser::AnonymousFunctionContext *ctx) = 0;

  virtual void enterFunctionLiteral(KotlinParser::FunctionLiteralContext *ctx) = 0;
  virtual void exitFunctionLiteral(KotlinParser::FunctionLiteralContext *ctx) = 0;

  virtual void enterObjectLiteral(KotlinParser::ObjectLiteralContext *ctx) = 0;
  virtual void exitObjectLiteral(KotlinParser::ObjectLiteralContext *ctx) = 0;

  virtual void enterThisExpression(KotlinParser::ThisExpressionContext *ctx) = 0;
  virtual void exitThisExpression(KotlinParser::ThisExpressionContext *ctx) = 0;

  virtual void enterSuperExpression(KotlinParser::SuperExpressionContext *ctx) = 0;
  virtual void exitSuperExpression(KotlinParser::SuperExpressionContext *ctx) = 0;

  virtual void enterIfExpression(KotlinParser::IfExpressionContext *ctx) = 0;
  virtual void exitIfExpression(KotlinParser::IfExpressionContext *ctx) = 0;

  virtual void enterWhenSubject(KotlinParser::WhenSubjectContext *ctx) = 0;
  virtual void exitWhenSubject(KotlinParser::WhenSubjectContext *ctx) = 0;

  virtual void enterWhenExpression(KotlinParser::WhenExpressionContext *ctx) = 0;
  virtual void exitWhenExpression(KotlinParser::WhenExpressionContext *ctx) = 0;

  virtual void enterWhenEntry(KotlinParser::WhenEntryContext *ctx) = 0;
  virtual void exitWhenEntry(KotlinParser::WhenEntryContext *ctx) = 0;

  virtual void enterWhenCondition(KotlinParser::WhenConditionContext *ctx) = 0;
  virtual void exitWhenCondition(KotlinParser::WhenConditionContext *ctx) = 0;

  virtual void enterRangeTest(KotlinParser::RangeTestContext *ctx) = 0;
  virtual void exitRangeTest(KotlinParser::RangeTestContext *ctx) = 0;

  virtual void enterTypeTest(KotlinParser::TypeTestContext *ctx) = 0;
  virtual void exitTypeTest(KotlinParser::TypeTestContext *ctx) = 0;

  virtual void enterTryExpression(KotlinParser::TryExpressionContext *ctx) = 0;
  virtual void exitTryExpression(KotlinParser::TryExpressionContext *ctx) = 0;

  virtual void enterCatchBlock(KotlinParser::CatchBlockContext *ctx) = 0;
  virtual void exitCatchBlock(KotlinParser::CatchBlockContext *ctx) = 0;

  virtual void enterFinallyBlock(KotlinParser::FinallyBlockContext *ctx) = 0;
  virtual void exitFinallyBlock(KotlinParser::FinallyBlockContext *ctx) = 0;

  virtual void enterJumpExpression(KotlinParser::JumpExpressionContext *ctx) = 0;
  virtual void exitJumpExpression(KotlinParser::JumpExpressionContext *ctx) = 0;

  virtual void enterCallableReference(KotlinParser::CallableReferenceContext *ctx) = 0;
  virtual void exitCallableReference(KotlinParser::CallableReferenceContext *ctx) = 0;

  virtual void enterAssignmentAndOperator(KotlinParser::AssignmentAndOperatorContext *ctx) = 0;
  virtual void exitAssignmentAndOperator(KotlinParser::AssignmentAndOperatorContext *ctx) = 0;

  virtual void enterEqualityOperator(KotlinParser::EqualityOperatorContext *ctx) = 0;
  virtual void exitEqualityOperator(KotlinParser::EqualityOperatorContext *ctx) = 0;

  virtual void enterComparisonOperator(KotlinParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(KotlinParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterInOperator(KotlinParser::InOperatorContext *ctx) = 0;
  virtual void exitInOperator(KotlinParser::InOperatorContext *ctx) = 0;

  virtual void enterIsOperator(KotlinParser::IsOperatorContext *ctx) = 0;
  virtual void exitIsOperator(KotlinParser::IsOperatorContext *ctx) = 0;

  virtual void enterAdditiveOperator(KotlinParser::AdditiveOperatorContext *ctx) = 0;
  virtual void exitAdditiveOperator(KotlinParser::AdditiveOperatorContext *ctx) = 0;

  virtual void enterMultiplicativeOperator(KotlinParser::MultiplicativeOperatorContext *ctx) = 0;
  virtual void exitMultiplicativeOperator(KotlinParser::MultiplicativeOperatorContext *ctx) = 0;

  virtual void enterAsOperator(KotlinParser::AsOperatorContext *ctx) = 0;
  virtual void exitAsOperator(KotlinParser::AsOperatorContext *ctx) = 0;

  virtual void enterPrefixUnaryOperator(KotlinParser::PrefixUnaryOperatorContext *ctx) = 0;
  virtual void exitPrefixUnaryOperator(KotlinParser::PrefixUnaryOperatorContext *ctx) = 0;

  virtual void enterPostfixUnaryOperator(KotlinParser::PostfixUnaryOperatorContext *ctx) = 0;
  virtual void exitPostfixUnaryOperator(KotlinParser::PostfixUnaryOperatorContext *ctx) = 0;

  virtual void enterExcl(KotlinParser::ExclContext *ctx) = 0;
  virtual void exitExcl(KotlinParser::ExclContext *ctx) = 0;

  virtual void enterMemberAccessOperator(KotlinParser::MemberAccessOperatorContext *ctx) = 0;
  virtual void exitMemberAccessOperator(KotlinParser::MemberAccessOperatorContext *ctx) = 0;

  virtual void enterSafeNav(KotlinParser::SafeNavContext *ctx) = 0;
  virtual void exitSafeNav(KotlinParser::SafeNavContext *ctx) = 0;

  virtual void enterModifiers(KotlinParser::ModifiersContext *ctx) = 0;
  virtual void exitModifiers(KotlinParser::ModifiersContext *ctx) = 0;

  virtual void enterParameterModifiers(KotlinParser::ParameterModifiersContext *ctx) = 0;
  virtual void exitParameterModifiers(KotlinParser::ParameterModifiersContext *ctx) = 0;

  virtual void enterModifier(KotlinParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(KotlinParser::ModifierContext *ctx) = 0;

  virtual void enterTypeModifiers(KotlinParser::TypeModifiersContext *ctx) = 0;
  virtual void exitTypeModifiers(KotlinParser::TypeModifiersContext *ctx) = 0;

  virtual void enterTypeModifier(KotlinParser::TypeModifierContext *ctx) = 0;
  virtual void exitTypeModifier(KotlinParser::TypeModifierContext *ctx) = 0;

  virtual void enterClassModifier(KotlinParser::ClassModifierContext *ctx) = 0;
  virtual void exitClassModifier(KotlinParser::ClassModifierContext *ctx) = 0;

  virtual void enterMemberModifier(KotlinParser::MemberModifierContext *ctx) = 0;
  virtual void exitMemberModifier(KotlinParser::MemberModifierContext *ctx) = 0;

  virtual void enterVisibilityModifier(KotlinParser::VisibilityModifierContext *ctx) = 0;
  virtual void exitVisibilityModifier(KotlinParser::VisibilityModifierContext *ctx) = 0;

  virtual void enterVarianceModifier(KotlinParser::VarianceModifierContext *ctx) = 0;
  virtual void exitVarianceModifier(KotlinParser::VarianceModifierContext *ctx) = 0;

  virtual void enterTypeParameterModifiers(KotlinParser::TypeParameterModifiersContext *ctx) = 0;
  virtual void exitTypeParameterModifiers(KotlinParser::TypeParameterModifiersContext *ctx) = 0;

  virtual void enterTypeParameterModifier(KotlinParser::TypeParameterModifierContext *ctx) = 0;
  virtual void exitTypeParameterModifier(KotlinParser::TypeParameterModifierContext *ctx) = 0;

  virtual void enterFunctionModifier(KotlinParser::FunctionModifierContext *ctx) = 0;
  virtual void exitFunctionModifier(KotlinParser::FunctionModifierContext *ctx) = 0;

  virtual void enterPropertyModifier(KotlinParser::PropertyModifierContext *ctx) = 0;
  virtual void exitPropertyModifier(KotlinParser::PropertyModifierContext *ctx) = 0;

  virtual void enterInheritanceModifier(KotlinParser::InheritanceModifierContext *ctx) = 0;
  virtual void exitInheritanceModifier(KotlinParser::InheritanceModifierContext *ctx) = 0;

  virtual void enterParameterModifier(KotlinParser::ParameterModifierContext *ctx) = 0;
  virtual void exitParameterModifier(KotlinParser::ParameterModifierContext *ctx) = 0;

  virtual void enterReificationModifier(KotlinParser::ReificationModifierContext *ctx) = 0;
  virtual void exitReificationModifier(KotlinParser::ReificationModifierContext *ctx) = 0;

  virtual void enterPlatformModifier(KotlinParser::PlatformModifierContext *ctx) = 0;
  virtual void exitPlatformModifier(KotlinParser::PlatformModifierContext *ctx) = 0;

  virtual void enterAnnotation(KotlinParser::AnnotationContext *ctx) = 0;
  virtual void exitAnnotation(KotlinParser::AnnotationContext *ctx) = 0;

  virtual void enterSingleAnnotation(KotlinParser::SingleAnnotationContext *ctx) = 0;
  virtual void exitSingleAnnotation(KotlinParser::SingleAnnotationContext *ctx) = 0;

  virtual void enterMultiAnnotation(KotlinParser::MultiAnnotationContext *ctx) = 0;
  virtual void exitMultiAnnotation(KotlinParser::MultiAnnotationContext *ctx) = 0;

  virtual void enterAnnotationUseSiteTarget(KotlinParser::AnnotationUseSiteTargetContext *ctx) = 0;
  virtual void exitAnnotationUseSiteTarget(KotlinParser::AnnotationUseSiteTargetContext *ctx) = 0;

  virtual void enterUnescapedAnnotation(KotlinParser::UnescapedAnnotationContext *ctx) = 0;
  virtual void exitUnescapedAnnotation(KotlinParser::UnescapedAnnotationContext *ctx) = 0;

  virtual void enterSimpleIdentifier(KotlinParser::SimpleIdentifierContext *ctx) = 0;
  virtual void exitSimpleIdentifier(KotlinParser::SimpleIdentifierContext *ctx) = 0;

  virtual void enterIdentifier(KotlinParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(KotlinParser::IdentifierContext *ctx) = 0;


};

