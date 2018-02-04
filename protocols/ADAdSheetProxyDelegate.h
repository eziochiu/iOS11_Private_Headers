/* made by EzioChiu.
 */

@protocol ADAdSheetProxyDelegate <NSObject>

@required

- (NSDictionary *)additionalAdSheetLaunchOptions;
- (bool)shouldLaunchAdSheet;

@end
