/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailItemFolderOperation : DOCThumbnailBaseOperation {
    unsigned long long  _folderType;
}

@property (nonatomic) unsigned long long folderType;

+ (id)synchronousFolderIconForItemFolderType:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4;

- (unsigned long long)folderType;
- (bool)generateThumbnail:(id*)arg1 representativeIcon:(bool*)arg2;
- (id)initWithItemFolderType:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 delegate:(id)arg4 style:(unsigned long long)arg5 qos:(unsigned int)arg6;
- (void)setFolderType:(unsigned long long)arg1;

@end