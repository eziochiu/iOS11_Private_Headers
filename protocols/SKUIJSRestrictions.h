/* made by EzioChiu.
 */

@protocol SKUIJSRestrictions <JSExport>

@required

- (void)didDisplayExplicitRestrictionAlertOfType:(NSString *)arg1;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(JSValue *)arg1;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(JSValue *)arg1;
- (bool)isRestrictedApp:(NSString *)arg1;
- (void)isRestrictionsPasscodeSet:(JSValue *)arg1;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(NSString *)arg1 :(JSValue *)arg2;
- (void)setAllowExplicitContent;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(NSString *)arg1 :(JSValue *)arg2;

@end