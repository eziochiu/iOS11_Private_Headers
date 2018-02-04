/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoPlayerViewControllerResponse : NSObject {
    bool  _expectVideoPlayerViewController;
    bool  _shouldAutoplay;
}

@property (nonatomic) bool expectVideoPlayerViewController;
@property (nonatomic) bool shouldAutoplay;

- (bool)expectVideoPlayerViewController;
- (void)setExpectVideoPlayerViewController:(bool)arg1;
- (void)setShouldAutoplay:(bool)arg1;
- (bool)shouldAutoplay;

@end
