/* made by EzioChiu.
 */

@protocol FAMessagesInviteControllerDelegate <NSObject>

@optional

- (void)messageInviteController:(FAMessagesInviteConfigurationController *)arg1 didFinishWithSuccess:(bool)arg2 error:(NSError *)arg3;

@end