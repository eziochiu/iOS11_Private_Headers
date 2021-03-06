/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {
    UIKeyboardEmoji * _emoji;
    UILabel * _emojiLabel;
}

@property (nonatomic, copy) UIKeyboardEmoji *emoji;
@property (nonatomic) long long emojiFontSize;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)emoji;
- (long long)emojiFontSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEmoji:(id)arg1;
- (void)setEmojiFontSize:(long long)arg1;

@end
