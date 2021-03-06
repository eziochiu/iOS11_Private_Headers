/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface> {
    bool  _abandonedMarkingEnabled;
    NSString * _binaryImagesDescription;
    struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; } * _blocks;
    unsigned int  _blocksCount;
    unsigned int  _blocksSize;
    unsigned long long  _cfPasteboardReservedBase;
    VMUClassInfoMap * _classInfoIndexer;
    id * _classInfos;
    unsigned int  _classInfosCount;
    VMUDebugTimer * _debugTimer;
    bool  _exactScanningEnabled;
    /* Warning: unhandled struct encoding: '{_VMUInstanceValues=Q@}' */ struct _VMUInstanceValues { unsigned long long x1; id x2; } * _instanceValues;
    unsigned int  _instanceValuesCount;
    unsigned int  _instanceValuesSize;
    unsigned long long  _maxInteriorOffset;
    id /* block */  _nodeLogger;
    VMUObjectIdentifier * _objectIdentifier;
    int  _pid;
    NSString * _processDescriptionString;
    NSString * _processName;
    VMUProcessObjectGraph * _processObjectGraph;
    id /* block */  _referenceLogger;
    VMUVMRegionIdentifier * _regionIdentifier;
    struct _VMURegionMap { void *x1; struct _VMURegionNode {} *x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned int x6[0]; } * _regionMap;
    struct _VMURegionNode { id x1; void x2; unsigned long long x3; struct _VMURegionNode {} *x4; struct { /* ? */ } *x5; unsigned int x6; unsigned long long x7; unsigned long long x8; } * _regions;
    unsigned int  _regionsCount;
    bool  _saveNodeLabelsInGraph;
    struct _VMUScanLocationCache {} ** _scanCaches;
    unsigned int  _scanningMask;
    VMURangeArray * _stackRanges;
    unsigned long long  _suspendTime;
    unsigned int  _suspensionToken;
    unsigned int  _task;
    struct _VMUThreadNode { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned long long *x4; } * _threads;
    unsigned int  _threadsCount;
    void * _userMarkedAbandoned;
    NSMutableArray * _zoneNames;
    struct _VMUZoneNode { unsigned long long x1; id x2; struct malloc_introspection_t {} x3; } * _zones;
    unsigned int  _zonesCount;
    unsigned int  _zonesSize;
}

@property (nonatomic) bool abandonedMarkingEnabled;
@property (nonatomic, readonly) NSString *binaryImagesDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) VMUDebugTimer *debugTimer;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool exactScanningEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int mallocNodeCount;
@property (nonatomic) unsigned long long maxInteriorOffset;
@property (nonatomic, readonly) unsigned int nodeCount;
@property (nonatomic, readonly) unsigned int nodeNamespaceSize;
@property (nonatomic, readonly) VMUObjectIdentifier *objectIdentifier;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processDescriptionString;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic, readonly) unsigned int regionCount;
@property (nonatomic) bool saveNodeLabelsInGraph;
@property (nonatomic) unsigned int scanningMask;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int task;
@property (nonatomic, readonly) unsigned int vmPageSize;
@property (nonatomic, readonly) unsigned int zoneCount;

+ (void)initialize;
+ (id)nodeDescription:(/* Warning: unhandled struct encoding: '{?=Qb60b4@}' */ struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })arg1 withNodeOffset:(unsigned long long)arg2 sortedVMRegions:(id)arg3;
+ (id)referenceDescription:(struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })arg1 withSourceNode:(/* Warning: unhandled struct encoding: '{?=Qb60b4@}' */ struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })arg2 destinationNode:(/* Warning: unhandled struct encoding: '{?=Qb60b4@}' */ struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })arg3 sortedVMRegions:(id)arg4 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg5 alignmentSpacing:(unsigned int)arg6;

- (void).cxx_destruct;
- (void)_buildRegionPageBlockMaps;
- (void)_callRemoteMallocEnumerators:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)_destroyLinearClassInfos;
- (void)_findMarkedAbandonedBlocks;
- (void)_fixupBlockIsas;
- (id)_initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (void)_orderedScanWithScanner:(id /* block */)arg1 recorder:(id /* block */)arg2 keepMapped:(bool)arg3 actions:(id /* block */)arg4;
- (unsigned int)_removeFalsePositiveLeakedVMregionsFromNodes:(unsigned int*)arg1 nodeCount:(unsigned int)arg2 recorder:(id /* block */)arg3;
- (void)_sortAndClassifyBlocks;
- (void)_sortBlocks;
- (bool)_suspend;
- (void)_updateLinearClassInfos;
- (void)_withMemoryReaderBlock:(id /* block */)arg1;
- (void)_withOrderedNodeMapper:(id /* block */)arg1;
- (void)_withScanningContext:(id /* block */)arg1;
- (bool)abandonedMarkingEnabled;
- (void)addMallocNodes:(id)arg1;
- (void)addMallocNodesFromTask;
- (void)addRootNodesFromTask;
- (id)binaryImagesDescription;
- (id)classInfoForObjectAtAddress:(unsigned long long)arg1;
- (void*)contentForNode:(unsigned int)arg1;
- (void*)copyUserMarked;
- (void)dealloc;
- (id)debugTimer;
- (void)detachFromTask;
- (unsigned int)enumerateMarkedObjects:(void*)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateNodesWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateObjectsWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateReferencesWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateRegionsWithBlock:(id /* block */)arg1;
- (bool)exactScanningEnabled;
- (bool)hasLabelsForNodes;
- (id)initWithSelfTaskAndOptions:(unsigned long long)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)labelForNode:(unsigned int)arg1;
- (unsigned int)mallocNodeCount;
- (void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2;
- (unsigned long long)maxInteriorOffset;
- (unsigned int)nodeCount;
- (id)nodeDescription:(unsigned int)arg1;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (/* Warning: unhandled struct encoding: '{?=Qb60b4@}' */ struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })nodeDetails:(unsigned int)arg1;
- (unsigned int)nodeNamespaceSize;
- (id)objectIdentifier;
- (void)orderedNodeTraversal:(int)arg1 withBlock:(id /* block */)arg2;
- (int)pid;
- (id)processDescriptionString;
- (id)processName;
- (id)processSnapshotGraph;
- (id)processSnapshotGraphWithMallocStackLogs:(bool)arg1;
- (id)realizedClasses;
- (id)referenceDescription:(struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg4 alignmentSpacing:(unsigned int)arg5;
- (void)refineTypesWithOverlay:(id)arg1;
- (unsigned int)regionCount;
- (void)removeRootReachableNodes;
- (bool)saveNodeLabelsInGraph;
- (void)scanNodesForReferences:(id /* block */)arg1;
- (unsigned int)scanningMask;
- (void)setAbandonedMarkingEnabled:(bool)arg1;
- (void)setDebugTimer:(id)arg1;
- (void)setExactScanningEnabled:(bool)arg1;
- (void)setMaxInteriorOffset:(unsigned long long)arg1;
- (void)setNodeScanningLogger:(id /* block */)arg1;
- (void)setReferenceScanningLogger:(id /* block */)arg1;
- (void)setSaveNodeLabelsInGraph:(bool)arg1;
- (void)setScanningMask:(unsigned int)arg1;
- (unsigned int)task;
- (bool)validateAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned int)vmPageSize;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (unsigned int)zoneCount;
- (id)zoneNameForIndex:(unsigned int)arg1;
- (id)zoneNameForNode:(unsigned int)arg1;

@end
