/* made by EzioChiu.
 */

@protocol AKFollowUpItemFactory <NSObject>

@required

- (NSArray *)itemIdentifiersRequiringNotificationClearFromPayload:(NSArray *)arg1;
- (NSArray *)itemsForAltDSID:(NSString *)arg1 fromIDMSPayload:(NSArray *)arg2;

@end
