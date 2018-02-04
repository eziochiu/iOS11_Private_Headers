/* made by EzioChiu.
 */

@protocol CHPhoneBookManagerProtocol <NSObject>

@required

+ (id)get;

- (NSString *)getLocalizedCallerIdLabelForContact:(CNContact *)arg1 forCallerId:(NSString *)arg2 withCallerIdIsEmail:(bool)arg3;
- (NSString *)getPersonsNameForContact:(CNContact *)arg1;
- (NSDictionary *)getRecordId:(NSString *)arg1 isEmail:(bool)arg2;
- (bool)isABContactASuggestion;

@end
