/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    bool  _isClosed;
    TSUDispatchData * _streamData;
    NSObject<OS_dispatch_queue> * _streamQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (id)init;
- (id)initWithAlwaysDefragmentData:(bool)arg1;
- (id)serializedData;
- (void)writeData:(id)arg1;

@end