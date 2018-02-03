/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableString : NSString

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)stringWithCapacity:(unsigned long long)arg1;

- (void)_cfAppendCString:(const char *)arg1 length:(long long)arg2;
- (void)_cfCapitalize:(const void*)arg1;
- (void)_cfLowercase:(const void*)arg1;
- (void)_cfNormalize:(long long)arg1;
- (void)_cfPad:(struct __CFString { }*)arg1 length:(unsigned int)arg2 padIndex:(unsigned int)arg3;
- (void)_cfTrim:(struct __CFString { }*)arg1;
- (void)_cfTrimWS;
- (void)_cfUppercase:(const void*)arg1;
- (unsigned long long)_replaceOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)_trimWithCharacterSet:(id)arg1;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (bool)applyTransform:(id)arg1 reverse:(bool)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 updatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withCString:(const char *)arg2 length:(unsigned long long)arg3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withCharacters:(const unsigned short*)arg2 length:(unsigned long long)arg3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setString:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)standardizeWhitespace;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

- (void)dd_appendSpaces:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/Network.framework/Network

- (void)appendPrettyBOOL:(bool)arg1 withName:(id)arg2 indent:(int)arg3;
- (void)appendPrettyInt:(int)arg1 withName:(id)arg2 indent:(int)arg3;
- (void)appendPrettyObject:(id)arg1 withName:(id)arg2 indent:(int)arg3 showFullContent:(bool)arg4;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

- (void)_removeCharactersFromSet:(struct __CFCharacterSet { }*)arg1;
- (void)_removeOccurrencesOfCharacter:(unsigned int)arg1;
- (void)_replaceOccurrencesOfCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;

@end
