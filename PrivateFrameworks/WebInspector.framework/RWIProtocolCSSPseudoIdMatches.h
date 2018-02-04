/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *matches;
@property (nonatomic) int pseudoId;

- (id)initWithPseudoId:(int)arg1 matches:(id)arg2;
- (id)matches;
- (int)pseudoId;
- (void)setMatches:(id)arg1;
- (void)setPseudoId:(int)arg1;

@end
