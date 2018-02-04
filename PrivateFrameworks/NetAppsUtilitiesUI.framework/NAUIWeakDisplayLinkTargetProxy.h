/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

@interface NAUIWeakDisplayLinkTargetProxy : NSObject {
    NAUIWeakRef * _weakTarget;
    SEL  _weakTargetSelector;
}

+ (SEL)proxyDisplayLinkSelector;

- (void)_weakDisplayLinkTargetProxyAction:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end
