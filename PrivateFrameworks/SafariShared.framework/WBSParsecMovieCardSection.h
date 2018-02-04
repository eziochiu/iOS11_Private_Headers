/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecMovieCardSection : WBSParsecCardSection {
    NSArray * _buyButtonSections;
    WBSParsecImageRepresentation * _imageRepresentation;
    WBSParsecImageRepresentation * _rottenTomatoesGlyphRepresentation;
    NSString * _rottenTomatoesText;
    NSArray * _sections;
}

@property (nonatomic, readonly, copy) NSArray *buyButtonSections;
@property (nonatomic, readonly) WBSParsecImageRepresentation *imageRepresentation;
@property (nonatomic, readonly) WBSParsecImageRepresentation *rottenTomatoesGlyphRepresentation;
@property (nonatomic, readonly, copy) NSString *rottenTomatoesText;
@property (nonatomic, readonly, copy) NSArray *sections;

+ (id)_specializedCardSectionSchema;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)buyButtonSections;
- (id)imageRepresentation;
- (id)rottenTomatoesGlyphRepresentation;
- (id)rottenTomatoesText;
- (id)sections;

@end
