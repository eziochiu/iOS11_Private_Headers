/* made by EzioChiu.
 */

@protocol _SFBrowserToolbarDelegate <NSObject>

@required

- (void)browserToolbarGoBack:(_SFBrowserToolbar *)arg1;
- (void)browserToolbarGoForward:(_SFBrowserToolbar *)arg1;
- (void)browserToolbarOpenInSafari:(_SFBrowserToolbar *)arg1;
- (void)browserToolbarShowActionSheet:(_SFBrowserToolbar *)arg1;

@end
