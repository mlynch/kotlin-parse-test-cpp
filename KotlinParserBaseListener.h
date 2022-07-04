
// Generated from KotlinParser.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "KotlinParserListener.h"


/**
 * This class provides an empty implementation of KotlinParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  KotlinParserBaseListener : public KotlinParserListener {
public:

  virtual void enterKotlinFile(KotlinParser::KotlinFileContext * /*ctx*/) override { }
  virtual void exitKotlinFile(KotlinParser::KotlinFileContext * /*ctx*/) override { }

  virtual void enterScript(KotlinParser::ScriptContext * /*ctx*/) override { }
  virtual void exitScript(KotlinParser::ScriptContext * /*ctx*/) override { }

  virtual void enterShebangLine(KotlinParser::ShebangLineContext * /*ctx*/) override { }
  virtual void exitShebangLine(KotlinParser::ShebangLineContext * /*ctx*/) override { }

  virtual void enterFileAnnotation(KotlinParser::FileAnnotationContext * /*ctx*/) override { }
  virtual void exitFileAnnotation(KotlinParser::FileAnnotationContext * /*ctx*/) override { }

  virtual void enterPackageHeader(KotlinParser::PackageHeaderContext * /*ctx*/) override { }
  virtual void exitPackageHeader(KotlinParser::PackageHeaderContext * /*ctx*/) override { }

  virtual void enterImportList(KotlinParser::ImportListContext * /*ctx*/) override { }
  virtual void exitImportList(KotlinParser::ImportListContext * /*ctx*/) override { }

  virtual void enterImportHeader(KotlinParser::ImportHeaderContext * /*ctx*/) override { }
  virtual void exitImportHeader(KotlinParser::ImportHeaderContext * /*ctx*/) override { }

  virtual void enterImportAlias(KotlinParser::ImportAliasContext * /*ctx*/) override { }
  virtual void exitImportAlias(KotlinParser::ImportAliasContext * /*ctx*/) override { }

  virtual void enterTopLevelObject(KotlinParser::TopLevelObjectContext * /*ctx*/) override { }
  virtual void exitTopLevelObject(KotlinParser::TopLevelObjectContext * /*ctx*/) override { }

  virtual void enterTypeAlias(KotlinParser::TypeAliasContext * /*ctx*/) override { }
  virtual void exitTypeAlias(KotlinParser::TypeAliasContext * /*ctx*/) override { }

  virtual void enterDeclaration(KotlinParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(KotlinParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(KotlinParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(KotlinParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterPrimaryConstructor(KotlinParser::PrimaryConstructorContext * /*ctx*/) override { }
  virtual void exitPrimaryConstructor(KotlinParser::PrimaryConstructorContext * /*ctx*/) override { }

  virtual void enterClassBody(KotlinParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(KotlinParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterClassParameters(KotlinParser::ClassParametersContext * /*ctx*/) override { }
  virtual void exitClassParameters(KotlinParser::ClassParametersContext * /*ctx*/) override { }

  virtual void enterClassParameter(KotlinParser::ClassParameterContext * /*ctx*/) override { }
  virtual void exitClassParameter(KotlinParser::ClassParameterContext * /*ctx*/) override { }

  virtual void enterDelegationSpecifiers(KotlinParser::DelegationSpecifiersContext * /*ctx*/) override { }
  virtual void exitDelegationSpecifiers(KotlinParser::DelegationSpecifiersContext * /*ctx*/) override { }

  virtual void enterDelegationSpecifier(KotlinParser::DelegationSpecifierContext * /*ctx*/) override { }
  virtual void exitDelegationSpecifier(KotlinParser::DelegationSpecifierContext * /*ctx*/) override { }

  virtual void enterConstructorInvocation(KotlinParser::ConstructorInvocationContext * /*ctx*/) override { }
  virtual void exitConstructorInvocation(KotlinParser::ConstructorInvocationContext * /*ctx*/) override { }

  virtual void enterAnnotatedDelegationSpecifier(KotlinParser::AnnotatedDelegationSpecifierContext * /*ctx*/) override { }
  virtual void exitAnnotatedDelegationSpecifier(KotlinParser::AnnotatedDelegationSpecifierContext * /*ctx*/) override { }

  virtual void enterExplicitDelegation(KotlinParser::ExplicitDelegationContext * /*ctx*/) override { }
  virtual void exitExplicitDelegation(KotlinParser::ExplicitDelegationContext * /*ctx*/) override { }

  virtual void enterTypeParameters(KotlinParser::TypeParametersContext * /*ctx*/) override { }
  virtual void exitTypeParameters(KotlinParser::TypeParametersContext * /*ctx*/) override { }

  virtual void enterTypeParameter(KotlinParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(KotlinParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterTypeConstraints(KotlinParser::TypeConstraintsContext * /*ctx*/) override { }
  virtual void exitTypeConstraints(KotlinParser::TypeConstraintsContext * /*ctx*/) override { }

  virtual void enterTypeConstraint(KotlinParser::TypeConstraintContext * /*ctx*/) override { }
  virtual void exitTypeConstraint(KotlinParser::TypeConstraintContext * /*ctx*/) override { }

  virtual void enterClassMemberDeclarations(KotlinParser::ClassMemberDeclarationsContext * /*ctx*/) override { }
  virtual void exitClassMemberDeclarations(KotlinParser::ClassMemberDeclarationsContext * /*ctx*/) override { }

  virtual void enterClassMemberDeclaration(KotlinParser::ClassMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitClassMemberDeclaration(KotlinParser::ClassMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterAnonymousInitializer(KotlinParser::AnonymousInitializerContext * /*ctx*/) override { }
  virtual void exitAnonymousInitializer(KotlinParser::AnonymousInitializerContext * /*ctx*/) override { }

  virtual void enterCompanionObject(KotlinParser::CompanionObjectContext * /*ctx*/) override { }
  virtual void exitCompanionObject(KotlinParser::CompanionObjectContext * /*ctx*/) override { }

  virtual void enterFunctionValueParameters(KotlinParser::FunctionValueParametersContext * /*ctx*/) override { }
  virtual void exitFunctionValueParameters(KotlinParser::FunctionValueParametersContext * /*ctx*/) override { }

  virtual void enterFunctionValueParameter(KotlinParser::FunctionValueParameterContext * /*ctx*/) override { }
  virtual void exitFunctionValueParameter(KotlinParser::FunctionValueParameterContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(KotlinParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(KotlinParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionBody(KotlinParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(KotlinParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(KotlinParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(KotlinParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterMultiVariableDeclaration(KotlinParser::MultiVariableDeclarationContext * /*ctx*/) override { }
  virtual void exitMultiVariableDeclaration(KotlinParser::MultiVariableDeclarationContext * /*ctx*/) override { }

  virtual void enterPropertyDeclaration(KotlinParser::PropertyDeclarationContext * /*ctx*/) override { }
  virtual void exitPropertyDeclaration(KotlinParser::PropertyDeclarationContext * /*ctx*/) override { }

  virtual void enterPropertyDelegate(KotlinParser::PropertyDelegateContext * /*ctx*/) override { }
  virtual void exitPropertyDelegate(KotlinParser::PropertyDelegateContext * /*ctx*/) override { }

  virtual void enterGetter(KotlinParser::GetterContext * /*ctx*/) override { }
  virtual void exitGetter(KotlinParser::GetterContext * /*ctx*/) override { }

  virtual void enterSetter(KotlinParser::SetterContext * /*ctx*/) override { }
  virtual void exitSetter(KotlinParser::SetterContext * /*ctx*/) override { }

  virtual void enterParametersWithOptionalType(KotlinParser::ParametersWithOptionalTypeContext * /*ctx*/) override { }
  virtual void exitParametersWithOptionalType(KotlinParser::ParametersWithOptionalTypeContext * /*ctx*/) override { }

  virtual void enterFunctionValueParameterWithOptionalType(KotlinParser::FunctionValueParameterWithOptionalTypeContext * /*ctx*/) override { }
  virtual void exitFunctionValueParameterWithOptionalType(KotlinParser::FunctionValueParameterWithOptionalTypeContext * /*ctx*/) override { }

  virtual void enterParameterWithOptionalType(KotlinParser::ParameterWithOptionalTypeContext * /*ctx*/) override { }
  virtual void exitParameterWithOptionalType(KotlinParser::ParameterWithOptionalTypeContext * /*ctx*/) override { }

  virtual void enterParameter(KotlinParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(KotlinParser::ParameterContext * /*ctx*/) override { }

  virtual void enterObjectDeclaration(KotlinParser::ObjectDeclarationContext * /*ctx*/) override { }
  virtual void exitObjectDeclaration(KotlinParser::ObjectDeclarationContext * /*ctx*/) override { }

  virtual void enterSecondaryConstructor(KotlinParser::SecondaryConstructorContext * /*ctx*/) override { }
  virtual void exitSecondaryConstructor(KotlinParser::SecondaryConstructorContext * /*ctx*/) override { }

  virtual void enterConstructorDelegationCall(KotlinParser::ConstructorDelegationCallContext * /*ctx*/) override { }
  virtual void exitConstructorDelegationCall(KotlinParser::ConstructorDelegationCallContext * /*ctx*/) override { }

  virtual void enterEnumClassBody(KotlinParser::EnumClassBodyContext * /*ctx*/) override { }
  virtual void exitEnumClassBody(KotlinParser::EnumClassBodyContext * /*ctx*/) override { }

  virtual void enterEnumEntries(KotlinParser::EnumEntriesContext * /*ctx*/) override { }
  virtual void exitEnumEntries(KotlinParser::EnumEntriesContext * /*ctx*/) override { }

  virtual void enterEnumEntry(KotlinParser::EnumEntryContext * /*ctx*/) override { }
  virtual void exitEnumEntry(KotlinParser::EnumEntryContext * /*ctx*/) override { }

  virtual void enterType(KotlinParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(KotlinParser::TypeContext * /*ctx*/) override { }

  virtual void enterTypeReference(KotlinParser::TypeReferenceContext * /*ctx*/) override { }
  virtual void exitTypeReference(KotlinParser::TypeReferenceContext * /*ctx*/) override { }

  virtual void enterNullableType(KotlinParser::NullableTypeContext * /*ctx*/) override { }
  virtual void exitNullableType(KotlinParser::NullableTypeContext * /*ctx*/) override { }

  virtual void enterQuest(KotlinParser::QuestContext * /*ctx*/) override { }
  virtual void exitQuest(KotlinParser::QuestContext * /*ctx*/) override { }

  virtual void enterUserType(KotlinParser::UserTypeContext * /*ctx*/) override { }
  virtual void exitUserType(KotlinParser::UserTypeContext * /*ctx*/) override { }

  virtual void enterSimpleUserType(KotlinParser::SimpleUserTypeContext * /*ctx*/) override { }
  virtual void exitSimpleUserType(KotlinParser::SimpleUserTypeContext * /*ctx*/) override { }

  virtual void enterTypeProjection(KotlinParser::TypeProjectionContext * /*ctx*/) override { }
  virtual void exitTypeProjection(KotlinParser::TypeProjectionContext * /*ctx*/) override { }

  virtual void enterTypeProjectionModifiers(KotlinParser::TypeProjectionModifiersContext * /*ctx*/) override { }
  virtual void exitTypeProjectionModifiers(KotlinParser::TypeProjectionModifiersContext * /*ctx*/) override { }

  virtual void enterTypeProjectionModifier(KotlinParser::TypeProjectionModifierContext * /*ctx*/) override { }
  virtual void exitTypeProjectionModifier(KotlinParser::TypeProjectionModifierContext * /*ctx*/) override { }

  virtual void enterFunctionType(KotlinParser::FunctionTypeContext * /*ctx*/) override { }
  virtual void exitFunctionType(KotlinParser::FunctionTypeContext * /*ctx*/) override { }

  virtual void enterFunctionTypeParameters(KotlinParser::FunctionTypeParametersContext * /*ctx*/) override { }
  virtual void exitFunctionTypeParameters(KotlinParser::FunctionTypeParametersContext * /*ctx*/) override { }

  virtual void enterParenthesizedType(KotlinParser::ParenthesizedTypeContext * /*ctx*/) override { }
  virtual void exitParenthesizedType(KotlinParser::ParenthesizedTypeContext * /*ctx*/) override { }

  virtual void enterReceiverType(KotlinParser::ReceiverTypeContext * /*ctx*/) override { }
  virtual void exitReceiverType(KotlinParser::ReceiverTypeContext * /*ctx*/) override { }

  virtual void enterParenthesizedUserType(KotlinParser::ParenthesizedUserTypeContext * /*ctx*/) override { }
  virtual void exitParenthesizedUserType(KotlinParser::ParenthesizedUserTypeContext * /*ctx*/) override { }

  virtual void enterStatements(KotlinParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(KotlinParser::StatementsContext * /*ctx*/) override { }

  virtual void enterStatement(KotlinParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(KotlinParser::StatementContext * /*ctx*/) override { }

  virtual void enterLabel(KotlinParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(KotlinParser::LabelContext * /*ctx*/) override { }

  virtual void enterControlStructureBody(KotlinParser::ControlStructureBodyContext * /*ctx*/) override { }
  virtual void exitControlStructureBody(KotlinParser::ControlStructureBodyContext * /*ctx*/) override { }

  virtual void enterBlock(KotlinParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(KotlinParser::BlockContext * /*ctx*/) override { }

  virtual void enterLoopStatement(KotlinParser::LoopStatementContext * /*ctx*/) override { }
  virtual void exitLoopStatement(KotlinParser::LoopStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(KotlinParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(KotlinParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(KotlinParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(KotlinParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterDoWhileStatement(KotlinParser::DoWhileStatementContext * /*ctx*/) override { }
  virtual void exitDoWhileStatement(KotlinParser::DoWhileStatementContext * /*ctx*/) override { }

  virtual void enterAssignment(KotlinParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(KotlinParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterSemi(KotlinParser::SemiContext * /*ctx*/) override { }
  virtual void exitSemi(KotlinParser::SemiContext * /*ctx*/) override { }

  virtual void enterSemis(KotlinParser::SemisContext * /*ctx*/) override { }
  virtual void exitSemis(KotlinParser::SemisContext * /*ctx*/) override { }

  virtual void enterExpression(KotlinParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(KotlinParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterDisjunction(KotlinParser::DisjunctionContext * /*ctx*/) override { }
  virtual void exitDisjunction(KotlinParser::DisjunctionContext * /*ctx*/) override { }

  virtual void enterConjunction(KotlinParser::ConjunctionContext * /*ctx*/) override { }
  virtual void exitConjunction(KotlinParser::ConjunctionContext * /*ctx*/) override { }

  virtual void enterEquality(KotlinParser::EqualityContext * /*ctx*/) override { }
  virtual void exitEquality(KotlinParser::EqualityContext * /*ctx*/) override { }

  virtual void enterComparison(KotlinParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(KotlinParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterGenericCallLikeComparison(KotlinParser::GenericCallLikeComparisonContext * /*ctx*/) override { }
  virtual void exitGenericCallLikeComparison(KotlinParser::GenericCallLikeComparisonContext * /*ctx*/) override { }

  virtual void enterInfixOperation(KotlinParser::InfixOperationContext * /*ctx*/) override { }
  virtual void exitInfixOperation(KotlinParser::InfixOperationContext * /*ctx*/) override { }

  virtual void enterElvisExpression(KotlinParser::ElvisExpressionContext * /*ctx*/) override { }
  virtual void exitElvisExpression(KotlinParser::ElvisExpressionContext * /*ctx*/) override { }

  virtual void enterElvis(KotlinParser::ElvisContext * /*ctx*/) override { }
  virtual void exitElvis(KotlinParser::ElvisContext * /*ctx*/) override { }

  virtual void enterInfixFunctionCall(KotlinParser::InfixFunctionCallContext * /*ctx*/) override { }
  virtual void exitInfixFunctionCall(KotlinParser::InfixFunctionCallContext * /*ctx*/) override { }

  virtual void enterRangeExpression(KotlinParser::RangeExpressionContext * /*ctx*/) override { }
  virtual void exitRangeExpression(KotlinParser::RangeExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(KotlinParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(KotlinParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(KotlinParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(KotlinParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterAsExpression(KotlinParser::AsExpressionContext * /*ctx*/) override { }
  virtual void exitAsExpression(KotlinParser::AsExpressionContext * /*ctx*/) override { }

  virtual void enterPrefixUnaryExpression(KotlinParser::PrefixUnaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrefixUnaryExpression(KotlinParser::PrefixUnaryExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryPrefix(KotlinParser::UnaryPrefixContext * /*ctx*/) override { }
  virtual void exitUnaryPrefix(KotlinParser::UnaryPrefixContext * /*ctx*/) override { }

  virtual void enterPostfixUnaryExpression(KotlinParser::PostfixUnaryExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixUnaryExpression(KotlinParser::PostfixUnaryExpressionContext * /*ctx*/) override { }

  virtual void enterPostfixUnarySuffix(KotlinParser::PostfixUnarySuffixContext * /*ctx*/) override { }
  virtual void exitPostfixUnarySuffix(KotlinParser::PostfixUnarySuffixContext * /*ctx*/) override { }

  virtual void enterDirectlyAssignableExpression(KotlinParser::DirectlyAssignableExpressionContext * /*ctx*/) override { }
  virtual void exitDirectlyAssignableExpression(KotlinParser::DirectlyAssignableExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesizedDirectlyAssignableExpression(KotlinParser::ParenthesizedDirectlyAssignableExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedDirectlyAssignableExpression(KotlinParser::ParenthesizedDirectlyAssignableExpressionContext * /*ctx*/) override { }

  virtual void enterAssignableExpression(KotlinParser::AssignableExpressionContext * /*ctx*/) override { }
  virtual void exitAssignableExpression(KotlinParser::AssignableExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesizedAssignableExpression(KotlinParser::ParenthesizedAssignableExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedAssignableExpression(KotlinParser::ParenthesizedAssignableExpressionContext * /*ctx*/) override { }

  virtual void enterAssignableSuffix(KotlinParser::AssignableSuffixContext * /*ctx*/) override { }
  virtual void exitAssignableSuffix(KotlinParser::AssignableSuffixContext * /*ctx*/) override { }

  virtual void enterIndexingSuffix(KotlinParser::IndexingSuffixContext * /*ctx*/) override { }
  virtual void exitIndexingSuffix(KotlinParser::IndexingSuffixContext * /*ctx*/) override { }

  virtual void enterNavigationSuffix(KotlinParser::NavigationSuffixContext * /*ctx*/) override { }
  virtual void exitNavigationSuffix(KotlinParser::NavigationSuffixContext * /*ctx*/) override { }

  virtual void enterCallSuffix(KotlinParser::CallSuffixContext * /*ctx*/) override { }
  virtual void exitCallSuffix(KotlinParser::CallSuffixContext * /*ctx*/) override { }

  virtual void enterAnnotatedLambda(KotlinParser::AnnotatedLambdaContext * /*ctx*/) override { }
  virtual void exitAnnotatedLambda(KotlinParser::AnnotatedLambdaContext * /*ctx*/) override { }

  virtual void enterTypeArguments(KotlinParser::TypeArgumentsContext * /*ctx*/) override { }
  virtual void exitTypeArguments(KotlinParser::TypeArgumentsContext * /*ctx*/) override { }

  virtual void enterValueArguments(KotlinParser::ValueArgumentsContext * /*ctx*/) override { }
  virtual void exitValueArguments(KotlinParser::ValueArgumentsContext * /*ctx*/) override { }

  virtual void enterValueArgument(KotlinParser::ValueArgumentContext * /*ctx*/) override { }
  virtual void exitValueArgument(KotlinParser::ValueArgumentContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(KotlinParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(KotlinParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesizedExpression(KotlinParser::ParenthesizedExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedExpression(KotlinParser::ParenthesizedExpressionContext * /*ctx*/) override { }

  virtual void enterCollectionLiteral(KotlinParser::CollectionLiteralContext * /*ctx*/) override { }
  virtual void exitCollectionLiteral(KotlinParser::CollectionLiteralContext * /*ctx*/) override { }

  virtual void enterLiteralConstant(KotlinParser::LiteralConstantContext * /*ctx*/) override { }
  virtual void exitLiteralConstant(KotlinParser::LiteralConstantContext * /*ctx*/) override { }

  virtual void enterStringLiteral(KotlinParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(KotlinParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterLineStringLiteral(KotlinParser::LineStringLiteralContext * /*ctx*/) override { }
  virtual void exitLineStringLiteral(KotlinParser::LineStringLiteralContext * /*ctx*/) override { }

  virtual void enterMultiLineStringLiteral(KotlinParser::MultiLineStringLiteralContext * /*ctx*/) override { }
  virtual void exitMultiLineStringLiteral(KotlinParser::MultiLineStringLiteralContext * /*ctx*/) override { }

  virtual void enterLineStringContent(KotlinParser::LineStringContentContext * /*ctx*/) override { }
  virtual void exitLineStringContent(KotlinParser::LineStringContentContext * /*ctx*/) override { }

  virtual void enterLineStringExpression(KotlinParser::LineStringExpressionContext * /*ctx*/) override { }
  virtual void exitLineStringExpression(KotlinParser::LineStringExpressionContext * /*ctx*/) override { }

  virtual void enterMultiLineStringContent(KotlinParser::MultiLineStringContentContext * /*ctx*/) override { }
  virtual void exitMultiLineStringContent(KotlinParser::MultiLineStringContentContext * /*ctx*/) override { }

  virtual void enterMultiLineStringExpression(KotlinParser::MultiLineStringExpressionContext * /*ctx*/) override { }
  virtual void exitMultiLineStringExpression(KotlinParser::MultiLineStringExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaLiteral(KotlinParser::LambdaLiteralContext * /*ctx*/) override { }
  virtual void exitLambdaLiteral(KotlinParser::LambdaLiteralContext * /*ctx*/) override { }

  virtual void enterLambdaParameters(KotlinParser::LambdaParametersContext * /*ctx*/) override { }
  virtual void exitLambdaParameters(KotlinParser::LambdaParametersContext * /*ctx*/) override { }

  virtual void enterLambdaParameter(KotlinParser::LambdaParameterContext * /*ctx*/) override { }
  virtual void exitLambdaParameter(KotlinParser::LambdaParameterContext * /*ctx*/) override { }

  virtual void enterAnonymousFunction(KotlinParser::AnonymousFunctionContext * /*ctx*/) override { }
  virtual void exitAnonymousFunction(KotlinParser::AnonymousFunctionContext * /*ctx*/) override { }

  virtual void enterFunctionLiteral(KotlinParser::FunctionLiteralContext * /*ctx*/) override { }
  virtual void exitFunctionLiteral(KotlinParser::FunctionLiteralContext * /*ctx*/) override { }

  virtual void enterObjectLiteral(KotlinParser::ObjectLiteralContext * /*ctx*/) override { }
  virtual void exitObjectLiteral(KotlinParser::ObjectLiteralContext * /*ctx*/) override { }

  virtual void enterThisExpression(KotlinParser::ThisExpressionContext * /*ctx*/) override { }
  virtual void exitThisExpression(KotlinParser::ThisExpressionContext * /*ctx*/) override { }

  virtual void enterSuperExpression(KotlinParser::SuperExpressionContext * /*ctx*/) override { }
  virtual void exitSuperExpression(KotlinParser::SuperExpressionContext * /*ctx*/) override { }

  virtual void enterIfExpression(KotlinParser::IfExpressionContext * /*ctx*/) override { }
  virtual void exitIfExpression(KotlinParser::IfExpressionContext * /*ctx*/) override { }

  virtual void enterWhenSubject(KotlinParser::WhenSubjectContext * /*ctx*/) override { }
  virtual void exitWhenSubject(KotlinParser::WhenSubjectContext * /*ctx*/) override { }

  virtual void enterWhenExpression(KotlinParser::WhenExpressionContext * /*ctx*/) override { }
  virtual void exitWhenExpression(KotlinParser::WhenExpressionContext * /*ctx*/) override { }

  virtual void enterWhenEntry(KotlinParser::WhenEntryContext * /*ctx*/) override { }
  virtual void exitWhenEntry(KotlinParser::WhenEntryContext * /*ctx*/) override { }

  virtual void enterWhenCondition(KotlinParser::WhenConditionContext * /*ctx*/) override { }
  virtual void exitWhenCondition(KotlinParser::WhenConditionContext * /*ctx*/) override { }

  virtual void enterRangeTest(KotlinParser::RangeTestContext * /*ctx*/) override { }
  virtual void exitRangeTest(KotlinParser::RangeTestContext * /*ctx*/) override { }

  virtual void enterTypeTest(KotlinParser::TypeTestContext * /*ctx*/) override { }
  virtual void exitTypeTest(KotlinParser::TypeTestContext * /*ctx*/) override { }

  virtual void enterTryExpression(KotlinParser::TryExpressionContext * /*ctx*/) override { }
  virtual void exitTryExpression(KotlinParser::TryExpressionContext * /*ctx*/) override { }

  virtual void enterCatchBlock(KotlinParser::CatchBlockContext * /*ctx*/) override { }
  virtual void exitCatchBlock(KotlinParser::CatchBlockContext * /*ctx*/) override { }

  virtual void enterFinallyBlock(KotlinParser::FinallyBlockContext * /*ctx*/) override { }
  virtual void exitFinallyBlock(KotlinParser::FinallyBlockContext * /*ctx*/) override { }

  virtual void enterJumpExpression(KotlinParser::JumpExpressionContext * /*ctx*/) override { }
  virtual void exitJumpExpression(KotlinParser::JumpExpressionContext * /*ctx*/) override { }

  virtual void enterCallableReference(KotlinParser::CallableReferenceContext * /*ctx*/) override { }
  virtual void exitCallableReference(KotlinParser::CallableReferenceContext * /*ctx*/) override { }

  virtual void enterAssignmentAndOperator(KotlinParser::AssignmentAndOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentAndOperator(KotlinParser::AssignmentAndOperatorContext * /*ctx*/) override { }

  virtual void enterEqualityOperator(KotlinParser::EqualityOperatorContext * /*ctx*/) override { }
  virtual void exitEqualityOperator(KotlinParser::EqualityOperatorContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(KotlinParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(KotlinParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterInOperator(KotlinParser::InOperatorContext * /*ctx*/) override { }
  virtual void exitInOperator(KotlinParser::InOperatorContext * /*ctx*/) override { }

  virtual void enterIsOperator(KotlinParser::IsOperatorContext * /*ctx*/) override { }
  virtual void exitIsOperator(KotlinParser::IsOperatorContext * /*ctx*/) override { }

  virtual void enterAdditiveOperator(KotlinParser::AdditiveOperatorContext * /*ctx*/) override { }
  virtual void exitAdditiveOperator(KotlinParser::AdditiveOperatorContext * /*ctx*/) override { }

  virtual void enterMultiplicativeOperator(KotlinParser::MultiplicativeOperatorContext * /*ctx*/) override { }
  virtual void exitMultiplicativeOperator(KotlinParser::MultiplicativeOperatorContext * /*ctx*/) override { }

  virtual void enterAsOperator(KotlinParser::AsOperatorContext * /*ctx*/) override { }
  virtual void exitAsOperator(KotlinParser::AsOperatorContext * /*ctx*/) override { }

  virtual void enterPrefixUnaryOperator(KotlinParser::PrefixUnaryOperatorContext * /*ctx*/) override { }
  virtual void exitPrefixUnaryOperator(KotlinParser::PrefixUnaryOperatorContext * /*ctx*/) override { }

  virtual void enterPostfixUnaryOperator(KotlinParser::PostfixUnaryOperatorContext * /*ctx*/) override { }
  virtual void exitPostfixUnaryOperator(KotlinParser::PostfixUnaryOperatorContext * /*ctx*/) override { }

  virtual void enterExcl(KotlinParser::ExclContext * /*ctx*/) override { }
  virtual void exitExcl(KotlinParser::ExclContext * /*ctx*/) override { }

  virtual void enterMemberAccessOperator(KotlinParser::MemberAccessOperatorContext * /*ctx*/) override { }
  virtual void exitMemberAccessOperator(KotlinParser::MemberAccessOperatorContext * /*ctx*/) override { }

  virtual void enterSafeNav(KotlinParser::SafeNavContext * /*ctx*/) override { }
  virtual void exitSafeNav(KotlinParser::SafeNavContext * /*ctx*/) override { }

  virtual void enterModifiers(KotlinParser::ModifiersContext * /*ctx*/) override { }
  virtual void exitModifiers(KotlinParser::ModifiersContext * /*ctx*/) override { }

  virtual void enterParameterModifiers(KotlinParser::ParameterModifiersContext * /*ctx*/) override { }
  virtual void exitParameterModifiers(KotlinParser::ParameterModifiersContext * /*ctx*/) override { }

  virtual void enterModifier(KotlinParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(KotlinParser::ModifierContext * /*ctx*/) override { }

  virtual void enterTypeModifiers(KotlinParser::TypeModifiersContext * /*ctx*/) override { }
  virtual void exitTypeModifiers(KotlinParser::TypeModifiersContext * /*ctx*/) override { }

  virtual void enterTypeModifier(KotlinParser::TypeModifierContext * /*ctx*/) override { }
  virtual void exitTypeModifier(KotlinParser::TypeModifierContext * /*ctx*/) override { }

  virtual void enterClassModifier(KotlinParser::ClassModifierContext * /*ctx*/) override { }
  virtual void exitClassModifier(KotlinParser::ClassModifierContext * /*ctx*/) override { }

  virtual void enterMemberModifier(KotlinParser::MemberModifierContext * /*ctx*/) override { }
  virtual void exitMemberModifier(KotlinParser::MemberModifierContext * /*ctx*/) override { }

  virtual void enterVisibilityModifier(KotlinParser::VisibilityModifierContext * /*ctx*/) override { }
  virtual void exitVisibilityModifier(KotlinParser::VisibilityModifierContext * /*ctx*/) override { }

  virtual void enterVarianceModifier(KotlinParser::VarianceModifierContext * /*ctx*/) override { }
  virtual void exitVarianceModifier(KotlinParser::VarianceModifierContext * /*ctx*/) override { }

  virtual void enterTypeParameterModifiers(KotlinParser::TypeParameterModifiersContext * /*ctx*/) override { }
  virtual void exitTypeParameterModifiers(KotlinParser::TypeParameterModifiersContext * /*ctx*/) override { }

  virtual void enterTypeParameterModifier(KotlinParser::TypeParameterModifierContext * /*ctx*/) override { }
  virtual void exitTypeParameterModifier(KotlinParser::TypeParameterModifierContext * /*ctx*/) override { }

  virtual void enterFunctionModifier(KotlinParser::FunctionModifierContext * /*ctx*/) override { }
  virtual void exitFunctionModifier(KotlinParser::FunctionModifierContext * /*ctx*/) override { }

  virtual void enterPropertyModifier(KotlinParser::PropertyModifierContext * /*ctx*/) override { }
  virtual void exitPropertyModifier(KotlinParser::PropertyModifierContext * /*ctx*/) override { }

  virtual void enterInheritanceModifier(KotlinParser::InheritanceModifierContext * /*ctx*/) override { }
  virtual void exitInheritanceModifier(KotlinParser::InheritanceModifierContext * /*ctx*/) override { }

  virtual void enterParameterModifier(KotlinParser::ParameterModifierContext * /*ctx*/) override { }
  virtual void exitParameterModifier(KotlinParser::ParameterModifierContext * /*ctx*/) override { }

  virtual void enterReificationModifier(KotlinParser::ReificationModifierContext * /*ctx*/) override { }
  virtual void exitReificationModifier(KotlinParser::ReificationModifierContext * /*ctx*/) override { }

  virtual void enterPlatformModifier(KotlinParser::PlatformModifierContext * /*ctx*/) override { }
  virtual void exitPlatformModifier(KotlinParser::PlatformModifierContext * /*ctx*/) override { }

  virtual void enterAnnotation(KotlinParser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(KotlinParser::AnnotationContext * /*ctx*/) override { }

  virtual void enterSingleAnnotation(KotlinParser::SingleAnnotationContext * /*ctx*/) override { }
  virtual void exitSingleAnnotation(KotlinParser::SingleAnnotationContext * /*ctx*/) override { }

  virtual void enterMultiAnnotation(KotlinParser::MultiAnnotationContext * /*ctx*/) override { }
  virtual void exitMultiAnnotation(KotlinParser::MultiAnnotationContext * /*ctx*/) override { }

  virtual void enterAnnotationUseSiteTarget(KotlinParser::AnnotationUseSiteTargetContext * /*ctx*/) override { }
  virtual void exitAnnotationUseSiteTarget(KotlinParser::AnnotationUseSiteTargetContext * /*ctx*/) override { }

  virtual void enterUnescapedAnnotation(KotlinParser::UnescapedAnnotationContext * /*ctx*/) override { }
  virtual void exitUnescapedAnnotation(KotlinParser::UnescapedAnnotationContext * /*ctx*/) override { }

  virtual void enterSimpleIdentifier(KotlinParser::SimpleIdentifierContext * /*ctx*/) override { }
  virtual void exitSimpleIdentifier(KotlinParser::SimpleIdentifierContext * /*ctx*/) override { }

  virtual void enterIdentifier(KotlinParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(KotlinParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

