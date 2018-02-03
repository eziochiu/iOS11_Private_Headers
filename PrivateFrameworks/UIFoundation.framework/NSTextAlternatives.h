/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextAlternatives : NSObject {
    NSArray * _alternativeStrings;
    id  _internal;
    NSString * _primaryString;
}

@property (readonly) NSArray *alternativeStrings;
@property (readonly) NSString *primaryString;

- (id)alternativeAtIndex:(unsigned long long)arg1;
- (id)alternativeStrings;
- (id)alternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3;
- (void)noteSelectedAlternativeString:(id)arg1;
- (unsigned long long)numberOfAlternatives;
- (id)originalText;
- (id)primaryString;

@end