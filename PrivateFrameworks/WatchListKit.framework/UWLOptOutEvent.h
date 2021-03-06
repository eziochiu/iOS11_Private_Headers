/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface UWLOptOutEvent : PBCodable <NSCopying> {
    NSString * _brandId;
}

@property (nonatomic, retain) NSString *brandId;
@property (nonatomic, readonly) bool hasBrandId;

- (void).cxx_destruct;
- (id)brandId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBrandId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBrandId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
