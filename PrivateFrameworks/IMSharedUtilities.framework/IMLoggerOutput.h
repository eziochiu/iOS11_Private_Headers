/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMLoggerOutput : NSObject

@property (readonly) long long loggingLevel;

+ (id)loggerOutputFromLoggingLevel:(long long)arg1;
+ (id)loggerOutputFromString:(id)arg1;
+ (long long)loggingLevelFromString:(id)arg1;

- (id)description;
- (void)logForCategory:(const char *)arg1 string:(id)arg2;
- (long long)loggingLevel;

@end