/* made by EzioChiu.
 */

@protocol FCFeedGroupOutlining <NSObject>

@required

- (NSString *)backingTagID;
- (NSDate *)creationDate;
- (FCFeedEdition *)edition;
- (long long)groupType;
- (NSArray *)headlines;
- (NSString *)identifier;
- (unsigned long long)mergeID;
- (NSString *)name;
- (unsigned long long)options;
- (NSString *)sourceIdentifier;

@end
