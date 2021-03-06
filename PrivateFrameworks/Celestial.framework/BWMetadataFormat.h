/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } * _desc;
}

+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
+ (void)initialize;

- (id)_initWithMetadataFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned int)mediaType;

@end
