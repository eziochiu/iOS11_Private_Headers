/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResults : NSObject {
    SCRCPhotoEvaluatorResult * _blurResult;
    SCRCPhotoEvaluatorResult * _colorResult;
    SCRCPhotoEvaluatorResult * _luminanceResult;
    SCRCPhotoEvaluatorResultPeople * _peopleResult;
}

@property (nonatomic, readonly) SCRCPhotoEvaluatorResult *blurResult;
@property (nonatomic, readonly) SCRCPhotoEvaluatorResult *colorResult;
@property (nonatomic, readonly) SCRCPhotoEvaluatorResult *luminanceResult;
@property (nonatomic, readonly) SCRCPhotoEvaluatorResultPeople *peopleResult;

- (void).cxx_destruct;
- (id)blurResult;
- (id)colorResult;
- (id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 peopleResult:(id)arg3 luminanceResult:(id)arg4;
- (id)luminanceResult;
- (id)peopleResult;

@end
