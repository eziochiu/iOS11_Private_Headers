/* made by EzioChiu.
 */

@protocol CVADisparityPostprocessingCompletionDelegate <NSObject>

@required

- (void)disparityPostprocessingRequest:(CVADisparityPostprocessingRequest *)arg1 didCompleteDisparityPostprocessingWithResult:(id <CVADisparityPostprocessingResult>)arg2;

@end
