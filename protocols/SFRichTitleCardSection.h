/* made by EzioChiu.
 */

@protocol SFRichTitleCardSection <SFTitleCardSection>

@required

- (NSNumber *)auxiliaryAlignment;
- (NSString *)auxiliaryBottomText;
- (int)auxiliaryBottomTextColor;
- (NSString *)auxiliaryMiddleText;
- (NSString *)auxiliaryTopText;
- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSString *)contentAdvisory;
- (NSString *)descriptionText;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (bool)hideVerticalDivider;
- (SFImage *)imageOverlay;
- (bool)isCentered;
- (NSData *)jsonData;
- (NSArray *)moreGlyphs;
- (NSArray *)offers;
- (SFActionItem *)playAction;
- (int)playActionAlign;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (NSNumber *)rating;
- (NSString *)ratingText;
- (SFImage *)reviewGlyph;
- (bool)reviewNewLine;
- (NSString *)reviewText;
- (int)separatorStyle;
- (void)setAuxiliaryAlignment:(NSNumber *)arg1;
- (void)setAuxiliaryBottomText:(NSString *)arg1;
- (void)setAuxiliaryBottomTextColor:(int)arg1;
- (void)setAuxiliaryMiddleText:(NSString *)arg1;
- (void)setAuxiliaryTopText:(NSString *)arg1;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setContentAdvisory:(NSString *)arg1;
- (void)setDescriptionText:(NSString *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHideVerticalDivider:(bool)arg1;
- (void)setImageOverlay:(SFImage *)arg1;
- (void)setIsCentered:(bool)arg1;
- (void)setMoreGlyphs:(NSArray *)arg1;
- (void)setOffers:(NSArray *)arg1;
- (void)setPlayAction:(SFActionItem *)arg1;
- (void)setPlayActionAlign:(int)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setRating:(NSNumber *)arg1;
- (void)setRatingText:(NSString *)arg1;
- (void)setReviewGlyph:(SFImage *)arg1;
- (void)setReviewNewLine:(bool)arg1;
- (void)setReviewText:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setThumbnailCropCircle:(bool)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTitleAlign:(int)arg1;
- (void)setTitleImage:(SFImage *)arg1;
- (void)setTitleNoWrap:(bool)arg1;
- (void)setTitleWeight:(NSNumber *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)subtitle;
- (bool)thumbnailCropCircle;
- (NSString *)title;
- (int)titleAlign;
- (SFImage *)titleImage;
- (bool)titleNoWrap;
- (NSNumber *)titleWeight;
- (NSString *)type;

@end