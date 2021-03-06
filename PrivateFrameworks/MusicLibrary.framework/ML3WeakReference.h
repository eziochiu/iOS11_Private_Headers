/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3WeakReference : NSObject {
    id  _object;
    unsigned long long  _objectAddress;
}

+ (id)weakReferenceWithObject:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
