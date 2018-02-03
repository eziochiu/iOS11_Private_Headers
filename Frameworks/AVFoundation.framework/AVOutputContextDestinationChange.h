/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputContextDestinationChange : NSObject {
    AVOutputContextDestinationChangeInternal * _ivars;
}

@property (readonly) long long status;

- (void)_setStatus:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)markAsCancelled;
- (void)markAsFailed;
- (void)markAsFinished;
- (void)markAsInProgress;
- (long long)status;

@end
