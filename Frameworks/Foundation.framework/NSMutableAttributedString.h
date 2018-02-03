/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableAttributedString : NSAttributedString

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (void)beginEditing;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)endEditing;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableString;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// Image: /System/Library/Frameworks/UIKit.framework/Frameworks/DocumentManager.framework/DocumentManager

+ (id)_doc_attributedStringForTitle:(id)arg1 textAttributes:(id)arg2 tagColors:(id)arg3 tagDiameter:(double)arg4 position:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
+ (id)_doc_gridAttributedStringForTitle:(id)arg1 tagColors:(id)arg2 font:(id)arg3;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_ui_restoreOriginalFontAttributes;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

- (void)dd_appendAttributedString:(id)arg1;
- (void)dd_chopResults;
- (void)dd_offsetResultsBy:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

- (bool)_attributeFixingInProgress;
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setAttributeFixingInProgress:(bool)arg1;
- (bool)_shouldSetOriginalFontAttribute;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)setAlignment:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)subscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)superscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)unscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
