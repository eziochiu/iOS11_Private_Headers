/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3DatabaseNaturalStatement : NSObject {
    NSMutableArray * _parameters;
    NSString * _sql;
}

@property (nonatomic, retain) NSMutableArray *parameters;
@property (nonatomic, retain) NSString *sql;

+ (id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)parameters;
- (void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2;
- (void)setParameters:(id)arg1;
- (void)setSql:(id)arg1;
- (id)sql;

@end
