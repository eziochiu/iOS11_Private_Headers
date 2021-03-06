/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIIntentForwardingActionResponse : BSActionResponse {
    INIntentResponse * _cachedIntentResponse;
}

@property (nonatomic, readonly) INIntentResponse *intentResponse;

+ (id)responseWithIntentResponse:(id)arg1;

- (void).cxx_destruct;
- (id)initWithIntentResponse:(id)arg1;
- (id)intentResponse;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
