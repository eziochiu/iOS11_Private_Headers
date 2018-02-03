/* made by EzioChiu.
 */

@protocol CVAPortraitCompletionDelegate <NSObject>

@required

- (void)portraitRequest:(id <CVAPortraitRequest>)arg1 didCompletePortraitWithResult:(id <CVAPortraitResult>)arg2;

@end
