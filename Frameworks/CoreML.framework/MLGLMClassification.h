/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLGLMClassification : MLClassifier <MLModelSpecificationLoader> {
    int  classEncoding;
    NSMutableArray * classLabels;
    long long  classType;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__first_; 
        } __end_cap_; 
    }  intercept;
    struct shared_ptr<CoreML::Specification::Model> { 
        struct Model {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_spec;
    int  postEvalTransForm;
    struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { 
        struct vector<double, std::__1::allocator<double> > {} *__begin_; 
        struct vector<double, std::__1::allocator<double> > {} *__end_; 
        struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { 
            struct vector<double, std::__1::allocator<double> > {} *__first_; 
        } __end_cap_; 
    }  weights;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)calculateClassProbability:(double*)arg1 input:(id)arg2 error:(id*)arg3;
- (id)classify:(id)arg1 error:(id*)arg2;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)classify:(id)arg1 topK:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;

@end
