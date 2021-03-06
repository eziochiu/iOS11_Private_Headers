/* made by EzioChiu.
 */

@protocol _UIFocusRegionContainer <_UIFocusEnvironmentPrivate>

@required

- (<UICoordinateSpace> *)_preferredFocusRegionCoordinateSpace;
- (_UIFocusRegion *)_regionForFocusedItem:(id <UIFocusItem>)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (void)_searchForFocusRegionsInContext:(id <_UIFocusRegionSearchContext>)arg1;

@end
