/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSString : NSObject <CSCoderEncoder, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSMutableCopying, NSSecureCoding, UIItemProviderReading, UIItemProviderWriting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long length;
@property (readonly, copy) NSString *stringByRemovingPercentEncoding;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *un_localizedStringArguments;
@property (nonatomic, readonly, copy) NSString *un_localizedStringKey;
@property (nonatomic, readonly, copy) NSString *un_localizedStringValue;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_newZStringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
+ (id)_newZStringWithString:(id)arg1;
+ (id)_newZStringWithUTF8String:(const char *)arg1;
+ (id)_web_stringRepresentationForBytes:(long long)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (const unsigned long long*)availableStringEncodings;
+ (unsigned long long)defaultCStringEncoding;
+ (void)initialize;
+ (id)localizedNameOfStringEncoding:(unsigned long long)arg1;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)localizedStringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id*)arg3;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)pathWithComponents:(id)arg1;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)string;
+ (unsigned long long)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id*)arg3 usedLossyConversion:(bool*)arg4;
+ (id)stringWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)stringWithFormat:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)stringWithString:(id)arg1;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (id)stringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (const char *)UTF8String;
- (id)__escapeString5991;
- (unsigned long long)__graphemeCount;
- (bool)_allowsDirectEncoding;
- (unsigned long long)_cfTypeID;
- (id)_copyFormatStringWithConfiguration:(id)arg1;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (const char *)_fastCStringContents:(bool)arg1;
- (const unsigned short*)_fastCharacterContents;
- (unsigned int)_fastestEncodingInCFStringEncoding;
- (void)_flushRegularExpressionCaches;
- (void)_getBlockStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 stopAtLineSeparators:(bool)arg5;
- (bool)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 usedEncoding:(unsigned long long*)arg4;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (bool)_isCString;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (unsigned int)_smallestEncodingInCFStringEncoding;
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)_stringByResolvingSymlinksInPathUsingCache:(bool)arg1;
- (id)_stringByStandardizingPathUsingCache:(bool)arg1;
- (id)_stringRepresentation;
- (id)_web_HTTPStyleLanguageCode;
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;
- (id)_web_URLFragment;
- (id)_web_characterSetFromContentTypeHeader_nowarn;
- (long long)_web_countOfString:(id)arg1;
- (id)_web_domainFromHost;
- (bool)_web_domainMatches:(id)arg1;
- (unsigned int)_web_extractFourCharCode;
- (id)_web_fileNameFromContentDispositionHeader_nowarn;
- (id)_web_filenameByFixingIllegalCharacters;
- (id)_web_fixedCarbonPOSIXPath;
- (bool)_web_hasCaseInsensitivePrefix:(id)arg1;
- (bool)_web_hasCountryCodeTLD;
- (bool)_web_isCaseInsensitiveEqualToString:(id)arg1;
- (bool)_web_isFileURL;
- (bool)_web_isJavaScriptURL;
- (bool)_web_looksLikeAbsoluteURL;
- (bool)_web_looksLikeIPAddress;
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(bool)arg1;
- (id)_web_parseAsKeyValuePair_nowarn;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLHost;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLResourceSpecifier_nowarn;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLScheme_nowarn;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_web_rangeOfURLUserPasswordHostPort;
- (id)_web_splitAtNonDateCommas_nowarn;
- (id)_web_stringByCollapsingNonPrintingCharacters;
- (id)_web_stringByExpandingTildeInPath;
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;
- (id)_web_stringByTrimmingWhitespace;
- (bool)boolValue;
- (const char *)cString;
- (unsigned long long)cStringLength;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (unsigned long long)completePathIntoString:(id*)arg1 caseSensitive:(bool)arg2 matchesIntoArray:(id*)arg3 filterTypes:(id)arg4;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1;
- (bool)containsString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(bool)arg2;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)decomposedStringWithCanonicalMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (id)description;
- (id)displayableString;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateLinesUsingBlock:(id /* block */)arg1;
- (void)enumerateLinguisticTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)enumerateSubstringsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)fastestEncoding;
- (const char *)fileSystemRepresentation;
- (float)floatValue;
- (id)formatConfiguration;
- (bool)getBytes:(char *)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(bool)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (bool)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (void)getCString:(char *)arg1;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;
- (bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (void)getCharacters:(unsigned short*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)getExternalRepresentation:(id*)arg1 extendedAttributes:(id*)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id*)arg5;
- (bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)getParagraphStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (bool)hasPrefix:(id)arg1;
- (bool)hasSuffix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(bool)arg4;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned long long*)arg2;
- (id)initWithFormat:(id)arg1;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 error:(id*)arg5;
- (int)intValue;
- (long long)integerValue;
- (bool)isAbsolutePath;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (bool)isNSString__;
- (id)lastPathComponent;
- (unsigned long long)length;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lineRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)linguisticTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id*)arg5;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)localizedCapitalizedString;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (bool)localizedCaseInsensitiveContainsString:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (bool)localizedHasPrefix:(id)arg1;
- (bool)localizedHasSuffix:(id)arg1;
- (id)localizedLowercaseString;
- (long long)localizedStandardCompare:(id)arg1;
- (bool)localizedStandardContainsString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })localizedStandardRangeOfString:(id)arg1;
- (id)localizedUppercaseString;
- (long long)longLongValue;
- (const char *)lossyCString;
- (id)lowercaseString;
- (id)lowercaseStringWithLocale:(id)arg1;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)pathComponents;
- (id)pathExtension;
- (id)precomposedStringWithCanonicalMapping;
- (id)precomposedStringWithCompatibilityMapping;
- (id)propertyList;
- (id)propertyListFromStringsFileFormat;
- (id)quotedStringRepresentation;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfComposedCharacterSequencesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (id)replacementObjectForPortCoder:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })significantText;
- (unsigned long long)smallestEncoding;
- (id)standardizedURLPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1;
- (id)stringByAddingPercentEscapes;
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)stringByAppendingFormat:(id)arg1;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByAppendingString:(id)arg1;
- (id)stringByApplyingTransform:(id)arg1 reverse:(bool)arg2;
- (id)stringByConvertingPathToURL;
- (id)stringByConvertingURLToPath;
- (id)stringByDeletingLastPathComponent;
- (id)stringByDeletingPathExtension;
- (id)stringByExpandingTildeInPath;
- (id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2;
- (id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (id)stringByRemovingPercentEncoding;
- (id)stringByRemovingPercentEscapes;
- (id)stringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByStandardizingPath;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (id)stringsByAppendingPaths:(id)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)uppercaseString;
- (id)uppercaseStringWithLocale:(id)arg1;
- (id)variantFittingPresentationWidth:(long long)arg1;
- (id)writableTypeIdentifiersForItemProvider;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (long long)_caseInsensitiveNumericCompare:(id)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;
- (bool)hasSuffixInsensitive:(id)arg1;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (void)encodeWithCSCoder:(id)arg1;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)_fpd_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)fp_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)fp_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(bool)arg4;

