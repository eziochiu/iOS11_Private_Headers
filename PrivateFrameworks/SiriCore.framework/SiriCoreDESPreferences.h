/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreDESPreferences : NSObject

+ (id)sharedPreferences;

- (bool)DESLotteryWinOverrideIsEnabled;
- (id)DESPolicyCDNOverride;
- (bool)DESRecordingAlwaysIsEnabled;
- (void)setDESLotteryWinOverrideIsEnabled:(bool)arg1;
- (void)setDESPolicyCDNOverride:(id)arg1;
- (void)setDESRecordingAlwaysIsEnabled:(bool)arg1;
- (void)synchronize;

@end
