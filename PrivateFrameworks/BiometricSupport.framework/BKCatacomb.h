/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

@interface BKCatacomb : NSObject {
    NSString * _catacombDir;
}

+ (id)catacombWithDir:(id)arg1 withSerial:(id)arg2;

- (void).cxx_destruct;
- (id)catacombCommitDir;
- (id)catacombPrepareDir;
- (int)commitWrite;
- (id)content;
- (int)deleteAll;
- (int)deleteFile:(id)arg1;
- (id)init;
- (int)readData:(id*)arg1 fromFile:(id)arg2;
- (int)recover;
- (int)syncDir:(id)arg1;
- (int)writeData:(id)arg1 toFile:(id)arg2;

@end