- (id)fp_bouncedNameWithIndex:(long long)arg1;
- (const char *)fp_fileSystemRepresentation;
- (id)fp_libnotifyPerUserNotificationName;
- (id)fp_pathExtension;
- (id)fp_realpath;
- (id)fp_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(bool)arg3;
- (id)fp_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(bool)arg3;
- (id)fp_stringByDeletingPathBounceNo:(unsigned long long*)arg1 andPathExtension:(id*)arg2;
- (id)fp_stringByDeletingPathExtension;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)NSStringFromLSInstallPhase:(unsigned long long)arg1;
+ (id)NSStringFromLSInstallState:(unsigned long long)arg1;
+ (id)NSStringFromLSInstallType:(unsigned long long)arg1;

- (id)clean;
- (bool)matches:(id)arg1;
- (bool)matchesString:(id)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (id)_adjustedFontFromFont:(id)arg1 withinFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSize:(double)arg3 textSize:(struct CGSize { double x1; double x2; }*)arg4;
- (struct CGSize { double x1; double x2; })_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6 truncationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(bool)arg7;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(bool)arg8;
- (struct CGSize { double x1; double x2; })_legacy_drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6 truncationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize { double x1; double x2; })_legacy_sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double*)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (struct CGSize { double x1; double x2; })_optimizedSizeWithFont:(id)arg1;
- (id)_ui_secureString;
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;
- (id)_uikit_stringWithWritingDirection:(long long)arg1 asOverride:(bool)arg2;
- (id)_uikit_unescapedQueryValue;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(bool)arg7;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(bool)arg6;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(bool)arg8;
- (struct CGSize { double x1; double x2; })drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize { double x1; double x2; })drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(bool)arg6;
- (id)queryKeysAndValues;
- (void)registerLoadHandlersToItemProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize { double x1; double x2; })sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double*)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (id)stringByStandardizingWhitespace;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)localizedUserNotificationStringForKey:(id)arg1 arguments:(id)arg2;

- (id)un_localizedStringArguments;
- (id)un_localizedStringKey;
- (id)un_localizedStringValue;
- (id)un_logDigest;
- (id)un_stringWithMaxLength:(unsigned long long)arg1;
- (unsigned long long)un_unsignedLongLongValue;

// Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport

- (id)stringByEscapingXMLSpecialCharacters;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

+ (id)cutStringGUID;

- (id)cutStringByResolvingAndStandardizingPath;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCMakeUUID;

