/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIMappedImageCacheOptions : NSObject <NSCopying> {
    <BSPathProviding> * _containerPathProvider;
}

@property (nonatomic, retain) <BSPathProviding> *containerPathProvider;

+ (id)optionsWithContainerPathProvider:(id)arg1;

- (id)containerPathProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setContainerPathProvider:(id)arg1;

@end
