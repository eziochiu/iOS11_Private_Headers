/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface BubbleTextLayer : CALayer {
    NSMutableArray * _annotationPoints;
    double  _ascent;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSizeConstraint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bubbleFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _bubbleSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct __CTFont { } * _curCTFont;
    double  _descent;
    void * _font;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fontBounds;
    struct CGColor { } * _generalShadowColor;
    double  _leading;
    CALayer * _leftImageLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _leftImageLayerSize;
    id  _owningView;
    CALayer * _rightAccessoryLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _rightAccessoryLayerSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _textSize;
    struct __CTLine { } * _theLine;
    struct CGColor { } * _whiteShadowColor;
}

@property (nonatomic) struct CGSize { double x1; double x2; } boundsSizeConstraint;
@property (nonatomic, retain) struct CGColor { }*fillColor;
@property (nonatomic, retain) struct CGColor { }*fillColor2;
@property (nonatomic) double fontSize;
@property (nonatomic, retain) struct CGColor { }*foregroundColor;
@property (nonatomic, retain) struct CGColor { }*frameColor;
@property (nonatomic) double frameWidth;
@property (nonatomic, retain) struct CGImage { }*image;
@property (nonatomic) id owningView;
@property (nonatomic, retain) CALayer *rightAccessoryLayer;
@property (nonatomic, retain) id string;
@property (nonatomic, readonly) double textBaselineOffset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textFrame;

+ (bool)needsDisplayForKey:(id)arg1;

- (void)addAnnotationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })boundsSizeConstraint;
- (struct CGSize { double x1; double x2; })calculatePreferredSubframeSizes;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGSize { double x1; double x2; })getImagePreferredSize;
- (struct CGSize { double x1; double x2; })getRightAccessoryLayerPreferredSize;
- (struct CGImage { }*)image;
- (id)initWithOwningView:(id)arg1;
- (bool)isAnnotationBubble;
- (void)layoutSublayers;
- (id)owningView;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (id)rightAccessoryLayer;
- (void)setBoundsSizeConstraint:(struct CGSize { double x1; double x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setOwningView:(id)arg1;
- (void)setRightAccessoryLayer:(id)arg1;
- (double)textBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFrame;
- (struct CGSize { double x1; double x2; })textPreferredFrameSizeForLayerSize:(struct CGSize { double x1; double x2; })arg1;

@end