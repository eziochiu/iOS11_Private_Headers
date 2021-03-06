/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider> {
    _UIStatusBar * _statusBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UIStatusBar *statusBar;
@property (nonatomic, readonly) _UIStatusBarStyleAttributes *styleAttributes;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (id)statusBar;
- (id)styleAttributes;

// Image: /bootstrap/Library/SBInject/LittleX.dylib

+ (Class)class;

@end