- (id)MCAppendDeviceName;
- (id)MCAppendGreenteaSuffix;
- (unsigned int)MCHash;
- (id)MCHashedFilenameWithExtension:(id)arg1;
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;
- (id)MCHashedIdentifier;
- (id)MCOldStyleSafeFilenameHash;
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;
- (id)MCRemoveAppExternalVersionIDParameter;
- (id)MCSHA256DigestWithPasscodeSalt;
- (id)MCSHA256DigestWithSalt:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (long long)compareVersionString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer

- (id)_pb_fixCase:(bool)arg1;
- (id)camelCase;
- (id)intern;
- (bool)isObjcReservedWord;
- (id)pascalCase;
- (id)plural;
- (id)stripQuotes;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)sbs_stringFromCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sbs_cgRectValue;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (struct USet { }*)_bopomofoSet;
+ (struct USet { }*)_bopomofoToneSet;
+ (struct USet { }*)_characterSetWithPattern:(id)arg1;
+ (struct USet { }*)_fullwidthLettersAndNumbersSet;
+ (struct USet { }*)_fullwidthLettersAndSymbolsSet;
+ (struct USet { }*)_hiraganaSet;
+ (struct USet { }*)_ideographSet;
+ (struct USet { }*)_japaneseLetterSet;
+ (struct USet { }*)_nonFullwidthLettersAndNumbersSet;
+ (struct USet { }*)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet { }*)_nonHiraganaOrKatakanaSet;
+ (struct USet { }*)_nonIdeographicCharacterSet;
+ (struct USet { }*)_nonJapaneseLetterSet;
+ (struct USet { }*)_nonKatakanaOrKanjiSet;
+ (bool)_string:(id)arg1 matchesString:(id)arg2;
+ (id)_stringWithUnichar:(unsigned int)arg1;
+ (id)stringWithUnichar:(unsigned int)arg1;

- (unsigned long long)_UTF8SizeOfRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_containsBopomofoOnly;
- (bool)_containsBopomofoToneOnly;
- (bool)_containsCJKScriptsOnly;
- (bool)_containsCJKSymbolsAndPunctuation;
- (bool)_containsCJScripts;
- (bool)_containsCJScriptsOnly;
- (bool)_containsEmoji;
- (bool)_containsEmojiOnly;
- (bool)_containsFullwidthLettersAndNumbers;
- (bool)_containsFullwidthLettersAndNumbersOnly;
- (bool)_containsFullwidthLettersAndSymbolsOnly;
- (bool)_containsHiraganaKatakanaOrBopomofo;
- (bool)_containsHiraganaOnly;
- (bool)_containsHiraganaOrKatakana;
- (bool)_containsIdeographicCharacters;
- (bool)_containsIdeographsOrBopomofoOnly;
- (bool)_containsJapanese;
- (bool)_containsJapaneseOnly;
- (bool)_containsKatakanaOrKanji;
- (bool)_containsSubstring:(id)arg1;
- (bool)_contentsExclusivelyInCharacterSet:(struct USet { }*)arg1;
- (unsigned long long)_editDistanceFrom:(id)arg1;
- (bool)_endsSentence;
- (void)_enumerateLongCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (unsigned short)_firstChar;
- (id)_firstGrapheme;
- (unsigned int)_firstLongCharacter;
- (unsigned long long)_graphemeCount;
- (unsigned long long)_indexFromStartingIndex:(unsigned long long)arg1 byIncrementingComposedCharacterSequenceCount:(unsigned long long)arg2;
- (bool)_isDelete;
- (bool)_isIdeographicGlyphs;
- (bool)_isLeftAssociative;
- (bool)_isModifierSymbol;
- (bool)_isNaturallyRTL;
- (bool)_isNewlineOrReturn;
- (bool)_isOnlyIdeographs;
- (bool)_isPlainSpace;
- (bool)_isSpace;
- (bool)_isSpaceOrReturn;
- (bool)_isTripledPunctuation;
- (id)_lastGrapheme;
- (unsigned int)_lastLongCharacter;
- (bool)_looksLikeEmailAddress;
- (bool)_looksLikeNumberInput;
- (bool)_looksLikeURL;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfBackwardDeletionClusterAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 withClusterOffset:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfLongCharacterAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfString:(id)arg1 fromLocation:(unsigned long long)arg2;
- (void)_reverseEnumerateLongCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (bool)_shouldBePaddedWithSpaces;
- (id)_stringByApplyingTransform:(id)arg1;
- (id)_stringByComposingDiacriticsLogicalOrder:(bool)arg1 allowedCharacters:(id /* block */)arg2;
- (id)_stringByConvertingFromFullWidthToHalfWidth;
- (id)_stringByConvertingFromHalfWidthToFullWidth;
- (id)_stringByDeletingInteriorSentences;
- (id)_stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByReplacingCharactersInSet:(struct __CFCharacterSet { }*)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByTranscribingFromLanguage:(id)arg1;
- (id)_stringByTranscribingUsingTokenizer:(struct __CFStringTokenizer { }*)arg1;
- (id)_stringByTransliteratingToPinyin;
- (id)_stringByTransliteratingToPinyin:(bool)arg1;
- (id)_stringByTransliteratingToPinyinAsFamilyName;
- (id)_stringByTransliteratingToZhuyin;
- (id)_stringByTransliteratingToZhuyin:(bool)arg1;
- (id)_stringByTransliteratingToZhuyinAsFamilyName;
- (id)_stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet { }*)arg1;
- (id)_stringByTrimmingLastCharacter;
- (id)_stringByTrimmingPrecedingLines;
- (id)_stringByTrimmingSuccedingLines;
- (bool)containsSubstring:(id)arg1;
- (unsigned long long)editDistanceFrom:(id)arg1;
- (bool)endsSentence;
- (bool)isDelete;
- (bool)isLeftAssociative;
- (bool)isNaturallyRTL;
- (bool)isNewlineOrReturn;
- (bool)isPlainSpace;
- (bool)isSpace;
- (bool)isSpaceOrReturn;
- (bool)isTripledPunctuation;
- (bool)looksLikeEmailAddress;
- (bool)looksLikeNumberInput;
- (bool)looksLikeURL;
- (id)stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet { }*)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet { }*)arg1;
- (id)stringByTrimmingLastCharacter;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (double)defaultBaselineOffsetForFont:(id)arg1;
+ (double)defaultLineHeightForFont:(id)arg1;
+ (float)hyphenationFactor;
+ (void)setHyphenationFactor:(float)arg1;
+ (void)setShowsControlCharacters:(bool)arg1;
+ (void)setShowsInvisibleCharacters:(bool)arg1;
+ (void)setTypesetterBehavior:(long long)arg1;
+ (void)setUsesFontLeading:(bool)arg1;
+ (void)setUsesScreenFonts:(bool)arg1;
+ (bool)showsControlCharacters;
+ (bool)showsInvisibleCharacters;
+ (long long)typesetterBehavior;
+ (bool)usesFontLeading;
+ (bool)usesScreenFonts;

