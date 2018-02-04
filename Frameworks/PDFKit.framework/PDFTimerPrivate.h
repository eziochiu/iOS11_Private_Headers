/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFTimerPrivate : NSObject {
    bool  isRequested;
    SEL  selector;
    NSObject * target;
    double  timeInterval;
    NSTimer * timer;
}

- (void).cxx_destruct;

@end
