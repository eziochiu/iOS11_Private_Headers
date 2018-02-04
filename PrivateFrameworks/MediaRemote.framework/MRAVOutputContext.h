/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputContext : NSObject {
    AVOutputContext * _avOutputContext;
    NSArray * _outputDevices;
    NSMutableArray * _pendingModifications;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int  _type;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) AVOutputContext *avOutputContext;
@property (nonatomic, copy) NSArray *outputDevices;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)sharedAudioPresentationContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;

- (void)_clearAnyCompletedModifications;
- (void)_commitModification:(id)arg1;
- (bool)_contextSupportsMultipleDevices;
- (void)_outputContextChangeInitiatedNotification:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (id)_pendingModifications;
- (void)_registerNotifications;
- (void)_reloadOutputDevices;
- (void)_unregisterNotifications;
- (void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* block */)arg3;
- (id)avOutputContext;
- (void)dealloc;
- (id)description;
- (id)initWithAVOutputContext:(id)arg1 type:(unsigned int)arg2;
- (id)outputDevices;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(id /* block */)arg2;
- (void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* block */)arg3;
- (void)setOutputDevices:(id)arg1;
- (void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* block */)arg3;
- (unsigned int)type;
- (id)uniqueIdentifier;

@end
