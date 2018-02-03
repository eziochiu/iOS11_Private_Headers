/* made by EzioChiu.
 */

@protocol NSISConstraint <NSISVariableDelegate>

@required

- (id)firstItem;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(NSISVariable *)arg1;
- (id)secondItem;

@end
