/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRankingThresholds : NSObject {
    double  _mtThreshold;
    double  _threshold;
    double  _tldThreshold;
    double  _topicThreshold;
}

@property (nonatomic) double mtThreshold;
@property (nonatomic) double threshold;
@property (nonatomic) double tldThreshold;
@property (nonatomic) double topicThreshold;

+ (id)defaultValue;
+ (id)responseFromJSON:(id)arg1;

- (double)mtThreshold;
- (void)setMtThreshold:(double)arg1;
- (void)setThreshold:(double)arg1;
- (void)setTldThreshold:(double)arg1;
- (void)setTopicThreshold:(double)arg1;
- (double)threshold;
- (double)tldThreshold;
- (double)topicThreshold;

@end
