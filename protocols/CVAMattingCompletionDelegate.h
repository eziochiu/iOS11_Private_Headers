/* made by EzioChiu.
 */

@protocol CVAMattingCompletionDelegate <NSObject>

@required

- (void)mattingRequest:(CVAMattingRequest *)arg1 didCompleteMattingWithResult:(id <CVAMattingResult>)arg2;

@end
