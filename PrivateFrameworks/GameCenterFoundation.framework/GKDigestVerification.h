/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDigestVerification : NSObject

+ (id)computeVerificationHashForDigest:(id)arg1;
+ (bool)digest:(id)arg1 matchesHash:(id)arg2;
+ (id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(bool)arg3 eligibleChallenges:(id)arg4;
+ (id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(bool)arg3 eligibleChallenges:(id)arg4;

@end