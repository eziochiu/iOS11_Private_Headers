/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLNeuralNetworkEngine : MLModel <MLClassifier, MLCompiledModelLoader, MLModelSpecificationLoader, MLNeuralNetwork, MLRegressor, MLSpecificationCompiler> {
    unsigned int  _batchSize;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  _batches;
    NSArray * _classLabels;
    NSString * _classScoreVectorName;
    void * _context;
    int  _engine;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  _heights;
    struct map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _inputBuffers;
    NSArray * _inputLayers;
    bool  _isEspresoBiasPreprocessingShared;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  _ks;
    NSString * _modelFilePath;
    struct vector<const char *, std::__1::allocator<const char *> > { 
        char **__begin_; 
        char **__end_; 
        struct __compressed_pair<const char **, std::__1::allocator<const char *> > { 
            char **__first_; 
        } __end_cap_; 
    }  _names;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    unsigned long long  _numInputs;
    unsigned long long  _numOutputs;
    struct map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _outputBuffers;
    NSArray * _outputLayers;
    struct map<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _params;
    void * _plan;
    int  _precision;
    NSMutableDictionary * _probDict;
    int  _qos;
    unsigned int  _seqSize;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  _sequences;
    bool  _usingCPU;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  _widths;
}

@property (nonatomic) unsigned int batchSize;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<int' */ struct  batches; /* unknown property attribute:  std::__1::allocator<int> >=^i}} */
@property (nonatomic, retain) NSArray *classLabels;
@property (nonatomic, retain) NSString *classScoreVectorName;
@property (nonatomic) void*context;
@property (nonatomic) int engine;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<int' */ struct  heights; /* unknown property attribute:  std::__1::allocator<int> >=^i}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{map<std::__1::basic_string<char>' */ struct  inputBuffers; /* unknown property attribute:  true> >=Q}}} */
@property (nonatomic, readonly) NSArray *inputLayers;
@property (readonly) MLModelInterface *interface;
@property (nonatomic) bool isEspresoBiasPreprocessingShared;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<int' */ struct  ks; /* unknown property attribute:  std::__1::allocator<int> >=^i}} */
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, retain) NSString *modelFilePath;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<const char *' */ struct  names; /* unknown property attribute:  std::__1::allocator<const char *> >=^*}} */
@property (nonatomic) struct { void *x1; int x2; } network;
@property (nonatomic, readonly) unsigned long long numInputs;
@property (nonatomic, readonly) unsigned long long numOutputs;
@property (nonatomic) /* Warning: unhandled struct encoding: '{map<std::__1::basic_string<char>' */ struct  outputBuffers; /* unknown property attribute:  true> >=Q}}} */
@property (nonatomic, readonly) NSArray *outputLayers;
@property (nonatomic) /* Warning: unhandled struct encoding: '{map<std::__1::basic_string<char>' */ struct  params; /* unknown property attribute:  true> >=Q}}} */
@property (nonatomic) void*plan;
@property (nonatomic) int precision;
@property (nonatomic, retain) NSMutableDictionary *probDict;
@property (nonatomic) int qos;
@property (nonatomic) unsigned int seqSize;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<int' */ struct  sequences; /* unknown property attribute:  std::__1::allocator<int> >=^i}} */
@property (nonatomic) bool usingCPU;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<int' */ struct  widths; /* unknown property attribute:  std::__1::allocator<int> >=^i}} */

