/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYInputDataItem : NSObject {
    id /* block */  _callback;
    NSMutableData * _data;
    unsigned long long  _length;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, readonly) NSMutableData *data;
@property (nonatomic) unsigned long long length;
@property (nonatomic, readonly) unsigned long long lengthRemaining;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)data;
- (id)init;
- (unsigned long long)length;
- (unsigned long long)lengthRemaining;
- (void)setCallback:(id /* block */)arg1;
- (void)setLength:(unsigned long long)arg1;

@end
