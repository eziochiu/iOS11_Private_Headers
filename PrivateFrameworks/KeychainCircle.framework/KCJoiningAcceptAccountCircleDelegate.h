/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

@interface KCJoiningAcceptAccountCircleDelegate : NSObject <KCJoiningAcceptCircleDelegate>

+ (id)delegate;

- (id)circleGetInitialSyncViews:(id*)arg1;
- (id)circleJoinDataFor:(struct __OpaqueSOSPeerInfo { }*)arg1 error:(id*)arg2;

@end
