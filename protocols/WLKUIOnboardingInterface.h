/* made by EzioChiu.
 */

@protocol WLKUIOnboardingInterface <JSExport>

@required

- (void)dismiss;
- (NSArray *)eligibleBids;
- (bool)isOptedIn;
- (NSNumber *)isOptedInCached;
- (bool)isShowing;
- (bool)isTvosMigrated;
- (void)migrateTvos:(JSValue *)arg1;
- (void)setOptedIn:(bool)arg1 :(JSValue *)arg2;
- (void)show:(JSValue *)arg1;
- (void)showForBids:(NSArray *)arg1 :(JSValue *)arg2 :(JSValue *)arg3;

@end
