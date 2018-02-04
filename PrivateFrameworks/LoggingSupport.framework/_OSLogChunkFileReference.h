/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogChunkFileReference : NSObject {
    _OSLogCollectionReference * _oslcr;
    const char * _path;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 subpath:(const char *)arg2;
- (id)map:(id*)arg1;

@end
