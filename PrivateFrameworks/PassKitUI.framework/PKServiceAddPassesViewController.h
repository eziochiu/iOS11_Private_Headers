/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol> {
    bool  _placeholderViewControllerDidCancel;
    double  _screenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _screenSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (bool)_preventsAppearanceProxyCustomization;
+ (id)_remoteViewControllerInterface;

- (void)addPassesCardStackViewController:(id)arg1 didCancelAddingPasses:(id)arg2;
- (void)addPassesCardStackViewController:(id)arg1 didFinishAddingPasses:(id)arg2;
- (void)ingestPassesWithData:(id)arg1 fromPresentationSource:(unsigned long long)arg2;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
