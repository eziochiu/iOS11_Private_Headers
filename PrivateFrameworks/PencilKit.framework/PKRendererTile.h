/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKRendererTile : CALayer {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _drawingFrame;
    long long  _level;
    bool  _outOfDate;
    long long  _renderCount;
    NSArray * _renderedStrokes;
    PKRendererController * _rendererController;
    long long  _yOffset;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawingFrame;
@property (nonatomic, readonly) long long level;
@property bool outOfDate;
@property (readonly) long long renderCount;
@property (nonatomic, retain) NSArray *renderedStrokes;
@property PKRendererController *rendererController;
@property (nonatomic, readonly) long long yOffset;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameForLevel:(long long)arg1 yOffset:(long long)arg2 frameScale:(double)arg3;
+ (double)tileHeightForLevel:(long long)arg1 scale:(double)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingFrame;
- (id)initWithLevel:(long long)arg1 yOffset:(long long)arg2 frameScale:(double)arg3;
- (long long)level;
- (bool)outOfDate;
- (long long)renderCount;
- (id)renderedStrokes;
- (id)rendererController;
- (void)setOutOfDate:(bool)arg1;
- (void)setRenderedStrokes:(id)arg1;
- (void)setRendererController:(id)arg1;
- (id)splitForScale:(double)arg1;
- (void)update;
- (void)updateFrameForScale:(double)arg1;
- (long long)yOffset;

@end
