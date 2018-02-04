/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRankerParameters : NSObject {
    NSString * _client;
    IFCentroidModelParameters * _modelParameters;
    PARPersonalizationParameters * _personalizationParameters;
}

@property (retain) NSString *client;
@property (retain) IFCentroidModelParameters *modelParameters;
@property (retain) PARPersonalizationParameters *personalizationParameters;

- (void).cxx_destruct;
- (id)client;
- (id)init;
- (id)initWithRankingAlgorithms:(id)arg1 centroidModelParameters:(id)arg2;
- (id)initWithRankingAlgorithmsAndCentroid:(id)arg1 centroidModelParameters:(id)arg2;
- (id)modelParameters;
- (id)personalizationParameters;
- (void)setClient:(id)arg1;
- (void)setModelParameters:(id)arg1;
- (void)setPersonalizationParameters:(id)arg1;

@end
