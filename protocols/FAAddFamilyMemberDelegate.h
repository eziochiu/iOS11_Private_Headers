/* made by EzioChiu.
 */

@protocol FAAddFamilyMemberDelegate <UINavigationControllerDelegate>

@required

- (void)addFamilyFamilyMemberViewController:(FAAddFamilyMemberViewController *)arg1 didCompleteWithSuccess:(bool)arg2;
- (void)addFamilyFamilyMemberViewControllerWantsChildAccountFlow:(FAAddFamilyMemberViewController *)arg1;

@end
