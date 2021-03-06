/* made by EzioChiu.
 */

@protocol PLBBPendingBulletinsBatchDelegate <NSObject>

@required

- (PLBBBulletin *)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg1 bulletinByMergingPersistedListWithBulletin:(PLBBBulletin *)arg2;
- (void)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg1 didProcessReadyBulletins:(NSArray *)arg2 stillPending:(bool)arg3;
- (bool)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg1 shouldAllowAlertsFromContactWithEmail:(NSString *)arg2;

@end
