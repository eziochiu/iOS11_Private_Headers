/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGroupInfo : TSDDrawableInfo <TSDMixing, TSDMutableContainerInfo, TSDSelectionStatisticsContributor, TSKDocumentObject> {
    NSMutableArray * mChildInfos;
    bool  mIsInDocument;
}

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;

+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3;
+ (id)groupGeometryFromChildrenInfos:(id)arg1;
+ (id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(bool*)arg4;

- (void)acceptVisitor:(id)arg1;
- (void)addChildInfo:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allNestedChildrenInfos;
- (id)allNestedChildrenInfosIncludingGroups;
- (bool)aspectRatioLocked;
- (bool)canAspectRatioLockBeChangedByUser;
- (id)childEnumerator;
- (id)childInfos;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)didCopy;
- (void)ensureGeometryFitsChildren;
- (id)geometry;
- (id)groupedGeometryForChildInfo:(id)arg1;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (Class)layoutClass;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (id)onlyChild;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (void)removeAllChildrenInDocument:(bool)arg1;
- (void)removeChildInfo:(id)arg1;
- (Class)repClass;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)setChildInfos:(id)arg1;
- (void)setGeometry:(id)arg1;
- (id)ungroupedGeometryForChildInfo:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end