/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFairScheduler : NSObject {
    unsigned long long  _lastVisitedBit;
    unsigned long long  _maxRegistedSourceBit;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
    NSMutableDictionary * _sourceForBitIndex;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)addSource:(id)arg1;
- (void)cancel;
- (void)close;
- (id)initWithQueue:(id)arg1 name:(id)arg2;
- (id)queue;
- (void)resume;
- (void)schedule;
- (void)signalSourceForBitIndex:(unsigned long long)arg1;
- (id)sourceForBitIndex:(unsigned long long)arg1;
- (void)suspend;
- (void)unregisterSources;

@end
