/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBTrack : PBCodable <NSSecureCoding, _SFPBTrack> {
    NSString * _duration;
    struct { 
        unsigned int highlighted : 1; 
    }  _has;
    bool  _highlighted;
    NSString * _number;
    _SFPBActionItem * _playAction;
    _SFPBURL * _preview;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *duration;
@property (nonatomic, readonly) bool hasDuration;
@property (nonatomic, readonly) bool hasHighlighted;
@property (nonatomic, readonly) bool hasNumber;
@property (nonatomic, readonly) bool hasPlayAction;
@property (nonatomic, readonly) bool hasPreview;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlighted;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *number;
@property (nonatomic, retain) _SFPBActionItem *playAction;
@property (nonatomic, retain) _SFPBURL *preview;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)duration;
- (bool)hasDuration;
- (bool)hasHighlighted;
- (bool)hasNumber;
- (bool)hasPlayAction;
- (bool)hasPreview;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)highlighted;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)number;
- (id)playAction;
- (id)preview;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNumber:(id)arg1;
- (void)setPlayAction:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
