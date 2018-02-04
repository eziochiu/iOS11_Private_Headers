/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResetFeedbackMessage : CPLFeedbackMessage {
    NSString * _reason;
    NSString * _resetType;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSString *resetType;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithResetType:(id)arg1 reason:(id)arg2;
- (id)reason;
- (id)resetType;
- (id)serverMessage;

@end
