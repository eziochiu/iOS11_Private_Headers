/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendModelCache : NSObject {
    unsigned long long  mCellCount;
    NSArray * mCells;
    double  mEffectiveStrokeWidth;
    id  mFill;
    double  mHorizontalCellSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  mLargestCellSize;
    TSCHLegendViewCache * mLastLegendViewCache;
    double  mLastLegendWidth;
    bool  mLegendOn;
    TSCHLegendCellMetrics * mMetrics;
    double  mOpacity;
    TSWPParagraphStyle * mParagraphStyle;
    bool  mReverseSingleColumnLegendOrder;
    TSDShadow * mShadow;
    TSDStroke * mStroke;
    double  mSymbolGap;
    double  mVerticalCellSpacing;
}

@property (readonly) unsigned long long cellCount;
@property (readonly) NSArray *cells;
@property (readonly) double effectiveStrokeWidth;
@property (readonly) id fill;
@property (readonly) double horizontalCellSpacing;
@property (readonly) struct CGSize { double x1; double x2; } largestCellSize;
@property (readonly) bool legendOn;
@property (readonly) double opacity;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) bool reverseSingleColumnLegendOrder;
@property (readonly) TSDShadow *shadow;
@property (readonly) TSDStroke *stroke;
@property (readonly) double symbolGap;
@property (readonly) double verticalCellSpacing;

- (unsigned long long)cellCount;
- (id)cellForSeriesIndex:(unsigned long long)arg1 cellType:(int)arg2;
- (id)cells;
- (void)dealloc;
- (double)effectiveStrokeWidth;
- (id)fill;
- (double)horizontalCellSpacing;
- (id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2;
- (struct CGSize { double x1; double x2; })largestCellSize;
- (bool)legendOn;
- (double)opacity;
- (id)paragraphStyle;
- (bool)reverseSingleColumnLegendOrder;
- (id)shadow;
- (id)stroke;
- (double)symbolGap;
- (double)verticalCellSpacing;
- (id)viewCacheForWidth:(double)arg1;

@end