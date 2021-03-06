/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFilenameSmartField : TSWPPlaceholderSmartField {
    unsigned int  _displayFlags;
}

@property (nonatomic) unsigned int displayFlags;

- (bool)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (unsigned int)displayFlags;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setDisplayFlags:(unsigned int)arg1;
- (int)smartFieldKind;

@end
