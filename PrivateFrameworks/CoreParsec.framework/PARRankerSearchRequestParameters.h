/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRankerSearchRequestParameters : NSObject {
    unsigned long long  _numTopics;
    double  _thresholdTopicScore;
    unsigned long long  _topicScoreBinSize;
}

@property (nonatomic) unsigned long long numTopics;
@property (nonatomic) double thresholdTopicScore;
@property (nonatomic) unsigned long long topicScoreBinSize;

+ (id)defaultValue;
+ (id)responseFromJSON:(id)arg1;

- (unsigned long long)numTopics;
- (void)setNumTopics:(unsigned long long)arg1;
- (void)setThresholdTopicScore:(double)arg1;
- (void)setTopicScoreBinSize:(unsigned long long)arg1;
- (double)thresholdTopicScore;
- (unsigned long long)topicScoreBinSize;

@end
