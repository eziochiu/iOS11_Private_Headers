/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUUUIDSubsetCreator : NSObject {
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
        struct UUIDData<TSP::UUIDData> {} *__begin_; 
        struct UUIDData<TSP::UUIDData> {} *__end_; 
        struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
            struct UUIDData<TSP::UUIDData> {} *__first_; 
        } __end_cap_; 
    }  _baseUuidVector;
    NSMutableDictionary * _createdSubsetsByRange;
    TSUUUIDSetStore * _uuidSetStore;
}

@property (readonly) const /* Warning: unhandled struct encoding: '{vector<TSU::UUIDData<TSP::UUIDData>' */ struct *baseUuidVector; /* unknown property attribute:  std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >=^{UUIDData<TSP::UUIDData>}}} */
@property (readonly) TSUUUIDSetStore *uuidSetStore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)baseUuidVector;
- (id)initWithUuidSetStore:(id)arg1 baseUuidVector:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg2;
- (id)uuidSetStore;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end