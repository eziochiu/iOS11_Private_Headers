/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailRowActionCell : NTKCDetailTableViewCell {
    bool  _showsTopSeparator;
    NTKCSeparatorView * _topSeparator;
}

@property (nonatomic) bool showsTopSeparator;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setShowsTopSeparator:(bool)arg1;
- (bool)showsTopSeparator;

@end
