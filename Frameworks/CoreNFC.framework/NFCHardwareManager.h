/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCHardwareManager : NSObject <NFCHardwareManagerCallbacks, NFCSessionCallbacks> {
    NSMutableArray * _delegates;
    NFCSession * _xpcSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=getDelegates, nonatomic, readonly, copy) NSArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHardwareManager;

- (void)addNFCHardwareManagerCallbacksListener:(id)arg1;
- (bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2;
- (void)dealloc;
- (void)didInvalidate;
- (id)getDelegates;
- (void)hardwareFailedToLoad;
- (id)init;
- (void)queueReaderSession:(id)arg1 showSharingUI:(unsigned long long)arg2 scanText:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)removeNFCHardwareManagerCallbacksListener:(id)arg1;

@end
