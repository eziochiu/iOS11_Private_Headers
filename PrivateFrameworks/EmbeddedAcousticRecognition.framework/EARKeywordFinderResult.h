/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EARKeywordFinderResult : NSObject {
    NSArray * _correctedUtterances;
}

@property (nonatomic, readonly, copy) NSArray *correctedUtterances;

- (void).cxx_destruct;
- (id)_initWithCorrectedUtterances:(id)arg1;
- (id)correctedUtterances;
- (id)description;

@end