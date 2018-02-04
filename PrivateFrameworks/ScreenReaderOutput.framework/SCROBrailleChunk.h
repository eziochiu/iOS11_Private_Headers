/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleChunk : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  __textFocus;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _brailleFocus;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _brailleSelection;
    NSMutableAttributedString * _brailleString;
    int  _contractionMode;
    bool  _hasTextSelection;
    bool  _isEditableText;
    bool  _isFocused;
    bool  _isPadding;
    bool  _isTechnical;
    NSString * _language;
    NSString * _originalText;
    NSString * _overrideText;
    NSMutableAttributedString * _pendingBraille;
    bool  _showDotsSevenAndEight;
    bool  _showEightDot;
    NSString * _text;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textSelection;
    long long  _token;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } _textFocus;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } brailleFocus;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } brailleSelection;
@property (nonatomic, retain) NSMutableAttributedString *brailleString;
@property (nonatomic, readonly) int contractionMode;
@property (nonatomic, readonly) NSMutableAttributedString *currentBrailleString;
@property (nonatomic, readonly) bool hasEdits;
@property (nonatomic) bool isEditableText;
@property (nonatomic) bool isPadding;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, copy) NSString *originalText;
@property (nonatomic, retain) NSMutableAttributedString *pendingBraille;
@property (nonatomic, readonly) bool shouldProvideReplacementRange;
@property (nonatomic, readonly) bool shouldTranslateNow;
@property (nonatomic, readonly) bool showEightDot;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, readonly) unsigned long long textLength;

+ (void)initialize;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_adjustedTextRangeForBrailleTranslation:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_beginEditing;
- (bool)_deleteSelectionOrRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 deletedText:(id*)arg2;
- (void)_endEditing;
- (void)_retranslateWithTextPositionsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_tableIdentifierForLanguage:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_textFocus;
- (void)_translateAsLiteraryTextWithPrimaryTable:(bool)arg1 textPositionsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_translateAsTechnicalTextWithPrimaryTable:(bool)arg1;
- (id)_translatePendingBraille;
- (void)_translateWithTextPositionsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })brailleFocus;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })brailleRangeForLocation:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })brailleSelection;
- (id)brailleString;
- (id)brailleWithIBeamLocation:(long long*)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 brailleOffset:(long long)arg3;
- (int)contractionMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentBrailleString;
- (bool)deleteAtCursorShouldTranslate:(out bool*)arg1 deletedText:(id*)arg2;
- (bool)deleteAtEndShouldTranslate:(out bool*)arg1 deletedText:(id*)arg2;
- (id)description;
- (void)discardEdits;
- (void)enumerateWordsBetweenCharacters:(id)arg1 text:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 usingBlock:(id /* block */)arg4;
- (bool)focused;
- (bool)forwardDeleteAtBeginningShouldTranslate:(out bool*)arg1;
- (bool)forwardDeleteAtCursorShouldTranslate:(out bool*)arg1;
- (bool)hasEdits;
- (bool)hasSelection;
- (bool)indexIsWithinWord:(unsigned long long)arg1;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 textFocus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 contractionMode:(int)arg6 showEightDot:(bool)arg7 showDotsSevenAndEight:(bool)arg8 isEditableText:(bool)arg9;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 textFocus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 contractionMode:(int)arg6 showEightDot:(bool)arg7 showDotsSevenAndEight:(bool)arg8 technical:(bool)arg9 isEditableText:(bool)arg10;
- (id)initWithText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 token:(long long)arg5 textFocus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6 contractionMode:(int)arg7 showEightDot:(bool)arg8 showDotsSevenAndEight:(bool)arg9 technical:(bool)arg10 isEditableText:(bool)arg11;
- (id)initWithText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 token:(long long)arg5 textFocus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6 contractionMode:(int)arg7 showEightDot:(bool)arg8 showDotsSevenAndEight:(bool)arg9 technical:(bool)arg10 isEditableText:(bool)arg11 isPadding:(bool)arg12;
- (void)insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2;
- (bool)isEditableText;
- (bool)isFocusedOrSelected;
- (bool)isPadding;
- (id)language;
- (unsigned long long)length;
- (long long)locationForIndex:(long long)arg1;
- (bool)moveCursorLeft;
- (bool)moveCursorRight;
- (bool)moveCursorTo:(unsigned long long)arg1;
- (id)originalText;
- (id)pendingBraille;
- (void)removeCursor;
- (void)setBrailleFocus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setBrailleString:(id)arg1;
- (void)setIsEditableText:(bool)arg1;
- (void)setIsPadding:(bool)arg1;
- (void)setOriginalText:(id)arg1;
- (void)setPendingBraille:(id)arg1;
- (void)setText:(id)arg1;
- (void)set_textFocus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)shouldProvideReplacementRange;
- (bool)shouldTranslateNow;
- (bool)showEightDot;
- (id)text;
- (unsigned long long)textLength;
- (long long)token;
- (void)translate;
- (id)translatedTextForBraille:(out id*)arg1 replacingTextInRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 cursor:(out unsigned long long*)arg3;

@end