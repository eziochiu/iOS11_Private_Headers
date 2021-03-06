/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject {
    bool  _foundKeypath;
    NSSQLIntermediate * _scope;
}

- (bool)checkPredicate:(id)arg1;
- (void)dealloc;
- (id)initWithScope:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;

@end
