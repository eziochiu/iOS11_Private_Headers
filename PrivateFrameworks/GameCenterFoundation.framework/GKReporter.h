/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKReporter : NSObject

+ (id)reporter;

- (void)_nativeReport:(id)arg1 signature:(id)arg2 result:(bool*)arg3;
- (void)report:(id)arg1;
- (void)report:(id)arg1 signature:(id)arg2;
- (void)report:(id)arg1 signature:(id)arg2 result:(bool)arg3;

@end
