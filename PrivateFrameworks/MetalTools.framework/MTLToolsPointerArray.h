/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsPointerArray : NSObject {
    unsigned int  _options;
    unsigned long long  _pointerAdditions;
    struct unordered_set<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *> > { 
        struct __hash_table<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<void *, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *>, std::__1::allocator<std::__1::__hash_node<void *, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<void *, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<void *, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<void *> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<void *> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _pointerSet;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addPointer:(void*)arg1;
- (id)_objectAssociatedWithBaseObject:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)addPointer:(void*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)enumeratePointersUsingBlock:(id /* block */)arg1;
- (id)initWithOptions:(unsigned int)arg1;
- (id)newObjectAssociatedWithBaseObject:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)objectAssociatedWithBaseObject:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)removeObjectAssociatedWithBaseObject:(id)arg1;
- (void)removePointer:(void*)arg1;

@end