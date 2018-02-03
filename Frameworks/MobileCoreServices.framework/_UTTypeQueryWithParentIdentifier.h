/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _UTTypeQueryWithParentIdentifier : _UTTypeQuery {
    NSString * _parentIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)canIdentifierHaveChildren;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end