/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDProcessInfo : NSObject {
    unsigned int  _applicationState;
    NSString * _bundleIdentifier;
    int  _pid;
}

@property (nonatomic, readonly) unsigned int applicationState;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) int pid;

+ (id)processInfoWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)applicationState;
- (id)bundleIdentifier;
- (int)pid;

@end
