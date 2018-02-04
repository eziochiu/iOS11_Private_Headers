/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteDatabaseTableSchema : NSObject {
    NSDictionary * _columns;
    NSSet * _indices;
    NSString * _name;
}

@property (nonatomic, retain) NSDictionary *columns;
@property (nonatomic, retain) NSSet *indices;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)columns;
- (id)description;
- (unsigned long long)hash;
- (id)indices;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setColumns:(id)arg1;
- (void)setIndices:(id)arg1;
- (void)setName:(id)arg1;

@end