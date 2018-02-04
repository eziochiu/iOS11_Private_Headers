/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTargetLayout : PBCodable <NSCopying> {
    struct { 
        unsigned int layoutInfo : 1; 
        unsigned int layoutStyle : 1; 
        unsigned int uiTarget : 1; 
    }  _has;
    int  _layoutInfo;
    int  _layoutStyle;
    int  _uiTarget;
}

@property (nonatomic) bool hasLayoutInfo;
@property (nonatomic) bool hasLayoutStyle;
@property (nonatomic) bool hasUiTarget;
@property (nonatomic) int layoutInfo;
@property (nonatomic) int layoutStyle;
@property (nonatomic) int uiTarget;

- (int)StringAsLayoutInfo:(id)arg1;
- (int)StringAsLayoutStyle:(id)arg1;
- (int)StringAsUiTarget:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLayoutInfo;
- (bool)hasLayoutStyle;
- (bool)hasUiTarget;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)layoutInfo;
- (id)layoutInfoAsString:(int)arg1;
- (int)layoutStyle;
- (id)layoutStyleAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLayoutInfo:(bool)arg1;
- (void)setHasLayoutStyle:(bool)arg1;
- (void)setHasUiTarget:(bool)arg1;
- (void)setLayoutInfo:(int)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setUiTarget:(int)arg1;
- (int)uiTarget;
- (id)uiTargetAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end