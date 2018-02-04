/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDEncryptedReader : OCDReader {
    OCCDecryptor * mDecryptor;
}

@property (nonatomic, readonly) OCCDecryptor *decryptor;

- (void)dealloc;
- (id)decryptor;
- (id)defaultPassphrase;
- (void)restartReaderToUseDecryptedDocument;
- (bool)retainDecryptorWithErrorCode:(int*)arg1;
- (void)useUnencryptedDocument;

@end