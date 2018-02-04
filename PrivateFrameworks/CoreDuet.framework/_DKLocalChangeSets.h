/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKLocalChangeSets : NSObject {
    _DKChangeSet * _additionChangeSet;
    _DKChangeSet * _deletionChangeSet;
    NSDate * _queryStartDate;
}

@property (nonatomic, retain) _DKChangeSet *additionChangeSet;
@property (nonatomic, retain) _DKChangeSet *deletionChangeSet;
@property (nonatomic, retain) NSDate *queryStartDate;

- (void).cxx_destruct;
- (id)additionChangeSet;
- (id)deletionChangeSet;
- (id)initWithAdditionChangeSet:(id)arg1 deletionChangeSet:(id)arg2 queryStartDate:(id)arg3;
- (id)queryStartDate;
- (void)setAdditionChangeSet:(id)arg1;
- (void)setDeletionChangeSet:(id)arg1;
- (void)setQueryStartDate:(id)arg1;

@end