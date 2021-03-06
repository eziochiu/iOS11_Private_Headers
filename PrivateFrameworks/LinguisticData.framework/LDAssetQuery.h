/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinguisticData.framework/LinguisticData
 */

@interface LDAssetQuery : NSObject {
    NSConditionLock * _conditionLock;
    bool  _hasCompleted;
    NSString * _language;
    bool  _waitTimedOut;
}

@property (readonly) bool hasCompleted;

- (void)_runInForeground:(bool)arg1;
- (void)dealloc;
- (bool)hasCompleted;
- (id)initWithLanguage:(id)arg1;
- (void)runInBackground;
- (void)runInForeground;
- (bool)waitForCompletion;

@end
