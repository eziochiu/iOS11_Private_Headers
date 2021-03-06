/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArchivedAutofillSelection : TSPObject <TSKArchivedSelection> {
    TSTAutofillSelection * _autofillSelection;
}

@property (nonatomic, retain) TSTAutofillSelection *autofillSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSKSelection *selection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)autofillSelection;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setAutofillSelection:(id)arg1;
- (void)setSelection:(id)arg1;

@end
