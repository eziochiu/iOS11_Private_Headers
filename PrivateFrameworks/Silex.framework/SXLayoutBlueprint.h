/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutBlueprint : NSObject <NSCopying> {
    NSMutableDictionary * _blueprint;
    struct CGSize { 
        double width; 
        double height; 
    }  _blueprintSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    SXComponentDependencyResolver * _dependencySolver;
    bool  _didPlaceDynamicAds;
    NSMutableDictionary * _flattenedBlueprint;
    NSMutableSet * _invalidatedComponents;
    bool  _isComplete;
    SXLayoutAttributes * _layoutAttributes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    NSMutableArray * _orderedComponentIdentifiers;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    SXLayoutBlueprint * _parentLayoutBlueprint;
    NSOrderedSet * _snapLines;
    bool  _updating;
}

@property (nonatomic, retain) NSMutableDictionary *blueprint;
@property (nonatomic) struct CGSize { double x1; double x2; } blueprintSize;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, retain) SXComponentDependencyResolver *dependencySolver;
@property (nonatomic, readonly) bool didPlaceDynamicAds;
@property (nonatomic, retain) NSMutableDictionary *flattenedBlueprint;
@property (nonatomic, retain) NSMutableSet *invalidatedComponents;
@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, retain) SXLayoutAttributes *layoutAttributes;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, retain) NSMutableArray *orderedComponentIdentifiers;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) SXLayoutBlueprint *parentLayoutBlueprint;
@property (nonatomic, retain) NSOrderedSet *snapLines;
@property (getter=isUpdating, nonatomic) bool updating;

- (void).cxx_destruct;
- (id)blueprint;
- (struct CGSize { double x1; double x2; })blueprintSize;
- (struct CGSize { double x1; double x2; })canvasSize;
- (id)componentBlueprintForComponentIdentifier:(id)arg1;
- (id)componentBlueprintForComponentIdentifier:(id)arg1 includeChildren:(bool)arg2;
- (id)componentIdentifiers;
- (id)componentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)containerComponentIdentifierContainingComponentWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dependencySolver;
- (id)description;
- (bool)didPlaceDynamicAds;
- (void)endUpdates;
- (id)flattenedBlueprint;
- (id)init;
- (void)invalidateBlueprint;
- (void)invalidateBlueprintPosition;
- (void)invalidateDependentsOfComponentNode:(id)arg1 forDependencyResolver:(id)arg2;
- (void)invalidateDependentsOfInvalidatedComponents;
- (void)invalidatePositionForComponentWithIdentifier:(id)arg1;
- (void)invalidateSizeForComponentWithIdentifier:(id)arg1;
- (void)invalidateSizeForComponentWithIdentifier:(id)arg1 suggestedSize:(struct CGSize { double x1; double x2; })arg2;
- (id)invalidatedComponents;
- (bool)isComplete;
- (bool)isUpdating;
- (id)layoutAttributes;
- (struct CGPoint { double x1; double x2; })offset;
- (id)orderedComponentIdentifiers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)parentLayoutBlueprint;
- (void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3;
- (void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)setBlueprint:(id)arg1;
- (void)setBlueprintSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDependencySolver:(id)arg1;
- (void)setFlattenedBlueprint:(id)arg1;
- (void)setInvalidatedComponents:(id)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOrderedComponentIdentifiers:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setParentLayoutBlueprint:(id)arg1;
- (void)setSnapLines:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (id)snapLines;
- (id)snapLinesIncludingChildren:(bool)arg1;
- (void)startUpdates;
- (void)storeComponentsFromBlueprint:(id)arg1 inDictionary:(id)arg2;
- (void)unregisterLayout:(id)arg1;
- (void)updatePosition:(struct CGPoint { double x1; double x2; })arg1 forComponentWithIdentifier:(id)arg2;
- (void)updateSize:(struct CGSize { double x1; double x2; })arg1 forComponentWithIdentifier:(id)arg2;

@end
