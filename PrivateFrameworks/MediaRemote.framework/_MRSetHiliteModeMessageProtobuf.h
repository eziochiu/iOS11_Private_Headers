/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int hiliteMode : 1; 
    }  _has;
    bool  _hiliteMode;
}

@property (nonatomic) bool hasHiliteMode;
@property (nonatomic) bool hiliteMode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHiliteMode;
- (unsigned long long)hash;
- (bool)hiliteMode;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHiliteMode:(bool)arg1;
- (void)setHiliteMode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end