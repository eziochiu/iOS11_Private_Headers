/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAttributedString : NSObject <NSCopying, NSItemProviderReading, NSItemProviderWriting, NSMutableCopying, NSSecureCoding, UIItemProviderReading, UIItemProviderWriting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *string;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_setAttributedDictionaryClass:(Class)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacingCharactersInRanges:(const struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributedString:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)string;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(bool)arg3 error:(id*)arg4;
+ (id)_objectWithRTFDAtURL:(id)arg1 error:(id*)arg2;
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1;
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (id)_ui_attributedStringWithOriginalFontAttributes;
- (id)_ui_fontsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingDefaultFont:(id)arg2;
- (id)_ui_glyphImageViewsScale:(double)arg1 outImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 outLineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 outBaselineOffset:(double*)arg4;
- (long long)_ui_resolvedTextAlignment;
- (long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1;
- (long long)_ui_resolvedWritingDirection;
- (long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1;
- (id)_ui_synthesizeAttributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingDefaultAttributes:(id)arg2;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)registerLoadHandlersToItemProvider:(id)arg1;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

- (id)dd_attributedStringByAppendingAttributedString:(id)arg1;
- (id)dd_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

- (id)_UIKBStringWideAttributeValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (id)_documentTypeForFileType:(id)arg1;
+ (id)attributedStringWithAttachment:(id)arg1;

- (id)RTFDFileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (bool)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_documentFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4;
- (id)_htmlDocumentFragmentString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 subresources:(id*)arg3;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id*)arg3;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)_isStringDrawingTextStorage;
- (unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usesAlternativeBreaker:(bool)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(bool*)arg3;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scaledByScaleFactor:(double)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withTrackingAdjustment:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (bool)containsAttachments;
- (bool)containsAttachmentsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)dataFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)defaultLanguage;
- (id)docFormatFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (id)fileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)fontAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithPath:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rulerAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
