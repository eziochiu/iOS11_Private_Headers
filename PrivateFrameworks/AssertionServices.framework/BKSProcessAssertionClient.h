/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionClient : BKSBaseAssertionClient

- (void)assertionQueue_handleMessage:(id)arg1;
- (double)backgroundTimeRemaining:(int)arg1;
- (bool)sendCreateEvent:(id)arg1 error:(id*)arg2;
- (void)sendDestroyEvent:(id)arg1;
- (void)sendUpdateEvent:(id)arg1;
- (id)supportedAssertionType;

@end
