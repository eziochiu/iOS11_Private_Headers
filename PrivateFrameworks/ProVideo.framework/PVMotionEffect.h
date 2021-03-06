/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVMotionEffect : PVEffect {
    struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; } * _buildInEnableChan;
    struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; } * _buildOutEnableChan;
    bool  _cachedPosterTime;
    NSMutableDictionary * _cachedPublishedParams;
    NSArray * _defaultAttributedStrings;
    double  _docDurInSeconds;
    struct _OZXDocumentInfo { 
        unsigned int _hasVideo; 
        unsigned int _width; 
        unsigned int _height; 
        unsigned int _bitsPerComponent; 
        unsigned int _components; 
        unsigned int _frames; 
        double _frameRate; 
        unsigned int _isNTSC; 
        double _pixelAspectRatio; 
        unsigned int _fieldOrder; 
        unsigned int _audioChannels; 
        unsigned int _audioBytesPerSample; 
        double _audioSampleRate; 
        unsigned int _hasAudio; 
        unsigned int _unused[16]; 
    }  _docInfo;
    int  _docLoadStatus;
    void * _document;
    NSLock * _documentLock;
    struct CGSize { 
        double width; 
        double height; 
    }  _documentSize;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > { struct __tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * _dropZoneIndexToID;
    unsigned int  _effectIndex;
    struct FigTime { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } _t; 
    }  _loopTime;
    struct FigTime { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } _t; 
    }  _motionPosterTime;
    bool  _needsCrop;
    unsigned int  _numInputs;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderStartOffset;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; } * _textObjectIDs;
    struct METimeRemap { 
        struct FigTime { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } _t; 
        } _introDuration; 
        struct FigTime { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } _t; 
        } _outroDuration; 
        struct FigTime { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } _t; 
        } _scaleableDuration; 
        bool _isIntroOptional; 
        bool _isOutroOptional; 
        bool _isStartTimeAligned; 
        bool _isEndTimeAligned; 
        bool _isLoop; 
        bool _forceDisableLoop; 
        bool _forceDisableBuildAnimation; 
        struct OZChannelBool {} *_pBuildInEnableChan; 
        struct OZChannelBool {} *_pBuildOutEnableChan; 
    }  _timeRemap;
}

@property (nonatomic, retain) NSMutableDictionary *cachedPublishedParams;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } documentSize;
@property (nonatomic) struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; } loopTime;

