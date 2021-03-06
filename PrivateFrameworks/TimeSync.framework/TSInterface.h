/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSInterface : NSObject <TSClockClient> {
    TSClock * _clock;
    int (* _gptpGrandmasterCallback;
    void * _gptpGrandmasterRefcon;
    int (* _lockStateCallback;
    void * _lockStateRefcon;
    int (* _masterChangeCallback;
    void * _masterChangeRefcon;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
}

@property (nonatomic, retain) TSClock *clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)clock;
- (void)dealloc;
- (void)didChangeClockMasterForClock:(id)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)didEndClockGrandmasterChangeForClock:(id)arg1;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (void)setClock:(id)arg1;
- (void)setLockStateNotificationCallback:(int (*)arg1 refcon:(void*)arg2;
- (void)setMasterChangeNotificationCallback:(int (*)arg1 refcon:(void*)arg2;
- (void)setgPTPGrandmasterNotificationCallback:(int (*)arg1 refcon:(void*)arg2;

@end
