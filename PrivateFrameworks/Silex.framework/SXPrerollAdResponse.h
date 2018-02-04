/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPrerollAdResponse : SXAdResponse {
    double  _skipDuration;
    NSURL * _videoURL;
}

@property (nonatomic) double skipDuration;
@property (nonatomic, retain) NSURL *videoURL;

- (void).cxx_destruct;
- (void)setSkipDuration:(double)arg1;
- (void)setVideoURL:(id)arg1;
- (double)skipDuration;
- (id)videoURL;

@end
