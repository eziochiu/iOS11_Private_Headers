/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTemporalEventTrigger : NSObject <NSCopying, NSSecureCoding> {
    INDateComponentsRange * _dateComponentsRange;
}

@property (readonly) INDateComponentsRange *dateComponentsRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponentsRange;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateComponentsRange:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
