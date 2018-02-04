/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARModelWeights : NSObject {
    double  _mtWt;
    double  _tldWt;
    double  _topicWt;
}

@property (nonatomic) double mtWt;
@property (nonatomic) double tldWt;
@property (nonatomic) double topicWt;

+ (id)defaultValue;
+ (id)responseFromJSON:(id)arg1;

- (double)mtWt;
- (void)setMtWt:(double)arg1;
- (void)setTldWt:(double)arg1;
- (void)setTopicWt:(double)arg1;
- (double)tldWt;
- (double)topicWt;

@end
