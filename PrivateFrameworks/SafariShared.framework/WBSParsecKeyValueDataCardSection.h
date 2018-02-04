/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecKeyValueDataCardSection : WBSParsecCardSection {
    WBSParsecImageRepresentation * _accessoryImageRepresentation;
    NSArray * _keys;
    NSArray * _values;
}

@property (nonatomic, readonly, copy) WBSParsecImageRepresentation *accessoryImageRepresentation;
@property (nonatomic, readonly, copy) NSArray *keys;
@property (nonatomic, readonly, copy) NSArray *values;

+ (id)_specializedCardSectionSchema;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)accessoryImageRepresentation;
- (id)keys;
- (id)values;

@end
