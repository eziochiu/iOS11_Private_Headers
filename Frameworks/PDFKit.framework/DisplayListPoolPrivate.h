/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface DisplayListPoolPrivate : NSObject {
    int  activePageIndex;
    NSMutableArray * displayLists;
    NSObject<OS_dispatch_queue> * requestQueue;
    NSMutableArray * requests;
    NSObject<OS_dispatch_queue> * workQueue;
}

- (void).cxx_destruct;

@end
