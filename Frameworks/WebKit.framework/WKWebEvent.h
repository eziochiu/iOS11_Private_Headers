/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebEvent : WebEvent {
    UIEvent * _uiEvent;
}

@property (nonatomic, retain) UIEvent *uiEvent;

- (void)dealloc;
- (void)setUiEvent:(id)arg1;
- (id)uiEvent;

@end
