/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface WebThreadSafeUndoManager : NSUndoManager

- (bool)_alwaysShowEditAlertView;
- (void)redo;
- (void)undo;

@end