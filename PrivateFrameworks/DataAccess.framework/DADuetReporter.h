/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DADuetReporter : NSObject {
    CDAttribute * _attribute;
    NSString * _value;
}

+ (id)session;

- (void).cxx_destruct;
- (void)activityStarted;
- (void)activityStopped;
- (id)initWithActivityIdentifier:(id)arg1;

@end
