/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate> {
    id /* block */  _completionHandler;
    bool  _presentedPrintInteractionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool presentedPrintInteractionController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)arg1;
- (bool)presentedPrintInteractionController;
- (void)setPresentedPrintInteractionController:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end