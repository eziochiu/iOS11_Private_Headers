/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMigrator : NSObject {
    TSSPropertySet * mPropertiesToForce;
    TSUIntToIntDictionary * mShouldForceFlags;
    TSUIntegerKeyDictionary * mValuesToForce;
}

- (void)dealloc;
- (id)initWithProperties:(id)arg1;
- (void)migrateToSeries:(id)arg1;
- (void)visitExistingSeries:(id)arg1;

@end
