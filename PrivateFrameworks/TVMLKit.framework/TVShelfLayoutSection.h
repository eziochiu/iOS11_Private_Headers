/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVShelfLayoutSection : NSObject {
    NSArray * _itemFrames;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _itemsBoundingFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sectionHeaderFrame;
    double  _sectionHeaderHorizontalOffset;
    double  _sectionHeaderVerticalBump;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
}

@property (nonatomic, retain) NSArray *itemFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } itemsBoundingFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sectionHeaderFrame;
@property (nonatomic) double sectionHeaderHorizontalOffset;
@property (nonatomic) double sectionHeaderVerticalBump;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;

- (void).cxx_destruct;
- (id)itemFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemsBoundingFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sectionHeaderFrame;
- (double)sectionHeaderHorizontalOffset;
- (double)sectionHeaderVerticalBump;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setItemFrames:(id)arg1;
- (void)setItemsBoundingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSectionHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSectionHeaderHorizontalOffset:(double)arg1;
- (void)setSectionHeaderVerticalBump:(double)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
