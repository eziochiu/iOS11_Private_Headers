/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutXAxisAnchor : NSLayoutAnchor

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (long long)_directionAbstraction;
- (bool)_validateOtherXAxisAnchorDirectionAbstraction:(long long)arg1;
- (id)anchorByOffsettingWithConstant:(double)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)anchorWithOffsetToAnchor:(id)arg1;
- (id)distanceTo:(id)arg1;
- (bool)isCompatibleWithAnchor:(id)arg1;
- (id)offsetBy:(double)arg1;
- (id)offsetByDimension:(id)arg1;
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;
- (id)offsetTo:(id)arg1;
- (bool)validateOtherAttribute:(long long)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)_constraintAfterAnchor:(id)arg1 relation:(long long)arg2 multiplier:(double)arg3;
- (id)constraintEqualToSystemSpacingAfterAnchor:(id)arg1;
- (id)constraintEqualToSystemSpacingAfterAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintGreaterThanOrEqualToSystemSpacingAfterAnchor:(id)arg1;
- (id)constraintGreaterThanOrEqualToSystemSpacingAfterAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintLessThanOrEqualToSystemSpacingAfterAnchor:(id)arg1;
- (id)constraintLessThanOrEqualToSystemSpacingAfterAnchor:(id)arg1 multiplier:(double)arg2;

@end