/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMDataArchiver : NSObject {
    bool  _backedUp;
    bool  _createDirectories;
    long long  _dataProtectionClass;
    NSURL * _fileURL;
}

@property (nonatomic) bool backedUp;
@property (nonatomic) bool createDirectories;
@property (nonatomic) long long dataProtectionClass;
@property (nonatomic, retain) NSURL *fileURL;

- (void).cxx_destruct;
- (bool)backedUp;
- (bool)createDirectories;
- (long long)dataProtectionClass;
- (unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (id)readArray:(id*)arg1;
- (id)readData:(id*)arg1 class:(Class)arg2;
- (id)readDictionary:(id*)arg1;
- (id)saveArray:(id)arg1;
- (bool)saveArray:(id)arg1 error:(id*)arg2;
- (id)saveDictionary:(id)arg1;
- (bool)saveDictionary:(id)arg1 error:(id*)arg2;
- (id)saveObject:(id)arg1;
- (void)setBackedUp:(bool)arg1;
- (void)setCreateDirectories:(bool)arg1;
- (void)setDataProtectionClass:(long long)arg1;
- (void)setFileURL:(id)arg1;

@end
