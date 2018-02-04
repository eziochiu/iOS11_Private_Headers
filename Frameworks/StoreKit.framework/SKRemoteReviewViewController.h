/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController> {
    SKStoreReviewViewController * _reviewViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SKStoreReviewViewController *reviewViewController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (id)reviewViewController;
- (void)setReviewViewController:(id)arg1;

@end
