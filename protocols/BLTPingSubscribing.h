/* made by EzioChiu.
 */

@protocol BLTPingSubscribing <NSObject>

@required

- (void)pingSubscriberDidLoad;
- (void)pingWithBulletin:(BBBulletin *)arg1;
- (void)pingWithBulletin:(void *)arg1 ack:(void *)arg2; // needs 2 arg types, found 6: BBBulletin *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)pingWithRecordID:(NSString *)arg1 forSectionID:(NSString *)arg2;
- (void)pingWithRecordID:(void *)arg1 forSectionID:(void *)arg2 ack:(void *)arg3; // needs 3 arg types, found 7: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSSet *)sectionIDs;
- (NSSet *)sectionIDsForBulletins;
- (NSArray *)subscriptionInfos;

@end
