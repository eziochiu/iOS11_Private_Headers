/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFamilyCircle : NSObject <SSXPCCoding> {
    NSArray * _familyMembers;
    NSArray * _iTunesAccountNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *familyMembers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *iTunesAccountNames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allITunesAccountNames;
- (id)allITunesIdentifiers;
- (id)copyXPCEncoding;
- (id)familyMembers;
- (id)iTunesAccountNames;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)newCacheRepresentation;
- (void)setFamilyMembers:(id)arg1;
- (void)setITunesAccountNames:(id)arg1;

@end