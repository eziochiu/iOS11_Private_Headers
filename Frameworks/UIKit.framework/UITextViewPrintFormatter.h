/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextViewPrintFormatter : UIViewPrintFormatter {
    NSArray * _pageData;
    struct { 
        unsigned int initializedUsedRects : 1; 
    }  _textViewPrintFormatterFlags;
}

- (void).cxx_destruct;
- (id)_pageData;
- (long long)_recalcPageCount;
- (id)_textView;
- (id)attributedText;
- (id)color;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (id)font;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (id)text;
- (long long)textAlignment;

@end