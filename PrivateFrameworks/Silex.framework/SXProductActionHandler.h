/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXProductActionHandler : SXActionHandler <SKStoreProductViewControllerDelegate> {
    SKStoreProductViewController * _productViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKStoreProductViewController *productViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alertActions;
- (id)alertController;
- (void)finishHandlingAction;
- (void)handleActionOnViewController:(id)arg1;
- (id)message;
- (id)productParameters;
- (id)productViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)setProductViewController:(id)arg1;
- (id)title;

@end
