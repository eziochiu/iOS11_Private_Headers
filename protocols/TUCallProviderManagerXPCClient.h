/* made by EzioChiu.
 */

@protocol TUCallProviderManagerXPCClient <NSObject>

@required

- (oneway void)updateProvidersByIdentifier:(NSDictionary *)arg1;

@end
