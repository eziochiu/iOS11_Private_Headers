/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject {
    struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id /* block */ x_2_1_1; id /* block */ x_2_1_2; id /* block */ x_2_1_3; id /* block */ x_2_1_4; id /* block */ x_2_1_5; id /* block */ x_2_1_6; } x2; id x3; } * _readListener;
    struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id /* block */ x_2_1_1; id /* block */ x_2_1_2; id /* block */ x_2_1_3; id /* block */ x_2_1_4; id /* block */ x_2_1_5; id /* block */ x_2_1_6; } x2; id x3; } * _writeListener;
}

- (void)dealloc;
- (id)init;
- (void)setReadListener:(struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id /* block */ x_2_1_1; id /* block */ x_2_1_2; id /* block */ x_2_1_3; id /* block */ x_2_1_4; id /* block */ x_2_1_5; id /* block */ x_2_1_6; } x2; id x3; }*)arg1;
- (void)setWriteListener:(struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id /* block */ x_2_1_1; id /* block */ x_2_1_2; id /* block */ x_2_1_3; id /* block */ x_2_1_4; id /* block */ x_2_1_5; id /* block */ x_2_1_6; } x2; id x3; }*)arg1;
- (bool)withListeners:(id /* block */)arg1;

@end
