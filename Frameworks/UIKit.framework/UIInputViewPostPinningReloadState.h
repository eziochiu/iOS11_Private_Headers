/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewPostPinningReloadState : NSObject {
    UIResponder * _responderPreventedFromSettingInputViews;
}

@property (nonatomic, retain) UIResponder *responderToReload;

+ (id)stateWithResponder:(id)arg1;

- (void)dealloc;
- (id)responderToReload;
- (void)setResponderToReload:(id)arg1;

@end