+ (id)compileSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 toArchive:(struct _MLModelOutputArchiver { struct OArchive { bool x_1_1_1; struct shared_ptr<Archiver::_OArchiveImpl> { struct _OArchiveImpl {} *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_1_1_2; struct map<std::__1::basic_string<char>, OArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, OArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, OArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_3_2_1; } x_1_1_3; } x1; }*)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 error:(id*)arg4;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
+ (id)neuralNetworkFromSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id*)arg4;
+ (id)neuralNetworkFromSpec:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_deallocContextAndPlan;
- (bool)_matchEngineToOptions:(id)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)_pixelBufferFromEbuf:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 description:(id)arg2 error:(id*)arg3;
- (bool)_setupContextAndPlanWithForceCPU:(bool)arg1 error:(id*)arg2;
- (unsigned int)batchSize;
- (struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })batches;
- (bool)bindInputsAndOutputs:(id)arg1 allocatedImageData:(struct vector<std::__1::shared_ptr<unsigned char>, std::__1::allocator<std::__1::shared_ptr<unsigned char> > > { struct shared_ptr<unsigned char> {} *x1; struct shared_ptr<unsigned char> {} *x2; struct __compressed_pair<std::__1::shared_ptr<unsigned char> *, std::__1::allocator<std::__1::shared_ptr<unsigned char> > > { struct shared_ptr<unsigned char> {} *x_3_1_1; } x3; }*)arg2 error:(id*)arg3;
- (id)classLabels;
- (id)classScoreVectorName;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void*)context;
- (void)dealloc;
- (int)engine;
- (id)evaluate:(id)arg1 error:(id*)arg2;
- (id)evaluateNoAutoRelease:(id)arg1 error:(id*)arg2;
- (struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })heights;
- (id)initWithSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id*)arg4;
- (id)initWithSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 forceCPU:(bool)arg4 error:(id*)arg5;
- (struct map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })inputBuffers;
- (id)inputLayers;
- (bool)isEspresoBiasPreprocessingShared;
- (struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })ks;
- (id)modelFilePath;
- (struct vector<const char *, std::__1::allocator<const char *> > { char **x1; char **x2; struct __compressed_pair<const char **, std::__1::allocator<const char *> > { char **x_3_1_1; } x3; })names;
- (struct { void *x1; int x2; })network;
- (unsigned long long)numInputs;
- (unsigned long long)numOutputs;
- (struct map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })outputBuffers;
- (id)outputLayers;
- (struct map<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })params;
- (void*)plan;
- (id)populateOutputs:(id*)arg1;
- (int)precision;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)probDict;
- (int)qos;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)resetSizes:(id)arg1 error:(id*)arg2;
- (bool)resetSizesNoAutoRelease:(id)arg1 error:(id*)arg2;
- (unsigned int)seqSize;
- (struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })sequences;
- (void)setBatchSize:(unsigned int)arg1;
- (void)setBatches:(struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })arg1;
- (void)setClassLabels:(id)arg1;
- (void)setClassScoreVectorName:(id)arg1;
- (void)setContext:(void*)arg1;
- (void)setEngine:(int)arg1;
- (void)setHeights:(struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })arg1;
- (void)setInputBuffers:(struct map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (void)setIsEspresoBiasPreprocessingShared:(bool)arg1;
- (void)setKs:(struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })arg1;
- (void)setModelFilePath:(id)arg1;
- (void)setNames:(struct vector<const char *, std::__1::allocator<const char *> > { char **x1; char **x2; struct __compressed_pair<const char **, std::__1::allocator<const char *> > { char **x_3_1_1; } x3; })arg1;
- (void)setNetwork:(struct { void *x1; int x2; })arg1;
- (void)setOutputBuffers:(struct map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (void)setParams:(struct map<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (void)setPlan:(void*)arg1;
- (void)setPrecision:(int)arg1;
- (void)setProbDict:(id)arg1;
- (void)setQos:(int)arg1;
- (void)setSeqSize:(unsigned int)arg1;
- (void)setSequences:(struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })arg1;
- (void)setUsingCPU:(bool)arg1;
- (void)setWidths:(struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })arg1;
- (bool)unlockCVPixelBuffers:(id)arg1 error:(id*)arg2;
- (bool)usingCPU;
- (id)verifyInputs:(id)arg1 error:(id*)arg2;
- (struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })widths;

@end
