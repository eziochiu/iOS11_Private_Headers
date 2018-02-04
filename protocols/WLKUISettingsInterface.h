/* made by EzioChiu.
 */

@protocol WLKUISettingsInterface <JSExport>

@required

- (NSArray *)consentedBrands;
- (NSArray *)deniedBrands;
- (bool)privateModeEnabled;
- (NSDictionary *)settings;

@end
