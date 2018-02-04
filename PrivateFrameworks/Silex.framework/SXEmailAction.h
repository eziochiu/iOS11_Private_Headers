/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmailAction : SXAction {
    NSString * _recipient;
    NSString * _subject;
}

@property (nonatomic, readonly) NSString *recipient;
@property (nonatomic, readonly) NSString *subject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)handlerClass;
- (id)initWithAddition:(id)arg1;
- (id)initWithSubject:(id)arg1 recipient:(id)arg2 addition:(id)arg3;
- (id)recipient;
- (id)subject;

@end
