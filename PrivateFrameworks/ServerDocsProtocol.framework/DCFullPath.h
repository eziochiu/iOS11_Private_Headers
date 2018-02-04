/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCFullPath : NSObject {
    DCService * _service;
    NSString * _string;
}

@property (readonly, retain) NSData *documentIdentifier;
@property (readonly, retain) DCService *service;
@property (readonly, retain) NSString *string;
@property (readonly, retain) NSURL *url;

+ (id)_fullPathWithDocumentIdentifier:(id)arg1 name:(id)arg2 forService:(id)arg3;
+ (id)_fullPathWithRoot:(id)arg1 documentIdentifier:(id)arg2 name:(id)arg3 forService:(id)arg4;
+ (id)_fullPathWithString:(id)arg1 forService:(id)arg2;
+ (id)_uploadDirectoryNameWithParentRelativePath:(id)arg1;
+ (id)documentRootForService:(id)arg1;
+ (id)fullPathWithDocumentIdentifier:(id)arg1 relativePath:(id)arg2;
+ (id)fullPathWithString:(id)arg1 forService:(id)arg2;
+ (id)fullPathWithString:(id)arg1 relativePath:(id)arg2;
+ (id)metadataFullPathWithDocumentIdentifier:(id)arg1 name:(id)arg2 forService:(id)arg3;
+ (id)metadataRootForService:(id)arg1;
+ (id)uploadFullPathWithParentRelativePath:(id)arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)documentIdentifier;
- (id)service;
- (id)string;
- (id)url;

@end
