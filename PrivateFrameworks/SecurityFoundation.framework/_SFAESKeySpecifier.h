/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFAESKeySpecifier : _SFSymmetricKeySpecifier {
    id  _aesKeySpecifierInternal;
}

@property (nonatomic) long long bitSize;
@property (nonatomic, readonly) long long blockSize;

+ (Class)keyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)bitSize;
- (long long)blockSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBitSize:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)keyLengthInBytes;
- (void)setBitSize:(long long)arg1;

@end