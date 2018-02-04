/* made by EzioChiu.
 */

@protocol _SFAuthenticationClient <NSObject>

@required

- (<_SFAuthenticationCustomUIProgressObserver> *)authenticationCustomUIProgressObserverForContext:(_SFAuthenticationContext *)arg1;
- (NSString *)authenticationMessageForContext:(_SFAuthenticationContext *)arg1;

@end
