/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableFilterSet : TSPObject <TSPCopying> {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    }  mFilterOffsets;
    bool  mIsEnabled;
    bool  mNeedsFormulaRewriteForImport;
    NSArray * mRules;
    int  mType;
}

@property (nonatomic, readonly) bool canAddRules;
@property (nonatomic, readonly) unsigned long long filterCount;
@property (nonatomic) int filterSetType;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) unsigned long long newFilterIndex;
@property (nonatomic, readonly) unsigned long long ruleCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)absoluteRuleIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2;
- (void)addRules:(id)arg1 inFilter:(unsigned long long)arg2;
- (bool)canAddRules;
- (id)columnIndicesForRulesInTable:(id)arg1;
- (bool)containsFilterRulesInUIDForm;
- (id)copyByRewritingFilterRulesToGeometricFormWithContext:(id)arg1 withTableInfo:(id)arg2;
- (id)copyByRewritingFilterRulesToUidFormWithContext:(id)arg1 withTableInfo:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)enumerateFilterIndicesInTable:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateFiltersForColumn:(unsigned char)arg1 withTable:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateFiltersInTable:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateRulesInFilterIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)filterAtIndex:(unsigned long long)arg1 inTable:(id)arg2;
- (unsigned long long)filterCount;
- (id)filterIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2;
- (int)filterSetType;
- (unsigned long long)firstFilterIndexForColumn:(unsigned char)arg1 inTable:(id)arg2;
- (id)initWithFilterRules:(id)arg1 type:(int)arg2 context:(id)arg3;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)loadFromArchive:(const struct FilterSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; struct RepeatedPtrField<TST::FilterRuleArchive> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedField<unsigned int> { unsigned int *x_9_1_1; int x_9_1_2; int x_9_1_3; } x9; struct RepeatedField<bool> { bool *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (bool)needsFormulaRewriteForImport;
- (unsigned long long)newFilterIndex;
- (unsigned long long)numberOfRulesInFilter:(unsigned long long)arg1;
- (void)p_addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned long long)arg3 isNew:(bool)arg4;
- (bool)p_thresholdComparisonMatchesFilter:(long long)arg1 withPredicateType:(int)arg2;
- (void)removeRulesForColumnIndices:(id)arg1 withTableInfo:(id)arg2;
- (id)removeRulesWithAbsoluteIndices:(id)arg1;
- (void)removeRulesWithIndices:(id)arg1 inFilter:(unsigned long long)arg2;
- (void)replaceRule:(id)arg1 atRuleIndex:(unsigned long long)arg2 inFilter:(unsigned long long)arg3;
- (bool)rowIsShown:(unsigned short)arg1 withHiddenStateFormulaOwner:(id)arg2 withCalculationEngine:(id)arg3;
- (id)ruleAtAbsoluteIndex:(unsigned long long)arg1;
- (unsigned long long)ruleCount;
- (id)ruleInFilter:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)ruleIndexInFilter:(unsigned long long)arg1 matchingCell:(id)arg2;
- (void)saveToArchive:(struct FilterSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; struct RepeatedPtrField<TST::FilterRuleArchive> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedField<unsigned int> { unsigned int *x_9_1_1; int x_9_1_2; int x_9_1_3; } x9; struct RepeatedField<bool> { bool *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setFilterSetType:(int)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setNeedsFormulaRewriteForImport:(bool)arg1;

@end