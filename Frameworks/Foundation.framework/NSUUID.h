/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *UUIDString;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)UUIDString;
- (struct __CFString { }*)_cfUUIDString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char)arg1;
- (id)initWithUUIDString:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)_LS_UUIDWithData:(id)arg1;
+ (id)_LS_UUIDWithData:(id)arg1 SHA1:(bool)arg2;
+ (id)_LS_nullUUID;

@end
