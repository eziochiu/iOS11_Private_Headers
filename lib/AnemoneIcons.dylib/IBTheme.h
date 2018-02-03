/* made by EzioChiu
   Image: /bootstrap/Library/SBInject/AnemoneIcons.dylib
 */

@interface IBTheme : NSObject {
    bool  _iconsArePrecomposed;
    NSString * _path;
}

@property (nonatomic) bool iconsArePrecomposed;
@property (nonatomic, readonly) NSString *path;

+ (void)resetThemes;

- (bool)iconsArePrecomposed;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setIconsArePrecomposed:(bool)arg1;

@end
