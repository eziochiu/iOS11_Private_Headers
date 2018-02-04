/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    BOOL  _uncompressedBuffer;
    unsigned long long  _uncompressedLength;
    <TSPComponentWriteChannel> * _writeChannel;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1;
- (void)writeBlock;
- (void)writeData:(id)arg1;

@end