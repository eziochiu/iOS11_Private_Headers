/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecDescriptionCardSection : WBSParsecCardSection {
    bool  _descriptionCanBeExpanded;
    NSString * _descriptionExpandText;
    NSNumber * _descriptionMaximumNumberOfLines;
    NSNumber * _descriptionSize;
    NSString * _descriptionText;
    NSNumber * _descriptionWeight;
    WBSParsecImageRepresentation * _image;
    long long  _imageAlignment;
    NSString * _titleText;
    bool  _titleTextCanWrap;
    NSNumber * _titleWeight;
}

@property (nonatomic, readonly) bool descriptionCanBeExpanded;
@property (nonatomic, readonly, copy) NSString *descriptionExpandText;
@property (nonatomic, readonly) NSNumber *descriptionMaximumNumberOfLines;
@property (nonatomic, readonly) NSNumber *descriptionSize;
@property (nonatomic, readonly, copy) NSString *descriptionText;
@property (nonatomic, readonly) NSNumber *descriptionWeight;
@property (nonatomic, readonly) WBSParsecImageRepresentation *image;
@property (nonatomic, readonly) long long imageAlignment;
@property (nonatomic, readonly, copy) NSString *titleText;
@property (nonatomic, readonly) bool titleTextCanWrap;
@property (nonatomic, readonly) NSNumber *titleWeight;

+ (id)_specializedCardSectionSchema;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (bool)descriptionCanBeExpanded;
- (id)descriptionExpandText;
- (id)descriptionMaximumNumberOfLines;
- (id)descriptionSize;
- (id)descriptionText;
- (id)descriptionWeight;
- (id)image;
- (long long)imageAlignment;
- (id)titleText;
- (bool)titleTextCanWrap;
- (id)titleWeight;

@end