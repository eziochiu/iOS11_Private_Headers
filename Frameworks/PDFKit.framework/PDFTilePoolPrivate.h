/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFTilePoolPrivate : NSObject {
    NSObject<OS_dispatch_queue> * barrierQueue;
    bool  debugColorTileEdge;
    NSMutableDictionary * freeSurfaces;
    PDFTimer * recycleTimer;
    NSObject<OS_dispatch_queue> * requestsBarrier;
    int  tileRenderType;
    NSMutableDictionary * usedSurfaces;
    NSObject<OS_dispatch_queue> * workQueue;
    NSObject<OS_dispatch_semaphore> * workSemaphore;
}

- (void).cxx_destruct;

@end
