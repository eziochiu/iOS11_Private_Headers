/* made by EzioChiu.
 */

@protocol HUAddUserViewControllerDelegate <NSObject>

@required

- (void)controllerDidDismissWithError:(NSError *)arg1;
- (void)controllerDidSendInvitations:(NSArray *)arg1;

@end
