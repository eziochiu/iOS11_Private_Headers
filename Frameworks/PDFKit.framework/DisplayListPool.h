/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface DisplayListPool : NSObject {
    DisplayListPoolPrivate * _private;
}

+ (id)sharedPool;

- (void).cxx_destruct;
- (struct CGDisplayList { }*)_drawDisplayListPage:(id)arg1;
- (id)_findDisplayList:(id)arg1;
- (id)_findRequest:(id)arg1;
- (id)_getNextRequest:(int)arg1;
- (bool)_hasWork;
- (void)_update;
- (void)dealloc;
- (int)displayListCount;
- (id)init;
- (void)releaseDisplayList:(struct CGDisplayList { }*)arg1 forPage:(id)arg2;
- (void)requestDisplayListForPage:(id)arg1 forTarget:(id)arg2;
- (void)updateActivePageIndex:(int)arg1;

@end
