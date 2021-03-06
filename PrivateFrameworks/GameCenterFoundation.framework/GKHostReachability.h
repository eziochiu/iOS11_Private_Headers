/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKHostReachability : GKReachability {
    NSError * _error;
    NSString * _hostName;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *hostName;

+ (id)_gkReachabilityWithHostName:(id)arg1;

- (void)dealloc;
- (id)error;
- (id)hostName;
- (void)setError:(id)arg1;
- (void)setHostName:(id)arg1;

@end
