/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSComparisonPredicate : NSPredicate {
    NSExpression * _lhs;
    NSPredicateOperator * _predicateOperator;
    void * _reserved2;
    NSExpression * _rhs;
}

@property (readonly) unsigned long long comparisonPredicateModifier;
@property (readonly) SEL customSelector;
@property (readonly, retain) NSExpression *leftExpression;
@property (readonly) unsigned long long options;
@property (readonly) unsigned long long predicateOperatorType;
@property (readonly, retain) NSExpression *rightExpression;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
+ (id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
+ (bool)supportsSecureCoding;

- (void)_acceptExpressions:(id)arg1 flags:(unsigned long long)arg2;
- (void)_acceptOperator:(id)arg1 flags:(unsigned long long)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (unsigned long long)comparisonPredicateModifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (SEL)customSelector;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
- (id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyPathExpressionForString:(id)arg1;
- (id)leftExpression;
- (unsigned long long)options;
- (id)predicateFormat;
- (id)predicateOperator;
- (unsigned long long)predicateOperatorType;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)rightExpression;
- (void)setPredicateOperator:(id)arg1;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (bool)_isForeignObjectExpression:(id)arg1 givenContext:(id)arg2;
- (id)minimalFormInContext:(id)arg1;

@end
