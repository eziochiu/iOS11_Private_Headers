/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailCache : NSObject {
    NSMutableDictionary * _cachedGenericItems;
    NSMapTable * _cachedIconItems;
    NSMapTable * _cachedThumbnailItems;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSCache * _recentlyUsedItems;
    long long  _thumnailFetchingPriority;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedGenericItems;
@property (nonatomic, readonly) NSMapTable *cachedIconItems;
@property (nonatomic, readonly) NSMapTable *cachedThumbnailItems;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSCache *recentlyUsedItems;
@property (nonatomic) long long thumnailFetchingPriority;

+ (void)clearCache;
+ (void)decreaseThumnailFetchingPriority;
+ (id)iconForContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5;
+ (void)increaseThumnailFetchingPriority;
+ (void)resetThumnailFetchingPriorityValue;
+ (id)sharedCache;
+ (id)thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(bool)arg6;
+ (id)thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5;

- (void).cxx_destruct;
- (id)_iconForContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5 qos:(unsigned int)arg6;
- (id)_thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(bool)arg6 qos:(unsigned int)arg7;
- (id)cachedGenericItems;
- (id)cachedIconItems;
- (id)cachedThumbnailItems;
- (void)clearCache;
- (unsigned int)currentQOS;
- (void)decreaseThumnailFetchingPriority;
- (id)iconForContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5;
- (void)increaseThumnailFetchingPriority;
- (id)init;
- (void)markThumbnailAsRecentlyUsed:(id)arg1;
- (id)operationQueue;
- (id)queue;
- (id)recentlyUsedItems;
- (void)resetThumnailFetchingPriorityValue;
- (void)setThumnailFetchingPriority:(long long)arg1;
- (id)thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(bool)arg6;
- (id)thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5;
- (long long)thumnailFetchingPriority;

@end
