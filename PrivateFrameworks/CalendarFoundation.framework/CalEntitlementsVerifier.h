/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalEntitlementsVerifier : NSObject

+ (bool)currentProcessHasAllowSuggestionsEntitlement;
+ (bool)currentProcessHasBooleanEntitlement:(id)arg1;
+ (bool)currentProcessHasContactsUIEntitlement;
+ (bool)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (bool)currentProcessHasWatchOSMutableDatabaseEntitlement;

@end
