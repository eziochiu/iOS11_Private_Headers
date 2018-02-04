/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeInfoPromise : NSObject <NSCopying> {
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
    }  _badgeInfo;
    id /* block */  _countProvider;
}

@property (nonatomic, readonly) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; } badgeInfo;

- (void).cxx_destruct;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })badgeInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1 countProvider:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;

@end