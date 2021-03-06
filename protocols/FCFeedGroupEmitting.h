/* made by EzioChiu.
 */

@protocol FCFeedGroupEmitting <NSObject>

@required

- (bool)canEmitGroupsWithType:(long long)arg1;
- (NSString *)groupEmitterIdentifier;
- (FCFeedGroupEmittingOperation *)operationToEmitGroupWithContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(id <NSCoding>)arg2 toCursor:(id <NSCoding>)arg3;
- (bool)wantsToEmitGroupInContext:(FCFeedGroupEmittingContext *)arg1 withCursor:(id <NSCoding>)arg2 toCursor:(id <NSCoding>)arg3;
- (bool)wantsToInsertGroup:(id <FCFeedGroupOutlining>)arg1 withContext:(FCFeedGroupEmittingContext *)arg2;

@optional

- (NSString *)backingChannelTagIDWithAppConfig:(id <FCAppConfiguration>)arg1;
- (bool)canMergeGroupsUnconditionally;
- (bool)canMergeHeadlinesFromGroup:(id <FCFeedGroupOutlining>)arg1 intoGroup:(id <FCFeedGroupOutlining>)arg2;
- (bool)emitsSingletonGroups;
- (bool)isRequiredByFollowingEmitters;
- (bool)requiresForYouCatchUpOperation;
- (bool)supportsPagination;

@end
