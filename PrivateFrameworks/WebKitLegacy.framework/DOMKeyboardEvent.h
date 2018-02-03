/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMKeyboardEvent : DOMUIEvent

@property (readonly) bool altGraphKey;
@property (readonly) bool altKey;
@property (readonly) int charCode;
@property (readonly) bool ctrlKey;
@property (readonly) int keyCode;
@property (readonly, copy) NSString *keyIdentifier;
@property (readonly) unsigned int keyLocation;
@property (readonly) unsigned int location;
@property (readonly) bool metaKey;
@property (readonly) bool shiftKey;

- (bool)altGraphKey;
- (bool)altKey;
- (int)charCode;
- (bool)ctrlKey;
- (bool)getModifierState:(id)arg1;
- (void)initKeyboardEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(bool)arg7 altKey:(bool)arg8 shiftKey:(bool)arg9 metaKey:(bool)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(bool)arg7 altKey:(bool)arg8 shiftKey:(bool)arg9 metaKey:(bool)arg10 altGraphKey:(bool)arg11;
- (void)initKeyboardEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(bool)arg7 altKey:(bool)arg8 shiftKey:(bool)arg9 metaKey:(bool)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(bool)arg7 altKey:(bool)arg8 shiftKey:(bool)arg9 metaKey:(bool)arg10 altGraphKey:(bool)arg11;
- (int)keyCode;
- (id)keyIdentifier;
- (unsigned int)keyLocation;
- (unsigned int)location;
- (bool)metaKey;
- (bool)shiftKey;

@end