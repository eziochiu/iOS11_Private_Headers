/* made by EzioChiu.
 */

@protocol _CPProcessableFeedback <_CPFeedbackJSONObject>

@required

- (bool)requiresQueryId;
- (unsigned long long)timestamp;

@end
