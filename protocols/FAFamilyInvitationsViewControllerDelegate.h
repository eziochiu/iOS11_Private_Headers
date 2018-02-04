/* made by EzioChiu.
 */

@protocol FAFamilyInvitationsViewControllerDelegate <NSObject>

@required

- (void)familyInvitationsViewController:(FAFamilyInvitationsViewController *)arg1 didProcessInvite:(AAFamilyInvite *)arg2;
- (void)familyInvitationsViewControllerDidFinish:(FAFamilyInvitationsViewController *)arg1;

@end
