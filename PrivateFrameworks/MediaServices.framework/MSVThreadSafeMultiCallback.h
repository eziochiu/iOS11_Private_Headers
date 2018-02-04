/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVThreadSafeMultiCallback : MSVMultiCallback {
    NSLock * _readLock;
    NSLock * _writeLock;
    int  readers;
}

- (void).cxx_destruct;
- (void)addCallback:(id)arg1;
- (id)init;
- (void)invoke:(id)arg1;
- (void)removeCallback:(id)arg1;

@end
