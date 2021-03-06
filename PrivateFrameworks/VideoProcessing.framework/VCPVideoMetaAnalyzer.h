/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoMetaAnalyzer : NSObject

@property (nonatomic, readonly, retain) NSDictionary *privateResults;
@property (nonatomic, readonly, retain) NSDictionary *publicResults;

+ (id)analyzerForTrackType:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;

- (int)finalize;
- (id)privateResults;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2;
- (id)publicResults;

@end
