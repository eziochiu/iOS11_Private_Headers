/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLImageBufferManager : NSObject {
    NSHashTable * activeImageBuffers;
    NSLock * bufferTableLock;
    CIContext * lowPriorityCIContext;
    <MTLDevice> * lowPriorityCIContextMetalDevice;
    CIContext * mainCIContext;
    <MTLDevice> * mainCIContextMetalDevice;
}

+ (id)manager;

- (void).cxx_destruct;
- (void)addImageBuffer:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)purgeAllCaches;
- (void)removeBuffer:(id)arg1;
- (id)sharedCIContextWithOptions:(id)arg1;

@end
