/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFSelectionPrivate : NSObject {
    UIColor * activeColor;
    struct __CFArray { } * cgSelections;
    PDFDocument * document;
    bool  forceBreaks;
    UIColor * inactiveColor;
    NSMutableArray * pageRanges;
    NSMutableArray * pages;
}

- (void).cxx_destruct;

@end
