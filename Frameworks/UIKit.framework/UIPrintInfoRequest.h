/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintInfoRequest : NSObject {
    id /* block */  _completionHandler;
    PKPrinter * _printer;
    int  _requestState;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) int requestState;

+ (id)requestInfoForPrinter:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)requestPrintInfo;
- (int)requestState;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setRequestState:(int)arg1;

@end
