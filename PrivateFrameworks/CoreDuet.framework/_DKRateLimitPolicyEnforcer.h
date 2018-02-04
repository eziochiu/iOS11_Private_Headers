/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKRateLimitPolicyEnforcer : NSObject {
    NSDictionary * _eventStreamRateLimiters;
}

+ (id)rateLimitPolicyEnforcer;

- (void).cxx_destruct;
- (void)creditForDeletion:(id)arg1;
- (id)filterObjectsByEnforcingRateLimit:(id)arg1;
- (id)init;

@end
