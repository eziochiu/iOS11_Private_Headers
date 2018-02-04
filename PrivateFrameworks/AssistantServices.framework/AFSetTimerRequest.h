/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSetTimerRequest : AFSiriRequest {
    STTimer * _timer;
}

@property (nonatomic, retain) STTimer *timer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end