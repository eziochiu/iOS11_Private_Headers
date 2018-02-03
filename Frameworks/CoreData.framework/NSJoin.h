/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSJoin : NSObject <NSCoding, NSCopying> {
    NSString * _destinationAttributeName;
    NSString * _sourceAttributeName;
}

+ (id)joinWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)destinationAttributeName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sourceAttributeName;

@end