+ (id)_bundleLibPaths;
+ (id)_effectPathFromID:(id)arg1;
+ (id)_userLibPaths;
+ (void)cleanupEffectsCache;
+ (void)clearPreviewStats;
+ (id)effectMap;
+ (void)extractMetadataFromContentsOfFile:(id)arg1 toCacheEntry:(id)arg2;
+ (void)initializeMotion;
+ (void)initializeMotionInternal;
+ (struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })liveTitlePickerLoopTime;
+ (void)mapTemplatesInDirectory:(id)arg1 doingRescan:(bool)arg2 origCache:(id)arg3 newCache:(id)arg4;
+ (id)newEffectWithData:(id)arg1;
+ (id)newEffectWithURL:(id)arg1;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)noteApplicationWillTerminate;
+ (void)registerEffects;
+ (void)registerNoneEffectForType:(id)arg1 effectID:(id)arg2 origCache:(id)arg3 newCache:(id)arg4;
+ (void)registerTemplateInDirectory:(id)arg1 relPath:(id)arg2 effectID:(id)arg3 doingRescan:(bool)arg4 origCache:(id)arg5 newCache:(id)arg6;
+ (bool)replacedMappedEffectWithNewPath:(id)arg1;
+ (void)scanTemplatesInDirectory:(id)arg1 doingRescan:(bool)arg2 replaceMappedEffectPath:(bool)arg3 origCache:(id)arg4 newCache:(id)arg5;
+ (void)setLiveTitlePickerLoopTime:(struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })_posterTimeOrMotionTimeFromComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 effectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (bool)_supportsParam:(id)arg1;
- (struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)_textObjectIDs;
- (int)_worldSpaceImagePoints:(struct CGPoint { double x1; double x2; }*)arg1 objectID:(unsigned int)arg2 motionTime:(const struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; }*)arg3 componentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 includeDropShadow:(bool)arg5;
- (void)adjustCutawayBorder:(id)arg1;
- (void)adjustCutawayFadeAnimation:(id)arg1;
- (void)adjustCutawayInputs:(struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 renderScale:(float)arg2 pipNeedsCrop:(bool)arg3;
- (void)adjustKenBurnsAnimation:(id)arg1;
- (void)adjustPosition:(id)arg1;
- (void)adjustShapeVertices:(id)arg1;
- (void)adjustTransitionInputs:(struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 renderScale:(float)arg2 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer {} *x1; }*)arg3;
- (void)applyConcatenatedTLGroupAndClipTransforms:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)applyConcatenatedTLGroupAndClipTransformsNoLock:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)applyInspectableProperties;
- (void)buildDropZoneIdMap;
- (id)cachedPublishedParams;
- (void)clearTranscription;
- (void)computeIntroOutroPoints;
- (void)computeLoopMarkerBasedOnTranscription;
- (void)dealloc;
- (id)defaultAttributedString:(unsigned long long)arg1;
- (void)disableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })documentSize;
- (id)effectParameters;
- (void)enableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (bool)hasEmojiRenderingWorkaround;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })hgNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputs:(const struct PVInputHGNodeMap<unsigned int> { struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg2 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer {} *x1; }*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (void)imagePoints:(struct CGPoint { double x1; double x2; }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 includeDropShadow:(bool)arg3;
- (void)imagePointsAtPosterFrameTime:(struct CGPoint { double x1; double x2; }*)arg1 componentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 includeDropShadow:(bool)arg3;
- (id)initWithEffectID:(id)arg1;
- (bool)isSingleWordTranscription;
- (bool)isSketch;
- (bool)isTextFlipped;
- (bool)isTranscription;
- (void)loadDocument;
- (void)loadEffect;
- (void)loadEffectInternal;
- (struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })loopTime;
- (struct HGRect { int x1; int x2; int x3; int x4; })makeCropRectForDOD:(struct HGRect { int x1; int x2; int x3; int x4; })arg1 renderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 renderScale:(float)arg3;
- (struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })motionTimeFromComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 effectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (int)numberOfInputsHint;
- (int)orientation;
- (int)origin;
- (struct CGSize { double x1; double x2; })outputSize;
- (int)posterFrameTime:(struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; }*)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })previewHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputHGNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderer:(struct HGRenderer { int (**x1)(); unsigned int x2; struct HGNode {} *x3; struct HGBitmap {} *x4; struct HGRendererTextureUnit { struct HGBitmap {} *x_5_1_1; struct HGTransform {} *x_5_1_2; int x_5_1_3; } x5[8]; struct vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_6_1_1; struct DepthBufferManager {} **x_6_1_2; struct __compressed_pair<DepthBufferManager **, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_3_2_1; } x_6_1_3; } x6; struct vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_7_1_1; struct HGExecutionUnit {} **x_7_1_2; struct __compressed_pair<HGExecutionUnit **, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_3_2_1; } x_7_1_3; } x7; struct HGExecutionData {} *x8; struct HGSyncData {} *x9; struct _opaque_pthread_rwlock_t { long long x_10_1_1; BOOL x_10_1_2[192]; } x10; struct _opaque_pthread_mutex_t { long long x_11_1_1; BOOL x_11_1_2[56]; } x11; struct HGLUTCacheManager {} *x12; }*)arg4;
- (id)projectURL;
- (id)publishedParams;
- (void)releaseResources;
- (void)resetToDefaultTranscription;
- (void)setBuildInEnabled:(bool)arg1;
- (void)setBuildOutEnabled:(bool)arg1;
- (void)setCachedPublishedParams:(id)arg1;
- (void)setEffectParameters:(id)arg1;
- (void)setForceDisableBuildAnimation:(bool)arg1;
- (void)setForceDisableLoop:(bool)arg1;
- (void)setLoopTime:(struct FigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; })arg1;
- (void)setTopLevelGroupTransform:(id)arg1;
- (void)setTopLevelOpacity:(double)arg1;
- (void)setTranscriptionText:(id)arg1;
- (void)setupPublishedParameters:(id)arg1;
- (void)setupTitleParameters:(id)arg1;
- (void)setupTranscriptionParameters:(id)arg1;
- (void)setupTransitionParameters:(id)arg1;
- (bool)shouldRenderPreviewAtPosterTime;
- (void)storeDefaultStrings;
- (bool)supportsExtendedRangeInputs;
- (bool)supportsFlippingText;
- (bool)supportsOrientation;
- (id)textEditingBounds:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)textImagePoints:(struct CGPoint { double x1; double x2; }*)arg1 textAtIndex:(unsigned long long)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeDropShadow:(bool)arg4;
- (id)textTransforms:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)topLevelGroupTransform;
- (double)topLevelOpacity;
- (bool)transcriptionHitTest:(struct CGPoint { double x1; double x2; })arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)updateInspectableProperties:(id)arg1;

@end
