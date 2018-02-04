/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface _CLKTreatedImageCache : NSObject {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableArray * _recentlyUsedKeys;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_pruneCacheIfNecessary;
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 maskToCircle:(bool)arg3;
- (id)init;

@end