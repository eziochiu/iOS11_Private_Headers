/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchGenericResult : WBSParsecSearchResult {
    WBSParsecActionButton * _actionButton;
    WBSParsecAuxiliaryInfo * _auxiliaryInfo;
    NSArray * _descriptionRichTexts;
    NSString * _footnote;
    NSArray * _rowSections;
    NSString * _secondaryTitle;
    WBSParsecImageRepresentation * _secondaryTitleGlyph;
    WBSParsecImageRepresentation * _thumbnail;
    NSNumber * _titleMaximumLines;
}

@property (nonatomic, readonly) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property (nonatomic, readonly, copy) NSArray *descriptionRichTexts;
@property (nonatomic, readonly, copy) NSString *footnote;
@property (nonatomic, readonly) NSArray *rowSections;
@property (nonatomic, readonly, copy) NSString *secondaryTitle;
@property (nonatomic, readonly) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property (nonatomic, readonly) WBSParsecImageRepresentation *thumbnail;
@property (nonatomic, readonly) NSNumber *titleMaximumLines;

+ (id)_specializedSchema;

- (void).cxx_destruct;
- (id)actionButton;
- (id)auxiliaryInfo;
- (id)descriptionRichTexts;
- (id)footnote;
- (id)initWithDictionary:(id)arg1;
- (id)rowSections;
- (id)secondaryTitle;
- (id)secondaryTitleGlyph;
- (id)thumbnail;
- (id)thumbnailWithSession:(id)arg1;
- (id)titleMaximumLines;

@end
