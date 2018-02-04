/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSwitchRecipeMapping : NSObject {
    NSString * _action;
    AXReplayableGesture * _gesture;
    struct CGPoint { 
        double x; 
        double y; 
    }  _holdPoint;
    NSString * _longPressAction;
    AXReplayableGesture * _longPressGesture;
    bool  _optional;
    long long  _switchOriginalAction;
    NSUUID * _switchUUID;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, retain) AXReplayableGesture *gesture;
@property (nonatomic) struct CGPoint { double x1; double x2; } holdPoint;
@property (nonatomic, copy) NSString *longPressAction;
@property (nonatomic, retain) AXReplayableGesture *longPressGesture;
@property (getter=isOptional, nonatomic) bool optional;
@property (nonatomic) long long switchOriginalAction;
@property (nonatomic, copy) NSUUID *switchUUID;

+ (id)recipeMappingWithDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gesture;
- (struct CGPoint { double x1; double x2; })holdPoint;
- (id)init;
- (bool)isOptional;
- (id)longPressAction;
- (id)longPressGesture;
- (void)setAction:(id)arg1;
- (void)setGesture:(id)arg1;
- (void)setHoldPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLongPressAction:(id)arg1;
- (void)setLongPressGesture:(id)arg1;
- (void)setOptional:(bool)arg1;
- (void)setSwitchOriginalAction:(long long)arg1;
- (void)setSwitchUUID:(id)arg1;
- (long long)switchOriginalAction;
- (id)switchUUID;

@end