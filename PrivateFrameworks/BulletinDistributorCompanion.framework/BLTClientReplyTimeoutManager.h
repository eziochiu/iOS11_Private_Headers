/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTClientReplyTimeoutManager : NSObject {
    PCPersistentTimer * _clientReplyTimeoutTimer;
    NSMutableArray * _clientReplyTimeouts;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_handleClientReplyTimeout;
- (void)_invalidateClientReplyTimer;
- (void)_sortTimeouts;
- (void)_startClientReplyTimerWithFireDate:(id)arg1;
- (void)_startNextClientReplyTimer;
- (id)addClientReplyTimeoutForBulletin:(id)arg1 sectionID:(id)arg2 timeout:(double)arg3 handler:(id /* block */)arg4;
- (void)extendClientReplyTimeout:(id)arg1 additionalTime:(unsigned long long)arg2;
- (id)initWithQueue:(id)arg1;
- (bool)invalidateClientReplyTimeout:(id)arg1;

@end