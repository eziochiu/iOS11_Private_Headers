/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPingTimer : NSObject {
    SEL  _action;
    bool  _everPinged;
    bool  _invalid;
    unsigned long long  _maxPingCount;
    bool  _nextPingFires;
    unsigned long long  _pingCount;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _scheduleId;
    id  _target;
    double  _timeout;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) unsigned long long maxPingCount;
@property (nonatomic, readonly) unsigned long long pingCount;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (void)_inqFireWithScheduleId:(unsigned long long)arg1;
- (void)_inqSchedule;
- (SEL)action;
- (void)fireOnNextPing;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 maxPingCount:(unsigned long long)arg3 timeout:(double)arg4;
- (void)invalidate;
- (unsigned long long)maxPingCount;
- (void)ping;
- (unsigned long long)pingCount;
- (id)target;
- (double)timeout;

@end