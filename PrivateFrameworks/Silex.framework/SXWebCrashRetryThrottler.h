/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebCrashRetryThrottler : NSObject {
    bool  _crashed;
}

@property (nonatomic) bool crashed;

- (bool)crashed;
- (void)setCrashed:(bool)arg1;
- (bool)shouldReloadAfterWebProcessCrash;

@end
