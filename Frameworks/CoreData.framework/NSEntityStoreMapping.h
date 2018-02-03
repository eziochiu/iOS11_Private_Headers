/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription * _entity;
    bool  _isSingleTableEntity;
    NSArray * _primaryKeys;
    NSDictionary * _propertyMappings;
    NSString * _subentityColumn;
    unsigned int  _subentityID;
}

- (id)attributeColumnDefinitions;
- (id)attributeMappings;
- (id)createTableStatement;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)foreignKeyColumnDefinitions;
- (id)foreignKeyConstraintDefinitions;
- (id)initWithEntity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSingleTableEntity;
- (id)primaryKeyColumnDefinitions;
- (id)primaryKeys;
- (id)propertyMappings;
- (id)relationshipMappings;
- (void)setEntity:(id)arg1;
- (void)setPrimaryKeys:(id)arg1;
- (void)setPropertyMappings:(id)arg1;
- (void)setSingleTableEntity:(bool)arg1;
- (void)setSubentityColumn:(id)arg1;
- (void)setSubentityID:(unsigned int)arg1;
- (id)subentityColumn;
- (unsigned int)subentityID;

@end