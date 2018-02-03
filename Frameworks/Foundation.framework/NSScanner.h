/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSScanner : NSObject <NSCopying>

@property bool caseSensitive;
@property (copy) NSCharacterSet *charactersToBeSkipped;
@property (retain) id locale;
@property unsigned long long scanLocation;
@property (readonly, copy) NSString *string;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)localizedScannerWithString:(id)arg1;
+ (id)scannerWithString:(id)arg1;

- (id)_invertedSkipSet;
- (id)_remainingString;
- (bool)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2;
- (bool)caseSensitive;
- (id)charactersToBeSkipped;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithString:(id)arg1;
- (bool)isAtEnd;
- (id)locale;
- (bool)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (bool)scanDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; }*)arg1;
- (bool)scanDouble:(double*)arg1;
- (bool)scanFloat:(float*)arg1;
- (bool)scanHexDouble:(double*)arg1;
- (bool)scanHexFloat:(float*)arg1;
- (bool)scanHexInt:(unsigned int*)arg1;
- (bool)scanHexLongLong:(unsigned long long*)arg1;
- (bool)scanInt:(int*)arg1;
- (bool)scanInteger:(long long*)arg1;
- (unsigned long long)scanLocation;
- (bool)scanLongLong:(long long*)arg1;
- (bool)scanString:(id)arg1 intoString:(id*)arg2;
- (bool)scanUnsignedInteger:(unsigned long long*)arg1;
- (bool)scanUnsignedLongLong:(unsigned long long*)arg1;
- (bool)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (bool)scanUpToString:(id)arg1 intoString:(id*)arg2;
- (void)setCaseSensitive:(bool)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setScanLocation:(unsigned long long)arg1;
- (id)string;

// Image: /bootstrap/Library/SBInject/AnemoneColors.dylib

- (bool)anem_scanCSSColor:(id*)arg1;
- (bool)anem_scanHSLColor:(id*)arg1;
- (bool)anem_scanHexColor:(id*)arg1;
- (bool)anem_scanRGBColor:(id*)arg1;
- (bool)anem_scanW3CNamedColor:(id*)arg1;
- (bool)cmr_caseInsensitiveWithCleanup:(id /* block */)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })cmr_rangeFromScanLocation;
- (bool)cmr_resetScanLocationOnFailure:(id /* block */)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })cmr_scanCharactersInSet:(id)arg1 maxLength:(unsigned long long)arg2 intoString:(id*)arg3;
- (bool)cmr_scanFloatQuad:(struct { double x1; double x2; double x3; double x4; }*)arg1 scale:(struct { double x1; double x2; double x3; double x4; })arg2;
- (bool)cmr_scanFloatTriple:(struct { double x1; double x2; double x3; }*)arg1 scale:(struct { double x1; double x2; double x3; })arg2;
- (bool)cmr_scanHexTriple:(id*)arg1;
- (bool)cmr_scanNum:(double*)arg1 scale:(double)arg2;
- (bool)cmr_scanTransparent:(id*)arg1;
- (void)cmr_skip;
- (void)cmr_skipCharactersInSet:(id)arg1;
- (void)cmr_withNoSkip:(id /* block */)arg1;
- (void)cmr_withSkip:(id)arg1 run:(id /* block */)arg2;

@end
