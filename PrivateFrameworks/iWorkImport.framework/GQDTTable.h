/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTTable : GQDGraphic <GQDNameMappable> {
    bool  mIsStreamed;
    GQDTTableModel * mModel;
    GQDSStyle * mStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (id)defaultVectorStyleForVectorType:(int)arg1;
- (bool)isStreamed;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setTableStyle:(id)arg1;
- (id)tableStyle;
- (int)walkTableWithGenerator:(Class)arg1 state:(id)arg2;

@end