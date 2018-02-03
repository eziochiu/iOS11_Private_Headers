/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionLayoutGeometry : NSObject <NSCopying> {
    NSMutableArray * _groupBookmarks;
    _UICollectionViewGeometricIndexer * _groupBookmarksGeometricIndexer;
    NSArray * _groups;
    bool  _isPrepared;
    struct CGSize { 
        double width; 
        double height; 
    }  _preparedContentSize;
    long long  _preparedFrameCount;
}

@property (nonatomic, retain) NSMutableArray *groupBookmarks;
@property (nonatomic, retain) _UICollectionViewGeometricIndexer *groupBookmarksGeometricIndexer;
@property (nonatomic, retain) NSArray *groups;
@property (nonatomic) bool isPrepared;
@property (nonatomic) struct CGSize { double x1; double x2; } preparedContentSize;
@property (nonatomic) long long preparedFrameCount;

+ (id)geometryWithGroupConfigurations:(id)arg1;
+ (id)geometryWithGroups:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareWithContainerDimensions:(struct CGSize { double x1; double x2; })arg1 layoutAxis:(int)arg2 sizeProvider:(id)arg3 consumeAllFrames:(bool)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(long long)arg1 applyingOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)framesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 applyingOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)groupBookmarks;
- (id)groupBookmarksGeometricIndexer;
- (id)groups;
- (id)initWithGroups:(id)arg1;
- (bool)isPrepared;
- (void)prepareWithContainerDimensions:(struct CGSize { double x1; double x2; })arg1 layoutAxis:(int)arg2 sizeProvider:(id)arg3;
- (struct CGSize { double x1; double x2; })preparedContentSize;
- (long long)preparedFrameCount;
- (void)reset;
- (void)setGroupBookmarks:(id)arg1;
- (void)setGroupBookmarksGeometricIndexer:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setIsPrepared:(bool)arg1;
- (void)setPreparedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreparedFrameCount:(long long)arg1;

@end