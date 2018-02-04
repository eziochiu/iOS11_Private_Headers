/* made by EzioChiu.
 */

@protocol _WKFocusedElementInfo <NSObject>

@required

- (bool)isUserInitiated;
- (long long)type;
- (NSString *)value;

@end