- (struct CGSize { double x1; double x2; })_sizeWithSize:(struct CGSize { double x1; double x2; })arg1 attributes:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 attributes:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 withAttributes:(id)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAttributes:(id)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 attributes:(id)arg3;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (bool)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 attributes:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeWithAttributes:(id)arg1;
- (id)stringByStrippingLeadingAndTrailingWhitespace;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_web_stringWithData:(id)arg1 textEncodingName:(id)arg2;
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)arg1;
+ (id)_webkit_localStorageDirectoryWithBundleIdentifier:(id)arg1;

- (id)_web_bestURLForUserTypedString;
- (id)_web_capitalizeRFC822HeaderFieldName;
- (id)_web_decodeHostName;
- (id)_web_encodeHostName;
- (bool)_web_isUserVisibleURL;
- (id)_web_possibleURLPrefixesForUserTypedString;
- (id)_web_possibleURLsForForUserTypedString:(bool)arg1;
- (id)_web_possibleURLsForUserTypedString;
- (id)_web_stringByAbbreviatingWithTildeInPath;
- (id)_web_stringByStrippingReturnCharacters;
- (id)_webkit_decodeHostName;
- (id)_webkit_encodeHostName;
- (id)_webkit_filenameByFixingIllegalCharacters;
- (bool)_webkit_hasCaseInsensitivePrefix:(id)arg1;
- (bool)_webkit_hasCaseInsensitiveSubstring:(id)arg1;
- (bool)_webkit_hasCaseInsensitiveSuffix:(id)arg1;
- (bool)_webkit_isCaseInsensitiveEqualToString:(id)arg1;
- (bool)_webkit_isFileURL;
- (bool)_webkit_isJavaScriptURL;
- (bool)_webkit_looksLikeAbsoluteURL;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_webkit_rangeOfURLScheme;
- (id)_webkit_scriptIfJavaScriptURL;
- (id)_webkit_stringByCollapsingNonPrintingCharacters;
- (id)_webkit_stringByCollapsingWhitespaceCharacters;
- (id)_webkit_stringByReplacingValidPercentEscapes;
- (id)_webkit_stringByTrimmingWhitespace;

// Image: /bootstrap/Library/SBInject/AnemoneCore.dylib

- (id)anemoneThemedPath;
- (id)anemoneThemedPath:(bool)arg1;

@end
