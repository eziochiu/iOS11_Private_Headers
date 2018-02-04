/* made by EzioChiu.
 */

@protocol HOOnboardingChildViewController <NSObject>

@required

- (<HOOnboardingChildViewControllerDelegate> *)delegate;
- (id)initWithDelegate:(id <HOOnboardingChildViewControllerDelegate>)arg1;
- (<HOOnboardingChildViewControllerNavigationBarDelegate> *)navigationBarDelegate;
- (void)nextButtonPressed;
- (void)setDelegate:(id <HOOnboardingChildViewControllerDelegate>)arg1;
- (void)setNavigationBarDelegate:(id <HOOnboardingChildViewControllerNavigationBarDelegate>)arg1;

@end
