/* made by EzioChiu.
 */

@protocol PSUIWirelessDataOptionsDelegate <NSObject>

@optional

- (NSNumber *)appCellularDataEnabledForSpecifier:(PSSpecifier *)arg1;
- (NSNumber *)appWirelessDataOptionForSpecifier:(PSSpecifier *)arg1;
- (void)setAppCellularDataEnabled:(NSNumber *)arg1 forSpecifier:(PSSpecifier *)arg2;
- (void)setAppWirelessDataOption:(NSNumber *)arg1 forSpecifier:(PSSpecifier *)arg2;

@end
