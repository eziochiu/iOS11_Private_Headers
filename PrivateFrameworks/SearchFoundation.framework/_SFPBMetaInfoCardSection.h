/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBMetaInfoCardSection : PBCodable <NSSecureCoding, _SFPBMetaInfoCardSection> {
    _SFPBColor * _backgroundColor;
    _SFPBImage * _badge;
    bool  _canBeHidden;
    _SFPBURL * _contentURL;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int trending : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    _SFPBURL * _hostPageURL;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    bool  _trending;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic, retain) _SFPBImage *badge;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) _SFPBURL *contentURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic, readonly) bool hasBadge;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic, readonly) bool hasCanBeHidden;
@property (nonatomic, readonly) bool hasContentURL;
@property (nonatomic, readonly) bool hasHasBottomPadding;
@property (nonatomic, readonly) bool hasHasTopPadding;
@property (nonatomic, readonly) bool hasHostPageURL;
@property (nonatomic, readonly) bool hasPunchoutPickerDismissText;
@property (nonatomic, readonly) bool hasPunchoutPickerTitle;
@property (nonatomic, readonly) bool hasSeparatorStyle;
@property (nonatomic) bool hasTopPadding;
@property (nonatomic, readonly) bool hasTrending;
@property (nonatomic, readonly) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBURL *hostPageURL;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic) bool trending;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (id)badge;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (id)contentURL;
- (id)dictionaryRepresentation;
- (bool)hasBackgroundColor;
- (bool)hasBadge;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasContentURL;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasHostPageURL;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (bool)hasTrending;
- (bool)hasType;
- (unsigned long long)hash;
- (id)hostPageURL;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setContentURL:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHostPageURL:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrending:(bool)arg1;
- (void)setType:(id)arg1;
- (bool)trending;
- (id)type;
- (void)writeTo:(id)arg1;

@end
