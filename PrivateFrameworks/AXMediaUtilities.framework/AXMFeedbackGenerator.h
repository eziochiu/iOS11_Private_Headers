/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMFeedbackGenerator : NSObject {
    bool  _isFeedbackEnabled;
    AXMOutputManager * _outputManager;
}

@property (nonatomic, retain) AXMOutputManager *outputManager;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didDisableFeedback;
- (void)didEnableFeedback;
- (void)disableFeedback;
- (void)enableFeedback;
- (id)initWithOutputManager:(id)arg1;
- (id)outputManager;
- (void)setOutputManager:(id)arg1;

@end
