/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBindIntarray : NSObject {
    unsigned int  _index;
    NSString * _tableName;
    id  _value;
}

@property unsigned int index;
@property (retain) NSString *tableName;
@property (retain) id value;

- (void)dealloc;
- (unsigned int)index;
- (id)initWithValue:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setTableName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)tableName;
- (id)value;

@end
