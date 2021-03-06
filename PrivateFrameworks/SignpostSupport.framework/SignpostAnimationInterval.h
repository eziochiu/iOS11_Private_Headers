/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostAnimationInterval : SignpostInterval {
    NSArray * _compositeIntervals;
    float  _frameRate;
}

@property (nonatomic, retain) NSArray *compositeIntervals;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic) float frameRate;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)compositeIntervals;
- (id)debugDescription;
- (unsigned long long)frameCount;
- (float)frameRate;
- (id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2 compositeIntervalTimeline:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializeableDictionary;
- (void)setCompositeIntervals:(id)arg1;
- (void)setFrameRate:(float)arg1;

@end
