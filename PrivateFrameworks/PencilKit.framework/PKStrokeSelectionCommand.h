/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKStrokeSelectionCommand : PKUndoCommand {
    NSUUID * _fromDrawingUUID;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _previousSelectionTransform;
    int  _selectionCommandType;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _selectionTransform;
    PKStrokeSelection * _strokeSelection;
    NSUUID * _toDrawingUUID;
}

@property (nonatomic, readonly) NSUUID *fromDrawingUUID;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } previousSelectionTransform;
@property (nonatomic, readonly) int selectionCommandType;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } selectionTransform;
@property (nonatomic, readonly) PKStrokeSelection *strokeSelection;
@property (nonatomic, readonly) NSUUID *toDrawingUUID;

+ (id)commandForDeselectingStrokes:(id)arg1 toDrawingUUID:(id)arg2 selectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 previousSelectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
+ (id)commandForMovingStrokes:(id)arg1 toDrawingUUID:(id)arg2 selectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 previousSelectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 fromDrawingUUID:(id)arg5;
+ (id)commandForSelectingStrokes:(id)arg1 toDrawingUUID:(id)arg2 selectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;

- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)description;
- (id)fromDrawingUUID;
- (id)initWithStrokes:(id)arg1 toDrawingUUID:(id)arg2 actionName:(id)arg3 commandSelectionType:(int)arg4 selectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 previousSelectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6 fromDrawingUUID:(id)arg7;
- (id)inverted;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })previousSelectionTransform;
- (void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (int)selectionCommandType;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })selectionTransform;
- (id)strokeSelection;
- (id)toDrawingUUID;

@end