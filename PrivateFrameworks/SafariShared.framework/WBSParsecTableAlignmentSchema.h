/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecTableAlignmentSchema : WBSParsecModel {
    NSArray * _columnGravities;
    NSArray * _columnsWithEqualWidths;
    NSArray * _internalAlignments;
}

@property (nonatomic, readonly, copy) NSArray *columnGravities;
@property (nonatomic, readonly, copy) NSArray *columnsWithEqualWidths;
@property (nonatomic, readonly, copy) NSArray *internalAlignments;

+ (id)schema;

- (void).cxx_destruct;
- (id)columnGravities;
- (id)columnsWithEqualWidths;
- (id)initWithDictionary:(id)arg1;
- (id)internalAlignments;

@end
