/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAnalysisStateObserver : NSObject {
    <PHAAnalysisStateObserverDelegate> * _delegate;
    PHPhotoLibrary * _library;
}

@property (nonatomic) <PHAAnalysisStateObserverDelegate> *delegate;
@property (nonatomic, readonly) PHPhotoLibrary *library;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)library;
- (void)setDelegate:(id)arg1;

@end
