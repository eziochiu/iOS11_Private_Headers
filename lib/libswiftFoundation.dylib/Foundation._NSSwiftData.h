/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Swift/libswiftFoundation.dylib
 */

@interface Foundation._NSSwiftData : NSData {
    void _backing;
    void _range;
}

@property (nonatomic, readonly) void*bytes;
@property (nonatomic, readonly) long long length;

- (id /* block */).cxx_destruct;
- (bool)_isCompact;
- (bool)_providesConcreteBacking;
- (void*)bytes;
- (id)copyWithZone:(void*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)length;
- (id)mutableCopyWithZone:(void*)arg1;

@end
