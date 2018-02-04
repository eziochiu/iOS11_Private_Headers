/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCBreakingNewsInfo : NSObject <NSCoding, NSCopying> {
    unsigned long long  _count;
    unsigned long long  _index;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long index;

+ (id)empty;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)setCount:(unsigned long long)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
