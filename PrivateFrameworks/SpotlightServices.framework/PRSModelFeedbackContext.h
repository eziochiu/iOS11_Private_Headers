/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSModelFeedbackContext : NSObject {
    NSString * _l2ShadowVersion;
    NSString * _l2Version;
    NSString * _l3Version;
    double * _scores;
}

@property (nonatomic, retain) NSString *l2ShadowVersion;
@property (nonatomic, retain) NSString *l2Version;
@property (nonatomic, retain) NSString *l3Version;
@property (nonatomic) double*scores;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScores:(double*)arg1 models:(id)arg2 shadowModels:(id)arg3;
- (id)l2ShadowVersion;
- (id)l2Version;
- (id)l3Version;
- (double*)scores;
- (void)setL2ShadowVersion:(id)arg1;
- (void)setL2Version:(id)arg1;
- (void)setL3Version:(id)arg1;
- (void)setScores:(double*)arg1;

@end
