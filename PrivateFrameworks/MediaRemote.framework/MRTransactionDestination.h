/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionDestination : NSObject {
    unsigned long long  _name;
    MRTransactionPacketizer * _packetizer;
    void * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) unsigned long long name;

- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 playerPath:(void*)arg2;
- (unsigned long long)name;
- (void)packetsFromMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)unpacketize:(id)arg1 completion:(id /* block */)arg2;

@end
