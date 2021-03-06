/* made by EzioChiu.
 */

@protocol PTSHUDControl <NSObject>

@required

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrame;

- (int)alignment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)isEnabled;
- (void)setAlignment:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSettings:(_UISettings *)arg1;
- (void)setValueKeyPath:(NSString *)arg1;
- (_UISettings *)settings;
- (NSString *)valueKeyPath;

@end
