/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendViewCache : NSObject <TSCHUnretainedParent> {
    unsigned long long  mCellCount;
    struct CGPoint { double x1; double x2; } * mCellOrigins;
    struct CGSize { 
        double width; 
        double height; 
    }  mFinalSize;
    TSCHLegendModelCache * mModelCache;
    unsigned long long  mNumberOfColumns;
    unsigned long long  mNumberOfRows;
}

@property (readonly) struct CGSize { double x1; double x2; } legendSize;
@property (readonly) unsigned long long numberOfColumns;
@property (readonly) unsigned long long numberOfRows;

- (void)clearParent;
- (void)dealloc;
- (id)initWithLegendModelCache:(id)arg1 legendWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })legendSize;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (struct CGPoint { double x1; double x2; })originForCell:(id)arg1;

@end