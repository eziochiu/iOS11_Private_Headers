/* made by EzioChiu.
 */

@protocol NWAppRegistrationEventDelegate <NSObject>

@required

- (void)noteNewlyRegisteredBundles:(NSArray *)arg1;
- (void)noteNewlyUnregisteredBundles:(NSArray *)arg1;

@end