/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChangeRequestHelper : NSObject {
    id  _changeRequest;
    bool  _isMutated;
    bool  _isNew;
    NSMutableDictionary * _mutations;
    NSMutableSet * _nilMutations;
    NSManagedObjectID * _objectID;
    NSError * _placeholderRequestError;
    NSString * _uuid;
    NSString * _uuidSaveToken;
}

@property (nonatomic) id changeRequest;
@property (getter=isMutated, nonatomic) bool mutated;
@property (nonatomic, readonly) NSMutableDictionary *mutations;
@property (getter=isNew, nonatomic) bool new;
@property (nonatomic, readonly) NSMutableSet *nilMutations;
@property (nonatomic, retain) NSManagedObjectID *objectID;
@property (nonatomic, readonly) NSError *placeholderRequestError;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *uuidSaveToken;

+ (id)changeRequestForObject:(id)arg1;
+ (id)changeRequestWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;

- (void).cxx_destruct;
- (bool)_generateUUIDIfNecessary:(id*)arg1;
- (bool)_validateOrGenerateUUIDWithClientEntitled:(bool)arg1 changeRequest:(id)arg2;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)changeRequest;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)init;
- (id)initForNewObjectWithChangeRequest:(id)arg1;
- (id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3;
- (id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 clientEntitlements:(id)arg3;
- (bool)isMutated;
- (bool)isNew;
- (id)mutations;
- (id)nilMutations;
- (id)objectID;
- (id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2;
- (id)placeholderRequestError;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (void)setChangeRequest:(id)arg1;
- (void)setMutated:(bool)arg1;
- (void)setNew:(bool)arg1;
- (void)setObjectID:(id)arg1;
- (id)uuid;
- (id)uuidSaveToken;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end