/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXItem : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _changeType;
    NSString * _identifier;
    double  _score;
    unsigned char  _source;
    NSString * _sourceIdentifier;
}

@property (nonatomic) unsigned char changeType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double score;
@property (nonatomic) unsigned char source;
@property (nonatomic, retain) NSString *sourceIdentifier;

+ (id)itemWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3;
+ (id)itemWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasScoreSimilarToItem:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3;
- (id)initWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (double)score;
- (void)setChangeType:(unsigned char)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSource:(unsigned char)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (unsigned char)source;
- (id)sourceIdentifier;

@end
